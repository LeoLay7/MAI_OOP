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
include CMakeFiles/FiguresApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FiguresApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FiguresApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FiguresApp.dir/flags.make

CMakeFiles/FiguresApp.dir/main.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/main.cpp.o: /workspaces/OOP/lab3/main.cpp
CMakeFiles/FiguresApp.dir/main.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FiguresApp.dir/main.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/main.cpp.o -MF CMakeFiles/FiguresApp.dir/main.cpp.o.d -o CMakeFiles/FiguresApp.dir/main.cpp.o -c /workspaces/OOP/lab3/main.cpp

CMakeFiles/FiguresApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/main.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/main.cpp > CMakeFiles/FiguresApp.dir/main.cpp.i

CMakeFiles/FiguresApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/main.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/main.cpp -o CMakeFiles/FiguresApp.dir/main.cpp.s

CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o: /workspaces/OOP/lab3/src/Coordinates.cpp
CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o -MF CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o.d -o CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o -c /workspaces/OOP/lab3/src/Coordinates.cpp

CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Coordinates.cpp > CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.i

CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Coordinates.cpp -o CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.s

CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o: /workspaces/OOP/lab3/src/FigureArray.cpp
CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o -MF CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o.d -o CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o -c /workspaces/OOP/lab3/src/FigureArray.cpp

CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/FigureArray.cpp > CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.i

CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/FigureArray.cpp -o CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.s

CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o: /workspaces/OOP/lab3/src/Rectangle.cpp
CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o -MF CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o.d -o CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o -c /workspaces/OOP/lab3/src/Rectangle.cpp

CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Rectangle.cpp > CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.i

CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Rectangle.cpp -o CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.s

CMakeFiles/FiguresApp.dir/src/Square.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/src/Square.cpp.o: /workspaces/OOP/lab3/src/Square.cpp
CMakeFiles/FiguresApp.dir/src/Square.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FiguresApp.dir/src/Square.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/src/Square.cpp.o -MF CMakeFiles/FiguresApp.dir/src/Square.cpp.o.d -o CMakeFiles/FiguresApp.dir/src/Square.cpp.o -c /workspaces/OOP/lab3/src/Square.cpp

CMakeFiles/FiguresApp.dir/src/Square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/src/Square.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Square.cpp > CMakeFiles/FiguresApp.dir/src/Square.cpp.i

CMakeFiles/FiguresApp.dir/src/Square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/src/Square.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Square.cpp -o CMakeFiles/FiguresApp.dir/src/Square.cpp.s

CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o: CMakeFiles/FiguresApp.dir/flags.make
CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o: /workspaces/OOP/lab3/src/Triangle.cpp
CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o: CMakeFiles/FiguresApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o -MF CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o.d -o CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o -c /workspaces/OOP/lab3/src/Triangle.cpp

CMakeFiles/FiguresApp.dir/src/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiguresApp.dir/src/Triangle.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab3/src/Triangle.cpp > CMakeFiles/FiguresApp.dir/src/Triangle.cpp.i

CMakeFiles/FiguresApp.dir/src/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiguresApp.dir/src/Triangle.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab3/src/Triangle.cpp -o CMakeFiles/FiguresApp.dir/src/Triangle.cpp.s

# Object files for target FiguresApp
FiguresApp_OBJECTS = \
"CMakeFiles/FiguresApp.dir/main.cpp.o" \
"CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o" \
"CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o" \
"CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o" \
"CMakeFiles/FiguresApp.dir/src/Square.cpp.o" \
"CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o"

# External object files for target FiguresApp
FiguresApp_EXTERNAL_OBJECTS =

FiguresApp: CMakeFiles/FiguresApp.dir/main.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/src/Coordinates.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/src/FigureArray.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/src/Rectangle.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/src/Square.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/src/Triangle.cpp.o
FiguresApp: CMakeFiles/FiguresApp.dir/build.make
FiguresApp: CMakeFiles/FiguresApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/OOP/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable FiguresApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FiguresApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FiguresApp.dir/build: FiguresApp
.PHONY : CMakeFiles/FiguresApp.dir/build

CMakeFiles/FiguresApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FiguresApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FiguresApp.dir/clean

CMakeFiles/FiguresApp.dir/depend:
	cd /workspaces/OOP/lab3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/OOP/lab3 /workspaces/OOP/lab3 /workspaces/OOP/lab3/build /workspaces/OOP/lab3/build /workspaces/OOP/lab3/build/CMakeFiles/FiguresApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FiguresApp.dir/depend
