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
CMAKE_SOURCE_DIR = /home/frank/EOS/pretest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frank/EOS/pretest/build

# Include any dependencies generated for this target.
include CMakeFiles/inverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/inverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inverse.dir/flags.make

CMakeFiles/inverse.dir/inverse.cpp.o: CMakeFiles/inverse.dir/flags.make
CMakeFiles/inverse.dir/inverse.cpp.o: ../inverse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/EOS/pretest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/inverse.dir/inverse.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/inverse.dir/inverse.cpp.o -c /home/frank/EOS/pretest/inverse.cpp

CMakeFiles/inverse.dir/inverse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/inverse.dir/inverse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/EOS/pretest/inverse.cpp > CMakeFiles/inverse.dir/inverse.cpp.i

CMakeFiles/inverse.dir/inverse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/inverse.dir/inverse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/EOS/pretest/inverse.cpp -o CMakeFiles/inverse.dir/inverse.cpp.s

# Object files for target inverse
inverse_OBJECTS = \
"CMakeFiles/inverse.dir/inverse.cpp.o"

# External object files for target inverse
inverse_EXTERNAL_OBJECTS =

inverse: CMakeFiles/inverse.dir/inverse.cpp.o
inverse: CMakeFiles/inverse.dir/build.make
inverse: CMakeFiles/inverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frank/EOS/pretest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable inverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inverse.dir/build: inverse

.PHONY : CMakeFiles/inverse.dir/build

CMakeFiles/inverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/inverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/inverse.dir/clean

CMakeFiles/inverse.dir/depend:
	cd /home/frank/EOS/pretest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frank/EOS/pretest /home/frank/EOS/pretest /home/frank/EOS/pretest/build /home/frank/EOS/pretest/build /home/frank/EOS/pretest/build/CMakeFiles/inverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inverse.dir/depend

