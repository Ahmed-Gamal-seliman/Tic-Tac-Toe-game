# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = D:\Cmake\cmake-3.27.0-rc3-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = D:\Cmake\cmake-3.27.0-rc3-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Embedded system Diploma\Projects\Project implmentation"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Embedded system Diploma\Projects\Project implmentation\build"

# Include any dependencies generated for this target.
include MainMenu/CMakeFiles/MainMenu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include MainMenu/CMakeFiles/MainMenu.dir/compiler_depend.make

# Include the progress variables for this target.
include MainMenu/CMakeFiles/MainMenu.dir/progress.make

# Include the compile flags for this target's objects.
include MainMenu/CMakeFiles/MainMenu.dir/flags.make

MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj: MainMenu/CMakeFiles/MainMenu.dir/flags.make
MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj: MainMenu/CMakeFiles/MainMenu.dir/includes_C.rsp
MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj: D:/Embedded\ system\ Diploma/Projects/Project\ implmentation/MainMenu/src/MainMenu.c
MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj: MainMenu/CMakeFiles/MainMenu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Embedded system Diploma\Projects\Project implmentation\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj"
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj -MF CMakeFiles\MainMenu.dir\src\MainMenu.c.obj.d -o CMakeFiles\MainMenu.dir\src\MainMenu.c.obj -c "D:\Embedded system Diploma\Projects\Project implmentation\MainMenu\src\MainMenu.c"

MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MainMenu.dir/src/MainMenu.c.i"
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Embedded system Diploma\Projects\Project implmentation\MainMenu\src\MainMenu.c" > CMakeFiles\MainMenu.dir\src\MainMenu.c.i

MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MainMenu.dir/src/MainMenu.c.s"
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Embedded system Diploma\Projects\Project implmentation\MainMenu\src\MainMenu.c" -o CMakeFiles\MainMenu.dir\src\MainMenu.c.s

# Object files for target MainMenu
MainMenu_OBJECTS = \
"CMakeFiles/MainMenu.dir/src/MainMenu.c.obj"

# External object files for target MainMenu
MainMenu_EXTERNAL_OBJECTS =

MainMenu/libMainMenu.a: MainMenu/CMakeFiles/MainMenu.dir/src/MainMenu.c.obj
MainMenu/libMainMenu.a: MainMenu/CMakeFiles/MainMenu.dir/build.make
MainMenu/libMainMenu.a: MainMenu/CMakeFiles/MainMenu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Embedded system Diploma\Projects\Project implmentation\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libMainMenu.a"
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && $(CMAKE_COMMAND) -P CMakeFiles\MainMenu.dir\cmake_clean_target.cmake
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MainMenu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MainMenu/CMakeFiles/MainMenu.dir/build: MainMenu/libMainMenu.a
.PHONY : MainMenu/CMakeFiles/MainMenu.dir/build

MainMenu/CMakeFiles/MainMenu.dir/clean:
	cd /d "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" && $(CMAKE_COMMAND) -P CMakeFiles\MainMenu.dir\cmake_clean.cmake
.PHONY : MainMenu/CMakeFiles/MainMenu.dir/clean

MainMenu/CMakeFiles/MainMenu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Embedded system Diploma\Projects\Project implmentation" "D:\Embedded system Diploma\Projects\Project implmentation\MainMenu" "D:\Embedded system Diploma\Projects\Project implmentation\build" "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu" "D:\Embedded system Diploma\Projects\Project implmentation\build\MainMenu\CMakeFiles\MainMenu.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : MainMenu/CMakeFiles/MainMenu.dir/depend

