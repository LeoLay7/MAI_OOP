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
CMAKE_SOURCE_DIR = /workspaces/OOP/lab16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/OOP/lab16/build

# Include any dependencies generated for this target.
include CMakeFiles/lab06.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab06.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab06.dir/flags.make

CMakeFiles/lab06.dir/main.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/main.cpp.o: /workspaces/OOP/lab16/main.cpp
CMakeFiles/lab06.dir/main.cpp.o: CMakeFiles/lab06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab06.dir/main.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab06.dir/main.cpp.o -MF CMakeFiles/lab06.dir/main.cpp.o.d -o CMakeFiles/lab06.dir/main.cpp.o -c /workspaces/OOP/lab16/main.cpp

CMakeFiles/lab06.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/main.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab16/main.cpp > CMakeFiles/lab06.dir/main.cpp.i

CMakeFiles/lab06.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/main.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab16/main.cpp -o CMakeFiles/lab06.dir/main.cpp.s

CMakeFiles/lab06.dir/npc/dragon.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/npc/dragon.cpp.o: /workspaces/OOP/lab16/npc/dragon.cpp
CMakeFiles/lab06.dir/npc/dragon.cpp.o: CMakeFiles/lab06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab06.dir/npc/dragon.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab06.dir/npc/dragon.cpp.o -MF CMakeFiles/lab06.dir/npc/dragon.cpp.o.d -o CMakeFiles/lab06.dir/npc/dragon.cpp.o -c /workspaces/OOP/lab16/npc/dragon.cpp

CMakeFiles/lab06.dir/npc/dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/npc/dragon.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab16/npc/dragon.cpp > CMakeFiles/lab06.dir/npc/dragon.cpp.i

CMakeFiles/lab06.dir/npc/dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/npc/dragon.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab16/npc/dragon.cpp -o CMakeFiles/lab06.dir/npc/dragon.cpp.s

CMakeFiles/lab06.dir/npc/frog.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/npc/frog.cpp.o: /workspaces/OOP/lab16/npc/frog.cpp
CMakeFiles/lab06.dir/npc/frog.cpp.o: CMakeFiles/lab06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab06.dir/npc/frog.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab06.dir/npc/frog.cpp.o -MF CMakeFiles/lab06.dir/npc/frog.cpp.o.d -o CMakeFiles/lab06.dir/npc/frog.cpp.o -c /workspaces/OOP/lab16/npc/frog.cpp

CMakeFiles/lab06.dir/npc/frog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/npc/frog.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab16/npc/frog.cpp > CMakeFiles/lab06.dir/npc/frog.cpp.i

CMakeFiles/lab06.dir/npc/frog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/npc/frog.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab16/npc/frog.cpp -o CMakeFiles/lab06.dir/npc/frog.cpp.s

CMakeFiles/lab06.dir/npc/knight.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/npc/knight.cpp.o: /workspaces/OOP/lab16/npc/knight.cpp
CMakeFiles/lab06.dir/npc/knight.cpp.o: CMakeFiles/lab06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/OOP/lab16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab06.dir/npc/knight.cpp.o"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab06.dir/npc/knight.cpp.o -MF CMakeFiles/lab06.dir/npc/knight.cpp.o.d -o CMakeFiles/lab06.dir/npc/knight.cpp.o -c /workspaces/OOP/lab16/npc/knight.cpp

CMakeFiles/lab06.dir/npc/knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/npc/knight.cpp.i"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/OOP/lab16/npc/knight.cpp > CMakeFiles/lab06.dir/npc/knight.cpp.i

CMakeFiles/lab06.dir/npc/knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/npc/knight.cpp.s"
	/usr/local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/OOP/lab16/npc/knight.cpp -o CMakeFiles/lab06.dir/npc/knight.cpp.s

# Object files for target lab06
lab06_OBJECTS = \
"CMakeFiles/lab06.dir/main.cpp.o" \
"CMakeFiles/lab06.dir/npc/dragon.cpp.o" \
"CMakeFiles/lab06.dir/npc/frog.cpp.o" \
"CMakeFiles/lab06.dir/npc/knight.cpp.o"

# External object files for target lab06
lab06_EXTERNAL_OBJECTS =

lab06: CMakeFiles/lab06.dir/main.cpp.o
lab06: CMakeFiles/lab06.dir/npc/dragon.cpp.o
lab06: CMakeFiles/lab06.dir/npc/frog.cpp.o
lab06: CMakeFiles/lab06.dir/npc/knight.cpp.o
lab06: CMakeFiles/lab06.dir/build.make
lab06: CMakeFiles/lab06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/OOP/lab16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lab06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab06.dir/build: lab06
.PHONY : CMakeFiles/lab06.dir/build

CMakeFiles/lab06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab06.dir/clean

CMakeFiles/lab06.dir/depend:
	cd /workspaces/OOP/lab16/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/OOP/lab16 /workspaces/OOP/lab16 /workspaces/OOP/lab16/build /workspaces/OOP/lab16/build /workspaces/OOP/lab16/build/CMakeFiles/lab06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab06.dir/depend

