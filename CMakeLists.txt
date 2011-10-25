project(QtOpenGLTemplate)

cmake_minimum_required(VERSION 2.4.0)

# find and setup Qt4
# see http://cmake.org/cmake/help/cmake2.6docs.html#module:FindQt4 for details
find_package(Qt4 REQUIRED) 
set(QT_USE_QTOPENGL TRUE)
include(${QT_USE_FILE})
set(LIBS ${LIBS} ${QT_LIBRARIES})

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})
set(LIBS ${LIBS} ${OPENGL_LIBRARIES})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
set(LIBS ${LIBS} ${GLUT_LIBRARIES})

set(SRCS ${SRCS}
    src/main.cpp
    src/GLWindow.cpp
    src/MainWindow.cpp
)

set(MOC_HEADERS
    src/MainWindow.h
)

qt4_wrap_cpp(MOC_OUTFILES ${MOC_HEADERS})

add_executable(qtopengltemplate ${SRCS} ${MOC_OUTFILES})

target_link_libraries(qtopengltemplate ${LIBS})
