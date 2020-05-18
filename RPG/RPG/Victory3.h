#ifndef VICTORY3_H
#define VICTORY3_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>



typedef struct Victory3 {

	char** victory3;

}Victory3;



Victory3* CreateVic3(FILE* file);
void PrintVic3();

#endif;
