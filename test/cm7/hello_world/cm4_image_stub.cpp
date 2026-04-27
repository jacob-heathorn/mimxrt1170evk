// Placeholder for the cm4 binary that the cm7 image is supposed to copy
// into RAM at boot. Replaced by the real .bin.cpp output of
// //test/cm4/hello_world:hello-world-cm4.bin.cpp once the cross-core
// transition is wired up.

extern "C" {
unsigned char hello_world_cm4_bin[1] = {0};
unsigned int hello_world_cm4_bin_len = 0;
}
