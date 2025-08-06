cmake_minimum_required(VERSION 3.16)

project(Hotel3 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        listardialog.cpp
        consultardialog.cpp
        principaldialog.cpp
        reservardialog.cpp
        mainwindow.h
        listardialog.h
        consultardialog.h
        reservardialog.h
        principaldialog.h
        mainwindow.ui
        consultardialog.ui
        listardialog.ui
        principaldialog.ui
        reservardialog.ui


)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Hotel3
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        principaldialog.h principaldialog.cpp principaldialog.ui
        listardialog.h listardialog.cpp listardialog.ui
        reservardialog.h reservardialog.cpp reservardialog.ui
        consultardialog.h consultardialog.cpp consultardialog.ui
        atendente.h atendente.cpp
        gerenciadorreservas.h gerenciadorreservas.cpp
        quarto.h quarto.cpp
        IEstrategiaDesconto.h
        EstrategiaConcreta.h
        reserva.h reserva.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Hotel3 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Hotel3 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Hotel3
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Hotel3 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Hotel3)
endif()
set_target_properties(Hotel3 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Hotel3
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Hotel3)
endif()
