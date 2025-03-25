{
  description = "Mimxrt1170evk forge-extended flake";

  inputs = {
    # Inherit the forge flake
    forge.url = "path:${builtins.getEnv "FORGE_ROOT"}";

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
        echo -e "\e[32mExtended forge development shell for mimxrt1170evk!\e[0m"
      '';
    };
  };
}
