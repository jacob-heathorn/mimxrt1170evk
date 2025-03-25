{
  description = "Mimxrt1170evk forge-extended flake";

  inputs = {
    # Inherit the forge flake. NOTE: Even though forge is locally managed with gordion, we cannot
    # use environment variable to reference the local forge path, because the flake becomes impure.
    forge.url = "git+https://github.com/jacob-heathorn/forge?rev=3dc4577b006d33e5e63e1f97c8b8e2b108e372a6";

    # Add mcux-soc-svd repository.
    mcux-soc-svd = {
      url = "github:nxp-mcuxpresso/mcux-soc-svd/MCUX_2.16.100";
      flake = false;
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
