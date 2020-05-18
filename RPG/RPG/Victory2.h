#ifndef VICTORY2_H
#define VICTORY2_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>



typedef struct Victory2 {

	char** victory2;

}Victory2;



Victory2* CreateVic2(FILE* file);
void PrintVic2();

#endif;
