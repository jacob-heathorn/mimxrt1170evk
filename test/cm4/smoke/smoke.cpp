// Smallest possible cross-compile target. Verifies the arm-none-eabi
// toolchain wiring works end-to-end before we bring in startup files,
// linker scripts, and HAL drivers.
int main() {
    while (1) {
    }
    return 0;
}
