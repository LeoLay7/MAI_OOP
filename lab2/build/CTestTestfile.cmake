# CMake generated Testfile for 
# Source directory: /workspaces/OOP/lab2
# Build directory: /workspaces/OOP/lab2/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/workspaces/OOP/lab2/build/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/OOP/lab2/CMakeLists.txt;32;add_test;/workspaces/OOP/lab2/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
