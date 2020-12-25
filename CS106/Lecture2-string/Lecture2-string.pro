QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

###############################################################################
#       Find/use installed version of cs106 lib and headers                   #
###############################################################################

# Library installed into per-user writable data location from QtStandardPaths
win32|win64     { QTP_EXE = qtpaths.exe } else { QTP_EXE = qtpaths }
USER_DATA_DIR   =   $$system($$[QT_INSTALL_BINS]/$$QTP_EXE --writable-path GenericDataLocation)

SPL_DIR         =   $${USER_DATA_DIR}/cs106
STATIC_LIB      =   $$system_path($${SPL_DIR}/lib/libcs106.a)

# Confirm presence of lib before build using extra target as prereq
check_lib.target    =  "$${STATIC_LIB}"
check_lib.commands  =  $(error CS106 library not found. See http://cs106b.stanford.edu/qt for library install instructions)
QMAKE_EXTRA_TARGETS +=  check_lib
PRE_TARGETDEPS       +=  $${check_lib.target}

# link against libcs106.a, add library headers to search path
# libcs106 requires libpthread, add link here
LIBS            +=  -lcs106 -lpthread
QMAKE_LFLAGS    =   -L$$shell_quote($${SPL_DIR}/lib)
# put PWD first in search list to allow local copy to shadow if needed
INCLUDEPATH     +=  $$PWD "$${SPL_DIR}/include"
