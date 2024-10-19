# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/abhishek/llm_robot_control/src/llama_ros/llama_cpp_vendor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abhishek/llm_robot_control/build/llama_cpp_vendor

# Include any dependencies generated for this target.
include _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o: _deps/llama-src/ggml/src/ggml.c
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o -MF CMakeFiles/ggml.dir/ggml.c.o.d -o CMakeFiles/ggml.dir/ggml.c.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml.c

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ggml.dir/ggml.c.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml.c > CMakeFiles/ggml.dir/ggml.c.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ggml.dir/ggml.c.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml.c -o CMakeFiles/ggml.dir/ggml.c.s

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o: _deps/llama-src/ggml/src/ggml-alloc.c
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o -MF CMakeFiles/ggml.dir/ggml-alloc.c.o.d -o CMakeFiles/ggml.dir/ggml-alloc.c.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-alloc.c

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ggml.dir/ggml-alloc.c.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-alloc.c > CMakeFiles/ggml.dir/ggml-alloc.c.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ggml.dir/ggml-alloc.c.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-alloc.c -o CMakeFiles/ggml.dir/ggml-alloc.c.s

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o: _deps/llama-src/ggml/src/ggml-backend.c
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o -MF CMakeFiles/ggml.dir/ggml-backend.c.o.d -o CMakeFiles/ggml.dir/ggml-backend.c.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-backend.c

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ggml.dir/ggml-backend.c.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-backend.c > CMakeFiles/ggml.dir/ggml-backend.c.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ggml.dir/ggml-backend.c.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-backend.c -o CMakeFiles/ggml.dir/ggml-backend.c.s

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o: _deps/llama-src/ggml/src/ggml-quants.c
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o -MF CMakeFiles/ggml.dir/ggml-quants.c.o.d -o CMakeFiles/ggml.dir/ggml-quants.c.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-quants.c

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ggml.dir/ggml-quants.c.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-quants.c > CMakeFiles/ggml.dir/ggml-quants.c.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ggml.dir/ggml-quants.c.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-quants.c -o CMakeFiles/ggml.dir/ggml-quants.c.s

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o: _deps/llama-src/ggml/src/llamafile/sgemm.cpp
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o -MF CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o.d -o CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/llamafile/sgemm.cpp

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ggml.dir/llamafile/sgemm.cpp.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/llamafile/sgemm.cpp > CMakeFiles/ggml.dir/llamafile/sgemm.cpp.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ggml.dir/llamafile/sgemm.cpp.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/llamafile/sgemm.cpp -o CMakeFiles/ggml.dir/llamafile/sgemm.cpp.s

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/flags.make
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o: _deps/llama-src/ggml/src/ggml-aarch64.c
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && ccache /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o -MF CMakeFiles/ggml.dir/ggml-aarch64.c.o.d -o CMakeFiles/ggml.dir/ggml-aarch64.c.o -c /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-aarch64.c

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ggml.dir/ggml-aarch64.c.i"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-aarch64.c > CMakeFiles/ggml.dir/ggml-aarch64.c.i

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ggml.dir/ggml-aarch64.c.s"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && /usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src/ggml-aarch64.c -o CMakeFiles/ggml.dir/ggml-aarch64.c.s

# Object files for target ggml
ggml_OBJECTS = \
"CMakeFiles/ggml.dir/ggml.c.o" \
"CMakeFiles/ggml.dir/ggml-alloc.c.o" \
"CMakeFiles/ggml.dir/ggml-backend.c.o" \
"CMakeFiles/ggml.dir/ggml-quants.c.o" \
"CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o" \
"CMakeFiles/ggml.dir/ggml-aarch64.c.o"

# External object files for target ggml
ggml_EXTERNAL_OBJECTS =

_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml.c.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-alloc.c.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-backend.c.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-quants.c.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/llamafile/sgemm.cpp.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/ggml-aarch64.c.o
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/build.make
_deps/llama-build/ggml/src/libllama_ggml.so: /usr/lib/x86_64-linux-gnu/libm.so
_deps/llama-build/ggml/src/libllama_ggml.so: /usr/lib/gcc/x86_64-linux-gnu/11/libgomp.so
_deps/llama-build/ggml/src/libllama_ggml.so: /usr/lib/x86_64-linux-gnu/libpthread.a
_deps/llama-build/ggml/src/libllama_ggml.so: _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abhishek/llm_robot_control/build/llama_cpp_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library libllama_ggml.so"
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ggml.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/build: _deps/llama-build/ggml/src/libllama_ggml.so
.PHONY : _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/build

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/clean:
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src && $(CMAKE_COMMAND) -P CMakeFiles/ggml.dir/cmake_clean.cmake
.PHONY : _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/clean

_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/depend:
	cd /home/abhishek/llm_robot_control/build/llama_cpp_vendor && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abhishek/llm_robot_control/src/llama_ros/llama_cpp_vendor /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-src/ggml/src /home/abhishek/llm_robot_control/build/llama_cpp_vendor /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src /home/abhishek/llm_robot_control/build/llama_cpp_vendor/_deps/llama-build/ggml/src/CMakeFiles/ggml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/llama-build/ggml/src/CMakeFiles/ggml.dir/depend

