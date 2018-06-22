cmake_minimum_required( VERSION 3.0 )

# CloudCompare example for standard plugins

# Add an option to CMake to control whether we build this plugin or not
option( INSTALL_QCMAT "Check to install example plugin" ON )

if ( INSTALL_QCMAT )
	# Name the plugin
    project( qCMAT )

    # load any subdirectories (see qAdditionalIO for an example)
    # add_subdirectory( LIB1 )

    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    include( ../CMakePluginTpl.cmake )

    # set dependencies to necessary libraries (see qPCV for an example)
    # target_link_libraries( ${PROJECT_NAME} LIB1 )
    # include_directories( ${LIB1_INCLUDE_DIR} )
endif()
