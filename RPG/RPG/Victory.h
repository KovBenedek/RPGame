#ifndef VICTORY_H
#define VICTORY_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>



typedef struct Victory {

	char** victory;

}Victory;



Victory* CreateVic(FILE* file);
void PrintVic();

#endif;
