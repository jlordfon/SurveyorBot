find_package(GTest CONFIG REQUIRED)

add_executable(hello_world_test hello_world_test.cpp)

target_link_libraries(hello_world_test PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

target_include_directories(hello_world_test
PRIVATE ..)

#add_test(helloWorldTests hello_world_test)