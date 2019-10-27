cmake_minimum_required(VERSION 3.12)

project(CppPrimer CXX)


# set module path and include needed modules
set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/common/cmake/modules")
include(addNewLibraryTarget)

# check if project is a git repo
include(checkIsGitRepo)
isGitRepo()

# include googletest
find_package(GoogleTest)


# include the general compiler warning interface target
include(common/cmake/includes/warnings.cmake)

add_subdirectory(FirstProgramm)
add_subdirectory(firstLib)
