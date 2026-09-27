"""Build settings for the vendored NXP MCUXpresso SDK under firmware/<core>/legacy."""

_SDK_DIRS = [
    "board",
    "cmsis",
    "component/uart",
    "device",
    "drivers",
    "mcmgr",
    "utilities",
]

# -isystem flags for the SDK's headers, so our warnings do not fire inside them.
def sdk_system_includes(core):
    return ["-isystemfirmware/{}/legacy/{}".format(core, dir) for dir in _SDK_DIRS]

# The SDK does not compile cleanly under forge's warning set.
HAL_COPTS = [
    "-Wno-sign-conversion",
    "-Wno-unused-parameter",
    "-Wno-switch-enum",
    "-Wno-missing-field-initializers",
    "-Wno-shadow",
]

# SDK configuration shared by both cores.
SDK_DEFINES = [
    "MCUXPRESSO_SDK",
    "MULTICORE_APP=1",
    "MCMGR_HANDLE_EXCEPTIONS=1",
    "FLEXSPI_IN_USE",
    "__SEMIHOST_HARDFAULT_DISABLE=1",
    "__STARTUP_CLEAR_BSS",
    "__STARTUP_INITIALIZE_NONCACHEDATA",
]

# The SDK's own assert switch, on in debug builds only.
DEBUG_DEFINES = select({
    "@forge//bazel:dbg": ["DEBUG"],
    "//conditions:default": [],
})
