# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/walter/CLionProjects/fileio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fileio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fileio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fileio.dir/flags.make

CMakeFiles/fileio.dir/fileio/lession01.c.o: CMakeFiles/fileio.dir/flags.make
CMakeFiles/fileio.dir/fileio/lession01.c.o: ../fileio/lession01.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fileio.dir/fileio/lession01.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fileio.dir/fileio/lession01.c.o   -c /mnt/c/Users/walter/CLionProjects/fileio/fileio/lession01.c

CMakeFiles/fileio.dir/fileio/lession01.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fileio.dir/fileio/lession01.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/walter/CLionProjects/fileio/fileio/lession01.c > CMakeFiles/fileio.dir/fileio/lession01.c.i

CMakeFiles/fileio.dir/fileio/lession01.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fileio.dir/fileio/lession01.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/walter/CLionProjects/fileio/fileio/lession01.c -o CMakeFiles/fileio.dir/fileio/lession01.c.s

CMakeFiles/fileio.dir/common/fileio.c.o: CMakeFiles/fileio.dir/flags.make
CMakeFiles/fileio.dir/common/fileio.c.o: ../common/fileio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/fileio.dir/common/fileio.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fileio.dir/common/fileio.c.o   -c /mnt/c/Users/walter/CLionProjects/fileio/common/fileio.c

CMakeFiles/fileio.dir/common/fileio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fileio.dir/common/fileio.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/walter/CLionProjects/fileio/common/fileio.c > CMakeFiles/fileio.dir/common/fileio.c.i

CMakeFiles/fileio.dir/common/fileio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fileio.dir/common/fileio.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/walter/CLionProjects/fileio/common/fileio.c -o CMakeFiles/fileio.dir/common/fileio.c.s

# Object files for target fileio
fileio_OBJECTS = \
"CMakeFiles/fileio.dir/fileio/lession01.c.o" \
"CMakeFiles/fileio.dir/common/fileio.c.o"

# External object files for target fileio
fileio_EXTERNAL_OBJECTS =

fileio: CMakeFiles/fileio.dir/fileio/lession01.c.o
fileio: CMakeFiles/fileio.dir/common/fileio.c.o
fileio: CMakeFiles/fileio.dir/build.make
fileio: CMakeFiles/fileio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable fileio"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fileio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fileio.dir/build: fileio

.PHONY : CMakeFiles/fileio.dir/build

CMakeFiles/fileio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fileio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fileio.dir/clean

CMakeFiles/fileio.dir/depend:
	cd /mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/walter/CLionProjects/fileio /mnt/c/Users/walter/CLionProjects/fileio /mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug /mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug /mnt/c/Users/walter/CLionProjects/fileio/cmake-build-debug/CMakeFiles/fileio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fileio.dir/depend
