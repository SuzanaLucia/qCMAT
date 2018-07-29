cmake_minimum_required( VERSION 3.0 )

# CloudCompare example for standard plugins

# Add an option to CMake to control whether we build this plugin or not
option( INSTALL_QCMAT "Check to install example plugin" ON )

if ( INSTALL_QCMAT )
	# Name the plugin
    project( qCMAT )



    # we need includes from the main CC source dir
    include_directories( ${CloudCompare_SOURCE_DIR} )

    #we need ccOverlay classes
    file( GLOB CC_PLUGIN_CUSTOM_HEADER_LIST ${CloudCompare_SOURCE_DIR}/ccOverlayDialog*.h )
    file( GLOB CC_PLUGIN_CUSTOM_SOURCE_LIST ${CloudCompare_SOURCE_DIR}/ccOverlayDialog*.cpp )

    #we also need picking hub classes
    list( APPEND  CC_PLUGIN_CUSTOM_HEADER_LIST ${CloudCompare_SOURCE_DIR}/ccPickingListener.h )
    list( APPEND  CC_PLUGIN_CUSTOM_HEADER_LIST ${CloudCompare_SOURCE_DIR}/ccPickingHub.h )
    list( APPEND  CC_PLUGIN_CUSTOM_SOURCE_LIST ${CloudCompare_SOURCE_DIR}/ccPickingHub.cpp )

    #and point picking generic interface
    file( APPEND CC_PLUGIN_CUSTOM_HEADER_LIST ${CloudCompare_SOURCE_DIR}/ccPointPickingGenericInterface.h )
    file( APPEND CC_PLUGIN_CUSTOM_SOURCE_LIST ${CloudCompare_SOURCE_DIR}/ccPointPickingGenericInterface.cpp )




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



    # target_link_libraries( ${PROJECT_NAME} LIB1 )
    # include_directories( ${LIB1_INCLUDE_DIR} )
endif()
