#ifndef PALYA_H
#define PALYA_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>

typedef struct Palya {

	char** palya;
}Palya;

Palya* CreateP(FILE* file);
void PrintP();

#endif