find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(hello_world_test hello_world_test.cpp)

target_link_libraries(hello_world_test PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

target_include_directories(hello_world_test
PRIVATE ..)

gtest_discover_tests(hello_world_test)