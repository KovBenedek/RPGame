
#ifndef DEFEAT3_H
#define DEFEAT3_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


typedef struct Defeat3 {

	char** defeat3;

}Defeat3;

Defeat3* CreateDef3(FILE* file);
void PrintDef3();



#endif