#ifndef FIGHT2_H
#define FIGHT2_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


typedef struct Fight2 {

	char** fight2;

}Fight2;


Fight2* CreateF2(FILE* file);
void PrintFight2();

#endif
