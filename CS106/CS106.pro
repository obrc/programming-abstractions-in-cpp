TEMPLATE = subdirs
SUBDIRS = Library Welcome \
    HelloWorld

# ordered forces subprojects to build sequentially, according to SUBDIRS
CONFIG += ordered
