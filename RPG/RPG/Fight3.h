#ifndef FIGHT3_H
#define FIGHT3_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


typedef struct Fight3 {

	char** fight3;

}Fight3;


Fight3* CreateF3(FILE* file);
void PrintFight3();

#endif

