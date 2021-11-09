#include <Arduino.h>

// pragma once prevents the file to be included twice
#pragma once
// #include ...
// all other includes stays here in the .h file

// vars need to be extern
extern String myName;

// prototypes don't need named attributes in the .h file
void sayMyName(String);