# Install script for directory: C:/qCMAT-master/plugins/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/CloudCompareProjects")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/qCMAT-master/build/plugins/core/qAdditionalIO/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qAnimation/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qBroom/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qCompass/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qCork/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qCSF/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qCSVMatrixIO/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qEDL/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qFacets/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qHoughNormals/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qHPR/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qLAS_FWF/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qM3C2/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qPCL/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qPCV/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qPhotoscanIO/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qPoissonRecon/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qRANSAC_SD/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qSRA/cmake_install.cmake")
  include("C:/qCMAT-master/build/plugins/core/qSSAO/cmake_install.cmake")

endif()

