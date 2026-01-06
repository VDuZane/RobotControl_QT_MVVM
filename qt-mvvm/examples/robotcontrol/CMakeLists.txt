# examples/robotcontrol/CMakeLists.txt
cmake_minimum_required(VERSION 3.14)
project(RobotControlMVVM VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 查找 Qt
find_package(Qt5 COMPONENTS
    Core
    Widgets
    UiTools
    REQUIRED
)

# ⭐ 查找已安装的 MVVM 库
find_package(MVVM REQUIRED)

# 源文件
set(PROJECT_SOURCES
    main.cpp
    robotcontrolcore/mainwindow.cpp
    robotcontrolcore/mainwindow.h
    # robotcontrolcore/MotorControl_UI.ui  # ⭐ 确认文件名
    robotcontrolcore/motormodel.cpp
    robotcontrolcore/motormodel.h
    robotcontrolcore/testdialog.cpp
    robotcontrolcore/testdialog.h
    # robotcontrolcore/TestDialog.ui
)

# 创建可执行文件
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

# 链接库
target_link_libraries(${PROJECT_NAME} 
    PRIVATE 
        Qt5::Core 
        Qt5::Widgets
        Qt5::UiTools
        MVVM::Model
        MVVM::ViewModel
        MVVM::View
)


# 将 .ui 文件复制到构建目录（可选，方便测试）
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/robotcontrolcore/MotorControl_UI.ui
    ${CMAKE_CURRENT_BINARY_DIR}/MotorControl_UI.ui
    COPYONLY
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/robotcontrolcore/TestDialog.ui
    ${CMAKE_CURRENT_BINARY_DIR}/TestDialog.ui
    COPYONLY
)

# 包含目录
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/robotcontrolcore
    ${CMAKE_CURRENT_BINARY_DIR}
)