cmake_minimum_required(VERSION 3.25)
project(strings)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(BUILD_TESTS "Build tests cases" ON)

include(FetchContent)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/sources/objects/*.cpp")
file(GLOB_RECURSE TESTS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cc")

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 --coverage")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories(sources/include)

if (BUILD_TESTS)
    FetchContent_Declare(
            googletest
            URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    )

    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    enable_testing()
    add_executable(tests ${SOURCES} ${TESTS})
    target_link_libraries(tests GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif()

add_executable(strings main.cpp ${SOURCES})
