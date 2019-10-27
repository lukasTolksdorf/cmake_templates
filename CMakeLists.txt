cmake_minimum_required(VERSION 3.12)

project(CppPrimer CXX)

# include the general compiler warning interface target
include(common/cmake/includes/warnings.cmake)

# set module path and include needed modules
set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/common/cmake/modules")
include(addNewLibraryTarget)

add_subdirectory(FirstProgramm)
add_subdirectory(firstLib)
