# CMake generated Testfile for 
# Source directory: /workspaces/OOP/lab16
# Build directory: /workspaces/OOP/lab16/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lab_tests "/workspaces/OOP/lab16/build/lab_tests")
set_tests_properties(lab_tests PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/OOP/lab16/CMakeLists.txt;34;add_test;/workspaces/OOP/lab16/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
