{
  description = "Mimxrt1170evk flake";

  inputs = {
    # Inherit the original forge flake
    forge.url = "path:/home/jacob/embedded/nxp/forge";  # TODO discover with gordion.

    # Add mcux-soc-svd repository here instead of in forge
    mcux-soc-svd = {
      url = "github:nxp-mcuxpresso/mcux-soc-svd/MCUX_2.16.100";
      flake = false;  # It's not a flake, just a repo
    };
  };

  outputs = { self, nixpkgs, forge, mcux-soc-svd }: let
    system = "x86_64-linux";
    pkgs = import nixpkgs { inherit system; };
    forgeDevShell = forge.devShells.${system}.default;  # Reuse forge's dev shell
    svdRepoPath = builtins.toString mcux-soc-svd;
  in {
    devShells.${system}.default = pkgs.mkShell {
      inherit (forgeDevShell) buildInputs;  # Inherit from forge

      shellHook = ''
        ${forgeDevShell.shellHook}  # Run forge shellHook
        export MCUX_SOC_SVD_ROOT=${svdRepoPath}  # Add mcux-soc-svd path
        echo -e "\033[1;34mExtended forge development shell initialized.\033[0m"
      '';
    };
  };
}
