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
CMAKE_SOURCE_DIR = /workspaces/OOP/lab4/build/_deps/googletest-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/OOP/lab4/build/_deps/googletest-subbuild

# Utility rule file for googletest-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/googletest-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/googletest-populate.dir/progress.make

CMakeFiles/googletest-populate: CMakeFiles/googletest-populate-complete

CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'googletest-populate'"
	/usr/bin/cmake -E make_directory /workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles/googletest-populate-complete
	/usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-done

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update:
.PHONY : googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E echo_append
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure: googletest-populate-prefix/tmp/googletest-populate-cfgcmd.txt
googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E echo_append
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-gitinfo.txt
googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps && /usr/bin/cmake -P /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp/googletest-populate-gitclone.cmake
	cd /workspaces/OOP/lab4/build/_deps && /usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E echo_append
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'googletest-populate'"
	/usr/bin/cmake -Dcfgdir= -P /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp/googletest-populate-mkdirs.cmake
	/usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'googletest-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update:
.PHONY : googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E echo_append
	cd /workspaces/OOP/lab4/build/_deps/googletest-build && /usr/bin/cmake -E touch /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'googletest-populate'"
	cd /workspaces/OOP/lab4/build/_deps/googletest-src && /usr/bin/cmake -P /workspaces/OOP/lab4/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp/googletest-populate-gitupdate.cmake

googletest-populate: CMakeFiles/googletest-populate
googletest-populate: CMakeFiles/googletest-populate-complete
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
googletest-populate: CMakeFiles/googletest-populate.dir/build.make
.PHONY : googletest-populate

# Rule to build all files generated by this target.
CMakeFiles/googletest-populate.dir/build: googletest-populate
.PHONY : CMakeFiles/googletest-populate.dir/build

CMakeFiles/googletest-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/googletest-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/googletest-populate.dir/clean

CMakeFiles/googletest-populate.dir/depend:
	cd /workspaces/OOP/lab4/build/_deps/googletest-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/OOP/lab4/build/_deps/googletest-subbuild /workspaces/OOP/lab4/build/_deps/googletest-subbuild /workspaces/OOP/lab4/build/_deps/googletest-subbuild /workspaces/OOP/lab4/build/_deps/googletest-subbuild /workspaces/OOP/lab4/build/_deps/googletest-subbuild/CMakeFiles/googletest-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/googletest-populate.dir/depend

