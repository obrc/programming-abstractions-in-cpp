#ifndef TESTMATH_H
#define TESTMATH_H
//const double PI;
//_testmath.h:3:14: error: default initialization of an object of const type 'const double'
//const double PI;
//with initialization will fixed the error
//or use extern keyword and initialz at cpp file;
extern const double PI_1; //because the stanford library already define PI
//if insti PI and with stanfor libarary use, you weill get Duplicate Symbol of make erro
/*
:-1: error: linker command failed with exit code 1 (use -v to see invocation)
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [../../CS106/Draft/Draft.app/Contents/MacOS/Draft] Error 1
*/
#endif // TESTMATH_H
