set( CC_PLUGIN_CUSTOM_HEADER_LIST
        ${CC_PLUGIN_CUSTOM_HEADER_LIST}
        ${CMAKE_CURRENT_SOURCE_DIR}/qCMATDlg.h                 #
        ${CMAKE_CURRENT_SOURCE_DIR}/ccVolumeTool.h             # 
        ${CMAKE_CURRENT_SOURCE_DIR}/ccDisplayVolume.h          # Cleaned
        ${CMAKE_CURRENT_SOURCE_DIR}/ccDisplaySurface.h         #
        ${CMAKE_CURRENT_SOURCE_DIR}/displayShoreline.h         #
#Tell CMake to look for the dummy header file
#        ${CMAKE_CURRENT_SOURCE_DIR}/ccDummyFeat.h             #
        ${CMAKE_CURRENT_SOURCE_DIR}/glDlg.h                    #
        ${CMAKE_CURRENT_SOURCE_DIR}/ccQCMATTools.h             #
        ${CMAKE_CURRENT_SOURCE_DIR}/ccSplashScreen.h             #	
        PARENT_SCOPE
)

set( CC_PLUGIN_CUSTOM_SOURCE_LIST
        ${CC_PLUGIN_CUSTOM_SOURCE_LIST}
        ${CMAKE_CURRENT_SOURCE_DIR}/qCMATDlg.cpp                #
        ${CMAKE_CURRENT_SOURCE_DIR}/ccVolumeTool.cpp            # 
        ${CMAKE_CURRENT_SOURCE_DIR}/ccDisplayVolume.cpp         # Cleaned
        ${CMAKE_CURRENT_SOURCE_DIR}/ccDisplaySurface.cpp        #
        ${CMAKE_CURRENT_SOURCE_DIR}/displayShoreline.cpp        #
#Tell CMake to look for the dummy source file                   
#        ${CMAKE_CURRENT_SOURCE_DIR}/ccDummyFeat.cpp            #
        ${CMAKE_CURRENT_SOURCE_DIR}/glDlg.cpp                   #        ${CMAKE_CURRENT_SOURCE_DIR}/ccQCMATTools.cpp            #        
        ${CMAKE_CURRENT_SOURCE_DIR}/ccQCMATTools.cpp            #
        PARENT_SCOPE
)
