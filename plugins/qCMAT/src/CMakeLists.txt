set( CC_PLUGIN_CUSTOM_HEADER_LIST
        ${CC_PLUGIN_CUSTOM_HEADER_LIST}
        ${CMAKE_CURRENT_SOURCE_DIR}/qCMATDlg.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ccVolumeTool.h
        ${CMAKE_CURRENT_SOURCE_DIR}/displayVolume.h
        ${CMAKE_CURRENT_SOURCE_DIR}/displaySurface.h
        ${CMAKE_CURRENT_SOURCE_DIR}/glDlg.h
        PARENT_SCOPE
)

set( CC_PLUGIN_CUSTOM_SOURCE_LIST
        ${CC_PLUGIN_CUSTOM_SOURCE_LIST}
        ${CMAKE_CURRENT_SOURCE_DIR}/qCMATDlg.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ccVolumeTool.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/displayVolume.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/displaySurface.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/glDlg.cpp
        PARENT_SCOPE
)
