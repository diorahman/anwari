include_directories(../include ../deps/catch)
add_test(testhello testhello)
add_executable(testhello hello.cpp)
target_link_libraries(testhello anwari)
