project("anwari")
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
        "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/EHsc")
endif()

if (NOT CONFIGURED_ONCE)
    if (NOT MSVC)
        set(CMAKE_CXX_FLAGS "-std=c++14 ${warnings}"
            CACHE STRING "Flags used by the compiler during all build types." FORCE)
    endif()
endif()

include_directories(include)

enable_testing()
add_subdirectory(src)
add_subdirectory(tests)
