#include "Victory2.h"
//#include "Palya2.h"

Victory2* CreateVic2(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** victory2 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		victory2[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &victory2[i][j]);


		}
	}
	return victory2;
}

void PrintVic2()
{
	char** victory2 = CreateVic2("Victory.txt");

	while (1) {

		printf("Level up: Gyorsabb loves!\n");
		printf("Nyomj egy [f], hogy atlepj a kovetkezo szintre\n");

		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {



				if (victory2[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (victory2[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (victory2[i][j] == '0') {
					printf(" ");
				}
				if (victory2[i][j] == '1') {
					printf("*");
				}
				if (victory2[i][j] == '?') {
					printf("?");
				}
				if (victory2[i][j] == 'Z') {
					printf("'");
				}
				if (victory2[i][j] == 'K') {
					printf("-");
				}
				if (victory2[i][j] == 'F') {
					printf(")");
				}
				if (victory2[i][j] == 'E') {
					printf("(");
				}
				if (victory2[i][j] == '_') {
					printf("_");
				}
				if (victory2[i][j] == '^') {
					printf("^");
				}
				if (victory2[i][j] == '|') {
					printf("|");
				}
				if (victory2[i][j] == '#') {
					printf("#");
				}
				if (victory2[i][j] == '-') {
					printf("-");
				}
				if (victory2[i][j] == '/') {
					printf("/");
				}
				if (victory2[i][j] == '+') {
					printf("+");
				}
				if (victory2[i][j] == 'T') {
					printf("~");
				}
				if (victory2[i][j] == 'o') {
					printf("o");
				}
				if (victory2[i][j] == 'Q') {
					printf("}");
				}
				if (victory2[i][j] == '$') {
					printf("$");
				}
				if (victory2[i][j] == '!') {
					printf("!");
				}
				if (victory2[i][j] == '>') {
					printf(">");
				}
			}
			printf("\n");

		}
		Sleep(2000);
		system("cls");
		char ch = getch();

	//	if (ch == 'f') {
	//		PrintP2();
	//	}


	}
}