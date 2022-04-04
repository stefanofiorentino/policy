add_executable(speak speak.cpp)
target_include_directories(speak PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME speak COMMAND speak)
