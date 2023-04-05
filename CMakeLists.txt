cmake_minimum_required(VERSION 3.10)

project(battleships)

add_executable(
    battleships
    battleships/battleships.cpp)

add_executable(
    battleship_tests
    battleships/battleship_tests.cpp
    battleships/ship.cpp
    battleships/ship_tests.cpp)
   
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

target_link_libraries(battleship_tests Boost::unit_test_framework)
target_compile_definitions(battleship_tests PUBLIC BOOST_TEST_DYN_LINK)
enable_testing()
add_test(battleship_tests battleship_tests)