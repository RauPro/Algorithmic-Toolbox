# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Divide_and_Conquer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Divide_and_Conquer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Divide_and_Conquer.dir/flags.make

CMakeFiles/Divide_and_Conquer.dir/main.cpp.obj: CMakeFiles/Divide_and_Conquer.dir/flags.make
CMakeFiles/Divide_and_Conquer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Divide_and_Conquer.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Divide_and_Conquer.dir\main.cpp.obj -c "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\main.cpp"

CMakeFiles/Divide_and_Conquer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Divide_and_Conquer.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\main.cpp" > CMakeFiles\Divide_and_Conquer.dir\main.cpp.i

CMakeFiles/Divide_and_Conquer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Divide_and_Conquer.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\main.cpp" -o CMakeFiles\Divide_and_Conquer.dir\main.cpp.s

# Object files for target Divide_and_Conquer
Divide_and_Conquer_OBJECTS = \
"CMakeFiles/Divide_and_Conquer.dir/main.cpp.obj"

# External object files for target Divide_and_Conquer
Divide_and_Conquer_EXTERNAL_OBJECTS =

Divide_and_Conquer.exe: CMakeFiles/Divide_and_Conquer.dir/main.cpp.obj
Divide_and_Conquer.exe: CMakeFiles/Divide_and_Conquer.dir/build.make
Divide_and_Conquer.exe: CMakeFiles/Divide_and_Conquer.dir/linklibs.rsp
Divide_and_Conquer.exe: CMakeFiles/Divide_and_Conquer.dir/objects1.rsp
Divide_and_Conquer.exe: CMakeFiles/Divide_and_Conquer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Divide_and_Conquer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Divide_and_Conquer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Divide_and_Conquer.dir/build: Divide_and_Conquer.exe

.PHONY : CMakeFiles/Divide_and_Conquer.dir/build

CMakeFiles/Divide_and_Conquer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Divide_and_Conquer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Divide_and_Conquer.dir/clean

CMakeFiles/Divide_and_Conquer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer" "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer" "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug" "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug" "C:\Users\CORE i5\Desktop\Cusos en Proceso\Algorithms\Divide and Conquer\cmake-build-debug\CMakeFiles\Divide_and_Conquer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Divide_and_Conquer.dir/depend

