# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\15122\Documents\cosc\src\homework\01_data_types

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\15122\Documents\cosc\src\homework\01_data_types\build

# Include any dependencies generated for this target.
include CMakeFiles/hw_01_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hw_01_library.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hw_01_library.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw_01_library.dir/flags.make

CMakeFiles/hw_01_library.dir/data_types.cpp.obj: CMakeFiles/hw_01_library.dir/flags.make
CMakeFiles/hw_01_library.dir/data_types.cpp.obj: C:/Users/15122/Documents/cosc/src/homework/01_data_types/data_types.cpp
CMakeFiles/hw_01_library.dir/data_types.cpp.obj: CMakeFiles/hw_01_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\15122\Documents\cosc\src\homework\01_data_types\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw_01_library.dir/data_types.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_01_library.dir/data_types.cpp.obj -MF CMakeFiles\hw_01_library.dir\data_types.cpp.obj.d -o CMakeFiles\hw_01_library.dir\data_types.cpp.obj -c C:\Users\15122\Documents\cosc\src\homework\01_data_types\data_types.cpp

CMakeFiles/hw_01_library.dir/data_types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw_01_library.dir/data_types.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\15122\Documents\cosc\src\homework\01_data_types\data_types.cpp > CMakeFiles\hw_01_library.dir\data_types.cpp.i

CMakeFiles/hw_01_library.dir/data_types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw_01_library.dir/data_types.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\15122\Documents\cosc\src\homework\01_data_types\data_types.cpp -o CMakeFiles\hw_01_library.dir\data_types.cpp.s

# Object files for target hw_01_library
hw_01_library_OBJECTS = \
"CMakeFiles/hw_01_library.dir/data_types.cpp.obj"

# External object files for target hw_01_library
hw_01_library_EXTERNAL_OBJECTS =

libhw_01_library.a: CMakeFiles/hw_01_library.dir/data_types.cpp.obj
libhw_01_library.a: CMakeFiles/hw_01_library.dir/build.make
libhw_01_library.a: CMakeFiles/hw_01_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\15122\Documents\cosc\src\homework\01_data_types\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhw_01_library.a"
	$(CMAKE_COMMAND) -P CMakeFiles\hw_01_library.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hw_01_library.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw_01_library.dir/build: libhw_01_library.a
.PHONY : CMakeFiles/hw_01_library.dir/build

CMakeFiles/hw_01_library.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hw_01_library.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hw_01_library.dir/clean

CMakeFiles/hw_01_library.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\15122\Documents\cosc\src\homework\01_data_types C:\Users\15122\Documents\cosc\src\homework\01_data_types C:\Users\15122\Documents\cosc\src\homework\01_data_types\build C:\Users\15122\Documents\cosc\src\homework\01_data_types\build C:\Users\15122\Documents\cosc\src\homework\01_data_types\build\CMakeFiles\hw_01_library.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw_01_library.dir/depend

