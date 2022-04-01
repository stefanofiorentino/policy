add_executable(foo foo.cpp)
target_include_directories(foo PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME foo COMMAND foo)
