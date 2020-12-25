TEMPLATE = subdirs
SUBDIRS = Library Welcome \
    HelloWorld \
    Lecture2-Function \
    Lecture2-string

# ordered forces subprojects to build sequentially, according to SUBDIRS
CONFIG += ordered
