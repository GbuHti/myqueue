# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuzhenbo/test/myqueue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuzhenbo/test/myqueue/build

# Include any dependencies generated for this target.
include CMakeFiles/Queue.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Queue.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queue.dir/flags.make

CMakeFiles/Queue.dir/main.cpp.o: CMakeFiles/Queue.dir/flags.make
CMakeFiles/Queue.dir/main.cpp.o: ../main.cpp
CMakeFiles/Queue.dir/main.cpp.o: CMakeFiles/Queue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzhenbo/test/myqueue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Queue.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Queue.dir/main.cpp.o -MF CMakeFiles/Queue.dir/main.cpp.o.d -o CMakeFiles/Queue.dir/main.cpp.o -c /Users/yuzhenbo/test/myqueue/main.cpp

CMakeFiles/Queue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queue.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzhenbo/test/myqueue/main.cpp > CMakeFiles/Queue.dir/main.cpp.i

CMakeFiles/Queue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queue.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzhenbo/test/myqueue/main.cpp -o CMakeFiles/Queue.dir/main.cpp.s

# Object files for target Queue
Queue_OBJECTS = \
"CMakeFiles/Queue.dir/main.cpp.o"

# External object files for target Queue
Queue_EXTERNAL_OBJECTS =

Queue: CMakeFiles/Queue.dir/main.cpp.o
Queue: CMakeFiles/Queue.dir/build.make
Queue: lib/libgtest.a
Queue: myqueue/libmyqueue.a
Queue: CMakeFiles/Queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuzhenbo/test/myqueue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queue.dir/build: Queue
.PHONY : CMakeFiles/Queue.dir/build

CMakeFiles/Queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Queue.dir/clean

CMakeFiles/Queue.dir/depend:
	cd /Users/yuzhenbo/test/myqueue/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuzhenbo/test/myqueue /Users/yuzhenbo/test/myqueue /Users/yuzhenbo/test/myqueue/build /Users/yuzhenbo/test/myqueue/build /Users/yuzhenbo/test/myqueue/build/CMakeFiles/Queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Queue.dir/depend

