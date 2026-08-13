cmake_minimum_required(VERSION 3.14)
project(EverydayAlgorithms LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Problem 1: Bill Generator for Shops
add_executable(BillGeneratorforShops problems/BillGeneratorforShops/solution.cpp)
add_test(NAME test_BillGeneratorforShops COMMAND BillGeneratorforShops)
set_tests_properties(test_BillGeneratorforShops PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/BillGeneratorforShops/input.txt")

# Problem 2: Bus Seating Problem
add_executable(bus-seating-problem problems/bus-seating-problem/solution.cpp)
add_test(NAME test_bus-seating-problem COMMAND bus-seating-problem)
set_tests_properties(test_bus-seating-problem PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/bus-seating-problem/input.txt")

# Problem 3: Call Center Simulator
add_executable(callCenterSimulator problems/callCenterSimulator/solution.cpp)
add_test(NAME test_callCenterSimulator COMMAND callCenterSimulator)
set_tests_properties(test_callCenterSimulator PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/callCenterSimulator/input.txt")

# Problem 4: Checkout Queue Problem I
add_executable(checkout-queue-problem-I problems/checkout-queue-problem-I/solution.cpp)
add_test(NAME test_checkout-queue-problem-I COMMAND checkout-queue-problem-I)
set_tests_properties(test_checkout-queue-problem-I PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/checkout-queue-problem-I/input.txt")

# Problem 5: Couple Dancing Competition
add_executable(couple-dancing-competition problems/couple-dancing-competition/solution.cpp)
add_test(NAME test_couple-dancing-competition COMMAND couple-dancing-competition)
set_tests_properties(test_couple-dancing-competition PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/couple-dancing-competition/input.txt")

# Problem 6: The Parking Management
add_executable(the-parking-management problems/the-parking-management/solution.cpp)
add_test(NAME test_the-parking-management COMMAND the-parking-management)
set_tests_properties(test_the-parking-management PROPERTIES INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problems/the-parking-management/input.txt")
