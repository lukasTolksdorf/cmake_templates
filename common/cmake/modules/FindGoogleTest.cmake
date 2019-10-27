message(STATUS "Check for existing googletest submodule")
execute_process(COMMAND ${GIT_EXECUTABLE} submodule status
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        OUTPUT_VARIABLE GIT_SUBMOD_STATUS)

if (GIT_SUBMOD_STATUS MATCHES "extern[/\\]googletest")

    message(STATUS "googletest already a submodule.. update")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE GIT_SUBMOD_RESULT)
    if (NOT GIT_SUBMOD_RESULT EQUAL "0")
        message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
    endif ()
else ()
    message(STATUS "googletest not found.. download")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule add https://github.com/google/googletest.git extern/googletest
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE GIT_SUBMOD_RESULT)
    if (NOT GIT_SUBMOD_RESULT EQUAL "0")
        message(FATAL_ERROR "git submodule failed with ${GIT_SUBMOD_RESULT}")
    endif ()
endif ()

add_subdirectory(${PROJECT_SOURCE_DIR}/extern/googletest)

