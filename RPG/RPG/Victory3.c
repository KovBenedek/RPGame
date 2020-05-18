#include "Victory3.h"


Victory3* CreateVic3(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** victory3 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		victory3[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &victory3[i][j]);


		}
	}
	return victory3;
}

void PrintVic3()
{
	char** victory3 = CreateVic3("Victory3.txt");

	while (1) {


		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {



				if (victory3[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (victory3[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (victory3[i][j] == '0') {
					printf(" ");
				}
				if (victory3[i][j] == '1') {
					printf("*");
				}
				if (victory3[i][j] == '?') {
					printf("?");
				}
				if (victory3[i][j] == 'Z') {
					printf("'");
				}
				if (victory3[i][j] == 'K') {
					printf("-");
				}
				if (victory3[i][j] == 'F') {
					printf(")");
				}
				if (victory3[i][j] == 'E') {
					printf("(");
				}
				if (victory3[i][j] == '_') {
					printf("_");
				}
				if (victory3[i][j] == '^') {
					printf("^");
				}
				if (victory3[i][j] == '|') {
					printf("|");
				}
				if (victory3[i][j] == '#') {
					printf("#");
				}
				if (victory3[i][j] == '-') {
					printf("-");
				}
				if (victory3[i][j] == '/') {
					printf("/");
				}
				if (victory3[i][j] == '+') {
					printf("+");
				}
				if (victory3[i][j] == 'T') {
					printf("~");
				}
				if (victory3[i][j] == 'o') {
					printf("o");
				}
				if (victory3[i][j] == 'Q') {
					printf("}");
				}
				if (victory3[i][j] == '$') {
					printf("$");
				}
				if (victory3[i][j] == '!') {
					printf("!");
				}
				if (victory3[i][j] == '>') {
					printf(">");
				}
			}
			printf("\n");

		}
		Sleep(2000);
		system("cls");
		char ch = getch();

		


	}
}