set( CC_PLUGIN_CUSTOM_UI_LIST
        ${CC_PLUGIN_CUSTOM_UI_LIST}
        ${CMAKE_CURRENT_SOURCE_DIR}/dlg.ui
        ${CMAKE_CURRENT_SOURCE_DIR}/ccVolumeTool.ui
        ${CMAKE_CURRENT_SOURCE_DIR}/displayVolume.ui
        ${CMAKE_CURRENT_SOURCE_DIR}/displaySurface.ui
        ${CMAKE_CURRENT_SOURCE_DIR}/displayShoreline.ui
# Tell CMake to look of dummy UI file
#        ${CMAKE_CURRENT_SOURCE_DIR}/dummyFeat.ui
        ${CMAKE_CURRENT_SOURCE_DIR}/extractProfile.ui

        ${CMAKE_CURRENT_SOURCE_DIR}/ccQCMATSplashScreen.ui
        PARENT_SCOPE
)
