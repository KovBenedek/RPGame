#include "Victory.h"
#include "Palya2.h"

Victory* CreateVic(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** victory = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		victory[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &victory[i][j]);


		}
	}
	return victory;
}

void PrintVic()
{
	char** victory = CreateVic("Victory.txt");

	while (1) {
		
		printf("Level up: Gyorsabb loves!\n"); 
		printf("Nyomj egy [f], hogy atlepj a kovetkezo szintre\n"); 

		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {
				


				if (victory[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (victory[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (victory[i][j] == '0') {
					printf(" ");
				}
				if (victory[i][j] == '1') {
					printf("*");
				}
				if (victory[i][j] == '?') {
					printf("?");
				}
				if (victory[i][j] == 'Z') {
					printf("'");
				}
				if (victory[i][j] == 'K') {
					printf("-");
				}
				if (victory[i][j] == 'F') {
					printf(")");
				}
				if (victory[i][j] == 'E') {
					printf("(");
				}
				if (victory[i][j] == '_') {
					printf("_");
				}
				if (victory[i][j] == '^') {
					printf("^");
				}
				if (victory[i][j] == '|') {
					printf("|");
				}
				if (victory[i][j] == '#') {
					printf("#");
				}
				if (victory[i][j] == '-') {
					printf("-");
				}
				if (victory[i][j] == '/') {
					printf("/");
				}
				if (victory[i][j] == '+') {
					printf("+");
				}
				if (victory[i][j] == 'T') {
					printf("~");
				}
				if (victory[i][j] == 'o') {
					printf("o");
				}
				if (victory[i][j] == 'Q') {
					printf("}");
				}
				if (victory[i][j] == '$') {
					printf("$");
				}
				if (victory[i][j] == '!') {
					printf("!");
				}
				if (victory[i][j] == '>') {
					printf(">");
				}
			}
			printf("\n");
	
		}
		Sleep(2000);
		system("cls");
		char ch = getch();

		if (ch == 'f') {
			PrintP2();
		}

	
	}
}
