cmake_minimum_required(VERSION 3.7)
project(EUROTRANS-Logger)

set(CMAKE_CXX_STANDARD 11)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")

if(MSVC)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
endif()

if(MSVC OR MINGW)
    configure_file(packaging/Windows/InnoSetup.iss.in InnoSetup.iss @ONLY)
endif()

add_subdirectory(scs-sdk)
add_subdirectory(plugin)
add_subdirectory(gui)
