
#ifndef FIGHT1_H
#define FIGHT1_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


typedef struct Fight {

	char** fight;

}Fight;


Fight* CreateF(FILE* file);
void PrintFight1();

#endif