#ifndef DEFEAT2_H
#define DEFEAT2_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


typedef struct Defeat2 {

	char** defeat2;

}Defeat2;

Defeat2* CreateDef2(FILE* file);
void PrintDef2();



#endif
