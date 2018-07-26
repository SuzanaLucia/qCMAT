cmake_minimum_required( VERSION 3.0 )

# CloudCompare example for standard plugins

# Add an option to CMake to control whether we build this plugin or not
option( INSTALL_QCMAT "Check to install example plugin" ON )

if ( INSTALL_QCMAT )
	# Name the plugin
    project( qCMAT )

    # load any subdirectories (see qAdditionalIO for an example)
    add_subdirectory( ui/ )
    add_subdirectory( src/ )

    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    include( ../CMakePluginTpl.cmake )
		#include("ui/")
    #include ( ui )

    #we need that open gl
    find_package( OpenGL REQUIRED )

    if( NOT OPENGL_FOUND )
        message( SEND_ERROR "OpenGL required, but not found with 'find_package()'" )
    endif()
    
    include_directories( ${OpenGL_INCLUDE_DIR} )
    include_directories( ${PCV_LIB_SOURCE_DIR} )
    
    #target_link_libraries( ${PROJECT_NAME} PCV_LIB )
    target_link_libraries( ${PROJECT_NAME} ${OPENGL_LIBRARIES} )


    # set dependencies to necessary libraries (see qPCV for an example)
    #SET(helloworld_RESOURCES images.qrc)

    # target_link_libraries( ${PROJECT_NAME} LIB1 )
    # include_directories( ${LIB1_INCLUDE_DIR} )
endif()
