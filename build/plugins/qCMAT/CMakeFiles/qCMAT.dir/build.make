# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_SOURCE_DIR = /home/chrome/work/CloudCompare/qCMAT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chrome/work/CloudCompare/qCMAT/build

# Include any dependencies generated for this target.
include plugins/qCMAT/CMakeFiles/qCMAT.dir/depend.make

# Include the progress variables for this target.
include plugins/qCMAT/CMakeFiles/qCMAT.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make

plugins/qCMAT/ui_dlg.h: ../plugins/qCMAT/ui/dlg.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_dlg.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_dlg.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/dlg.ui

plugins/qCMAT/ui_ccVolumeTool.h: ../plugins/qCMAT/ui/ccVolumeTool.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_ccVolumeTool.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_ccVolumeTool.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/ccVolumeTool.ui

plugins/qCMAT/ui_displayVolume.h: ../plugins/qCMAT/ui/displayVolume.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_displayVolume.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_displayVolume.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/displayVolume.ui

plugins/qCMAT/ui_displaySurface.h: ../plugins/qCMAT/ui/displaySurface.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_displaySurface.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_displaySurface.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/displaySurface.ui

plugins/qCMAT/ui_displayShoreline.h: ../plugins/qCMAT/ui/displayShoreline.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ui_displayShoreline.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_displayShoreline.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/displayShoreline.ui

plugins/qCMAT/ui_glDlg.h: ../plugins/qCMAT/ui/glDlg.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ui_glDlg.h"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/uic -o /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/ui_glDlg.h /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/ui/glDlg.ui

plugins/qCMAT/qrc_qCMAT.cpp: ../plugins/qCMAT/images/icon.png
plugins/qCMAT/qrc_qCMAT.cpp: ../plugins/qCMAT/images/iconSwap.png
plugins/qCMAT/qrc_qCMAT.cpp: ../plugins/qCMAT/info.json
plugins/qCMAT/qrc_qCMAT.cpp: ../plugins/qCMAT/ui/dlg.ui
plugins/qCMAT/qrc_qCMAT.cpp: ../plugins/qCMAT/qCMAT.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating qrc_qCMAT.cpp"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/rcc --name qCMAT --output /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qrc_qCMAT.cpp /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/qCMAT.qrc

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.o: ../plugins/qCMAT/qCMAT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/qCMAT.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/qCMAT.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/qCMAT.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/qCMAT.cpp > CMakeFiles/qCMAT.dir/qCMAT.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/qCMAT.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/qCMAT.cpp -o CMakeFiles/qCMAT.dir/qCMAT.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o: ../plugins/ccDefaultPluginInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/ccDefaultPluginInterface.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/ccDefaultPluginInterface.cpp > CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/ccDefaultPluginInterface.cpp -o CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o: ../plugins/ccStdPluginInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/ccStdPluginInterface.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/ccStdPluginInterface.cpp > CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/ccStdPluginInterface.cpp -o CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o: ../plugins/qCMAT/src/qCMATDlg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/qCMATDlg.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/qCMATDlg.cpp > CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/qCMATDlg.cpp -o CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o: ../plugins/qCMAT/src/ccVolumeTool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/ccVolumeTool.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/ccVolumeTool.cpp > CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/ccVolumeTool.cpp -o CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o: ../plugins/qCMAT/src/displayVolume.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayVolume.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/displayVolume.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayVolume.cpp > CMakeFiles/qCMAT.dir/src/displayVolume.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/displayVolume.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayVolume.cpp -o CMakeFiles/qCMAT.dir/src/displayVolume.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o: ../plugins/qCMAT/src/displaySurface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displaySurface.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/displaySurface.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displaySurface.cpp > CMakeFiles/qCMAT.dir/src/displaySurface.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/displaySurface.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displaySurface.cpp -o CMakeFiles/qCMAT.dir/src/displaySurface.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o: ../plugins/qCMAT/src/displayShoreline.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayShoreline.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayShoreline.cpp > CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/displayShoreline.cpp -o CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.o: ../plugins/qCMAT/src/glDlg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/src/glDlg.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/glDlg.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/src/glDlg.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/glDlg.cpp > CMakeFiles/qCMAT.dir/src/glDlg.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/src/glDlg.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT/src/glDlg.cpp -o CMakeFiles/qCMAT.dir/src/glDlg.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o: plugins/qCMAT/qrc_qCMAT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qrc_qCMAT.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qrc_qCMAT.cpp > CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qrc_qCMAT.cpp -o CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.s

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o: plugins/qCMAT/CMakeFiles/qCMAT.dir/flags.make
plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o: plugins/qCMAT/qCMAT_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o -c /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qCMAT_autogen/mocs_compilation.cpp

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.i"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qCMAT_autogen/mocs_compilation.cpp > CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.i

plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.s"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/qCMAT_autogen/mocs_compilation.cpp -o CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.s

# Object files for target qCMAT
qCMAT_OBJECTS = \
"CMakeFiles/qCMAT.dir/qCMAT.cpp.o" \
"CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o" \
"CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o" \
"CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o" \
"CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o" \
"CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o" \
"CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o" \
"CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o" \
"CMakeFiles/qCMAT.dir/src/glDlg.cpp.o" \
"CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o" \
"CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o"

# External object files for target qCMAT
qCMAT_EXTERNAL_OBJECTS =

plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccDefaultPluginInterface.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/__/ccStdPluginInterface.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/qCMATDlg.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/ccVolumeTool.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayVolume.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displaySurface.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/displayShoreline.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/src/glDlg.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/qrc_qCMAT.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/qCMAT_autogen/mocs_compilation.cpp.o
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/build.make
plugins/qCMAT/libqCMAT.so: libs/CCFbo/libCC_FBO_LIB.a
plugins/qCMAT/libqCMAT.so: libs/qCC_io/libQCC_IO_LIB.so
plugins/qCMAT/libqCMAT.so: libs/qCC_glWindow/libQCC_GL_LIB.a
plugins/qCMAT/libqCMAT.so: /usr/lib/libGL.so
plugins/qCMAT/libqCMAT.so: /usr/lib/libGLU.so
plugins/qCMAT/libqCMAT.so: libs/qCC_db/libQCC_DB_LIB.so
plugins/qCMAT/libqCMAT.so: libs/CCFbo/libCC_FBO_LIB.a
plugins/qCMAT/libqCMAT.so: CC/libCC_CORE_LIB.so
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5Concurrent.so.5.10.1
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5OpenGL.so.5.10.1
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5Widgets.so.5.10.1
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5OpenGLExtensions.a
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5Gui.so.5.10.1
plugins/qCMAT/libqCMAT.so: /usr/lib/libQt5Core.so.5.10.1
plugins/qCMAT/libqCMAT.so: plugins/qCMAT/CMakeFiles/qCMAT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chrome/work/CloudCompare/qCMAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX shared library libqCMAT.so"
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qCMAT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/qCMAT/CMakeFiles/qCMAT.dir/build: plugins/qCMAT/libqCMAT.so

.PHONY : plugins/qCMAT/CMakeFiles/qCMAT.dir/build

plugins/qCMAT/CMakeFiles/qCMAT.dir/clean:
	cd /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT && $(CMAKE_COMMAND) -P CMakeFiles/qCMAT.dir/cmake_clean.cmake
.PHONY : plugins/qCMAT/CMakeFiles/qCMAT.dir/clean

plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_dlg.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_ccVolumeTool.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_displayVolume.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_displaySurface.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_displayShoreline.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/ui_glDlg.h
plugins/qCMAT/CMakeFiles/qCMAT.dir/depend: plugins/qCMAT/qrc_qCMAT.cpp
	cd /home/chrome/work/CloudCompare/qCMAT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chrome/work/CloudCompare/qCMAT /home/chrome/work/CloudCompare/qCMAT/plugins/qCMAT /home/chrome/work/CloudCompare/qCMAT/build /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT /home/chrome/work/CloudCompare/qCMAT/build/plugins/qCMAT/CMakeFiles/qCMAT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/qCMAT/CMakeFiles/qCMAT.dir/depend

