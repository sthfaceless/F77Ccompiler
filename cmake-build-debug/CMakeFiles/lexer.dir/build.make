# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /snap/clion/177/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/177/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/danil/CLionProjects/F77Ccompiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/danil/CLionProjects/F77Ccompiler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lexer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lexer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lexer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lexer.dir/flags.make

CMakeFiles/lexer.dir/src/classes.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/src/classes.cpp.o: ../src/classes.cpp
CMakeFiles/lexer.dir/src/classes.cpp.o: CMakeFiles/lexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lexer.dir/src/classes.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lexer.dir/src/classes.cpp.o -MF CMakeFiles/lexer.dir/src/classes.cpp.o.d -o CMakeFiles/lexer.dir/src/classes.cpp.o -c /home/danil/CLionProjects/F77Ccompiler/src/classes.cpp

CMakeFiles/lexer.dir/src/classes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/src/classes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danil/CLionProjects/F77Ccompiler/src/classes.cpp > CMakeFiles/lexer.dir/src/classes.cpp.i

CMakeFiles/lexer.dir/src/classes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/src/classes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danil/CLionProjects/F77Ccompiler/src/classes.cpp -o CMakeFiles/lexer.dir/src/classes.cpp.s

CMakeFiles/lexer.dir/src/f77lexer.c.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/src/f77lexer.c.o: ../src/f77lexer.c
CMakeFiles/lexer.dir/src/f77lexer.c.o: CMakeFiles/lexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lexer.dir/src/f77lexer.c.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lexer.dir/src/f77lexer.c.o -MF CMakeFiles/lexer.dir/src/f77lexer.c.o.d -o CMakeFiles/lexer.dir/src/f77lexer.c.o -c /home/danil/CLionProjects/F77Ccompiler/src/f77lexer.c

CMakeFiles/lexer.dir/src/f77lexer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/src/f77lexer.c.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danil/CLionProjects/F77Ccompiler/src/f77lexer.c > CMakeFiles/lexer.dir/src/f77lexer.c.i

CMakeFiles/lexer.dir/src/f77lexer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/src/f77lexer.c.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danil/CLionProjects/F77Ccompiler/src/f77lexer.c -o CMakeFiles/lexer.dir/src/f77lexer.c.s

CMakeFiles/lexer.dir/src/f77parser.c.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/src/f77parser.c.o: ../src/f77parser.c
CMakeFiles/lexer.dir/src/f77parser.c.o: CMakeFiles/lexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lexer.dir/src/f77parser.c.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lexer.dir/src/f77parser.c.o -MF CMakeFiles/lexer.dir/src/f77parser.c.o.d -o CMakeFiles/lexer.dir/src/f77parser.c.o -c /home/danil/CLionProjects/F77Ccompiler/src/f77parser.c

CMakeFiles/lexer.dir/src/f77parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/src/f77parser.c.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danil/CLionProjects/F77Ccompiler/src/f77parser.c > CMakeFiles/lexer.dir/src/f77parser.c.i

CMakeFiles/lexer.dir/src/f77parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/src/f77parser.c.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danil/CLionProjects/F77Ccompiler/src/f77parser.c -o CMakeFiles/lexer.dir/src/f77parser.c.s

CMakeFiles/lexer.dir/src/utils.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/src/utils.cpp.o: ../src/utils.cpp
CMakeFiles/lexer.dir/src/utils.cpp.o: CMakeFiles/lexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lexer.dir/src/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lexer.dir/src/utils.cpp.o -MF CMakeFiles/lexer.dir/src/utils.cpp.o.d -o CMakeFiles/lexer.dir/src/utils.cpp.o -c /home/danil/CLionProjects/F77Ccompiler/src/utils.cpp

CMakeFiles/lexer.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/src/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danil/CLionProjects/F77Ccompiler/src/utils.cpp > CMakeFiles/lexer.dir/src/utils.cpp.i

CMakeFiles/lexer.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/src/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danil/CLionProjects/F77Ccompiler/src/utils.cpp -o CMakeFiles/lexer.dir/src/utils.cpp.s

# Object files for target lexer
lexer_OBJECTS = \
"CMakeFiles/lexer.dir/src/classes.cpp.o" \
"CMakeFiles/lexer.dir/src/f77lexer.c.o" \
"CMakeFiles/lexer.dir/src/f77parser.c.o" \
"CMakeFiles/lexer.dir/src/utils.cpp.o"

# External object files for target lexer
lexer_EXTERNAL_OBJECTS =

lexer: CMakeFiles/lexer.dir/src/classes.cpp.o
lexer: CMakeFiles/lexer.dir/src/f77lexer.c.o
lexer: CMakeFiles/lexer.dir/src/f77parser.c.o
lexer: CMakeFiles/lexer.dir/src/utils.cpp.o
lexer: CMakeFiles/lexer.dir/build.make
lexer: CMakeFiles/lexer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lexer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lexer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lexer.dir/build: lexer
.PHONY : CMakeFiles/lexer.dir/build

CMakeFiles/lexer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lexer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lexer.dir/clean

CMakeFiles/lexer.dir/depend:
	cd /home/danil/CLionProjects/F77Ccompiler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/danil/CLionProjects/F77Ccompiler /home/danil/CLionProjects/F77Ccompiler /home/danil/CLionProjects/F77Ccompiler/cmake-build-debug /home/danil/CLionProjects/F77Ccompiler/cmake-build-debug /home/danil/CLionProjects/F77Ccompiler/cmake-build-debug/CMakeFiles/lexer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lexer.dir/depend

