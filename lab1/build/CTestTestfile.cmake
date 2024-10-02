# CMake generated Testfile for 
# Source directory: C:/Code/CCode/OOP/lab1
# Build directory: C:/Code/CCode/OOP/lab1/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "C:/Code/CCode/OOP/lab1/build/tests.exe")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Code/CCode/OOP/lab1/CMakeLists.txt;32;add_test;C:/Code/CCode/OOP/lab1/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
