add_executable(Ut_firstLib
        PublicClass_test.cc
        )

target_link_libraries(Ut_firstLib
        firstLib
        gtest gmock gtest_main)