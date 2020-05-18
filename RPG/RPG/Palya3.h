#ifndef PALYA3_H
#define PALYA3_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>


typedef struct Palya3 {

	char** palya3;
}Palya3;

Palya3* CreateP3(FILE* file);
void PrintP3();



#endif