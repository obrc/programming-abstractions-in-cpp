TEMPLATE = subdirs
SUBDIRS = Library Welcome \
    HelloWorld \
    Lecture2-Function

# ordered forces subprojects to build sequentially, according to SUBDIRS
CONFIG += ordered
