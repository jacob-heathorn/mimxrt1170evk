add_executable(foc main.cpp)
platformify(foc)
target_link_libraries(foc PRIVATE cm7_drivers)
