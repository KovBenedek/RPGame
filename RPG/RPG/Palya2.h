#ifndef PALYA2_H
#define PALYA2_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>


typedef struct Palya2 {

	char** palya2;
}Palya2;

Palya2* CreateP(FILE* file);
void PrintP2();



#endif