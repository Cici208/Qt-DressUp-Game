cmake_minimum_required(VERSION 3.19)
project(MiracleDressGame LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Multimedia)

qt_standard_project_setup()

qt_add_resources(APP_RESOURCES
    images.qrc
)

qt_add_executable(MiracleDressGame
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    startscreenwidget.h startscreenwidget.cpp startscreenwidget.ui
    ${APP_RESOURCES}
)

#  这是你需要加的一行，告诉编译器头文件在当前目录
target_include_directories(MiracleDressGame PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(MiracleDressGame
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::Multimedia
)

include(GNUInstallDirs)

install(TARGETS MiracleDressGame
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET MiracleDressGame
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
