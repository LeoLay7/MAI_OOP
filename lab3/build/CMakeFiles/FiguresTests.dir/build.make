# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/OOP/lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/OOP/lab3/build

# Include any dependencies generated for this target.
include CMakeFiles/FiguresTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FiguresTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FiguresTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FiguresTests.dir/flags.make

CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o: /workspaces/OOP/lab3/test/testCoordinates.cpp
CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o -MF CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o.d -o CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o -c /workspaces/OOP/lab3/test/testCoordinates.cpp

CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/test/testCoordinates.cpp > CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.i

CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/test/testCoordinates.cpp -o CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.s

CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o: /workspaces/OOP/lab3/test/testFigureArray.cpp
CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o -MF CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o.d -o CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o -c /workspaces/OOP/lab3/test/testFigureArray.cpp

CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/test/testFigureArray.cpp > CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.i

CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/test/testFigureArray.cpp -o CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.s

CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o: /workspaces/OOP/lab3/test/testRectangle.cpp
CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o -MF CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o.d -o CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o -c /workspaces/OOP/lab3/test/testRectangle.cpp

CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/test/testRectangle.cpp > CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.i

CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/test/testRectangle.cpp -o CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.s

CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o: /workspaces/OOP/lab3/test/testSquare.cpp
CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o -MF CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o.d -o CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o -c /workspaces/OOP/lab3/test/testSquare.cpp

CMakeFiles/FiguresTests.dir/test/testSquare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/test/testSquare.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/test/testSquare.cpp > CMakeFiles/FiguresTests.dir/test/testSquare.cpp.i

CMakeFiles/FiguresTests.dir/test/testSquare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/test/testSquare.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/test/testSquare.cpp -o CMakeFiles/FiguresTests.dir/test/testSquare.cpp.s

CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o: /workspaces/OOP/lab3/test/testTriangle.cpp
CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o -MF CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o.d -o CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o -c /workspaces/OOP/lab3/test/testTriangle.cpp

CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/test/testTriangle.cpp > CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.i

CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/test/testTriangle.cpp -o CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.s

CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o: /workspaces/OOP/lab3/src/Coordinates.cpp
CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o -MF CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o.d -o CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o -c /workspaces/OOP/lab3/src/Coordinates.cpp

CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Coordinates.cpp > CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.i

CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Coordinates.cpp -o CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.s

CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o: /workspaces/OOP/lab3/src/FigureArray.cpp
CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o -MF CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o.d -o CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o -c /workspaces/OOP/lab3/src/FigureArray.cpp

CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/FigureArray.cpp > CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.i

CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/FigureArray.cpp -o CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.s

CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o: /workspaces/OOP/lab3/src/Rectangle.cpp
CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o -MF CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o.d -o CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o -c /workspaces/OOP/lab3/src/Rectangle.cpp

CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Rectangle.cpp > CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.i

CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Rectangle.cpp -o CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.s

CMakeFiles/FiguresTests.dir/src/Square.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/src/Square.cpp.o: /workspaces/OOP/lab3/src/Square.cpp
CMakeFiles/FiguresTests.dir/src/Square.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/FiguresTests.dir/src/Square.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/src/Square.cpp.o -MF CMakeFiles/FiguresTests.dir/src/Square.cpp.o.d -o CMakeFiles/FiguresTests.dir/src/Square.cpp.o -c /workspaces/OOP/lab3/src/Square.cpp

CMakeFiles/FiguresTests.dir/src/Square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/src/Square.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Square.cpp > CMakeFiles/FiguresTests.dir/src/Square.cpp.i

CMakeFiles/FiguresTests.dir/src/Square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/src/Square.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Square.cpp -o CMakeFiles/FiguresTests.dir/src/Square.cpp.s

CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o: CMakeFiles/FiguresTests.dir/flags.make
CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o: /workspaces/OOP/lab3/src/Triangle.cpp
CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o: CMakeFiles/FiguresTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o -MF CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o.d -o CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o -c /workspaces/OOP/lab3/src/Triangle.cpp

CMakeFiles/FiguresTests.dir/src/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresTests.dir/src/Triangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Triangle.cpp > CMakeFiles/FiguresTests.dir/src/Triangle.cpp.i

CMakeFiles/FiguresTests.dir/src/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresTests.dir/src/Triangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Triangle.cpp -o CMakeFiles/FiguresTests.dir/src/Triangle.cpp.s

# Object files for target FiguresTests
FiguresTests_OBJECTS = \
"CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o" \
"CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o" \
"CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o" \
"CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o" \
"CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o" \
"CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o" \
"CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o" \
"CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o" \
"CMakeFiles/FiguresTests.dir/src/Square.cpp.o" \
"CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o"

# External object files for target FiguresTests
FiguresTests_EXTERNAL_OBJECTS =

FiguresTests: CMakeFiles/FiguresTests.dir/test/testCoordinates.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/test/testFigureArray.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/test/testRectangle.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/test/testSquare.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/test/testTriangle.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/src/Coordinates.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/src/FigureArray.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/src/Rectangle.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/src/Square.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/src/Triangle.cpp.o
FiguresTests: CMakeFiles/FiguresTests.dir/build.make
FiguresTests: lib/libgtest.a
FiguresTests: lib/libgtest_main.a
FiguresTests: lib/libgtest.a
FiguresTests: CMakeFiles/FiguresTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable FiguresTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FiguresTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FiguresTests.dir/build: FiguresTests
.PHONY : CMakeFiles/FiguresTests.dir/build

CMakeFiles/FiguresTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FiguresTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FiguresTests.dir/clean

CMakeFiles/FiguresTests.dir/depend:
	cd /workspaces/OOP/lab3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/OOP/lab3 /workspaces/OOP/lab3 /workspaces/OOP/lab3/build /workspaces/OOP/lab3/build /workspaces/OOP/lab3/build/CMakeFiles/FiguresTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FiguresTests.dir/depend

