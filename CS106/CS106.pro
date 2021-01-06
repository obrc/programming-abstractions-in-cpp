TEMPLATE = subdirs
SUBDIRS = Library Welcome \
    Draft \
    HelloWorld \
    Lecture1-output-input \
    Lecture2-Function \
    Lecture2-cmath \
    Lecture2-string \
    Lecture3-collections \
    Lecture3-stream \
    TextbookExercise

# ordered forces subprojects to build sequentially, according to SUBDIRS
CONFIG += ordered
