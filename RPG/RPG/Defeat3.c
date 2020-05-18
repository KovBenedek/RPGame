#include "Defeat3.h"
#include "Menu.h"

Defeat3* CreateDef3(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** defeat3 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		defeat3[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &defeat3[i][j]);


		}
	}
	return defeat3;
}

void PrintDef3()
{
	char** defeat3 = CreateDef3("Defeat3.txt");

	while (1) {
		printf("Tul sokat idoztel es a szorny megevett!\n");
		printf("Nyomjd meg az [e], hogy visszalepja menube\n");
		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {

				if (defeat3[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (defeat3[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (defeat3[i][j] == '0') {
					printf(" ");
				}
				if (defeat3[i][j] == '1') {
					printf("*");
				}
				if (defeat3[i][j] == '?') {
					printf("?");
				}
				if (defeat3[i][j] == 'Z') {
					printf("'");
				}
				if (defeat3[i][j] == 'K') {
					printf("-");
				}
				if (defeat3[i][j] == 'F') {
					printf(")");
				}
				if (defeat3[i][j] == 'E') {
					printf("(");
				}
				if (defeat3[i][j] == '_') {
					printf("_");
				}
				if (defeat3[i][j] == '^') {
					printf("^");
				}
				if (defeat3[i][j] == '|') {
					printf("|");
				}
				if (defeat3[i][j] == '#') {
					printf("#");
				}
				if (defeat3[i][j] == '-') {
					printf("-");
				}
				if (defeat3[i][j] == '/') {
					printf("/");
				}
				if (defeat3[i][j] == '+') {
					printf("+");
				}
				if (defeat3[i][j] == 'T') {
					printf("~");
				}
				if (defeat3[i][j] == 'o') {
					printf("o");
				}
				if (defeat3[i][j] == 'Q') {
					printf("}");
				}
				if (defeat3[i][j] == '$') {
					printf("$");
				}
				if (defeat3[i][j] == '!') {
					printf("!");
				}
				if (defeat3[i][j] == '>') {
					printf(">");
				}
			}
			printf("\n");

		}
		Sleep(2000);
		system("cls");

		char ch = getch();

		if (ch == 'e') {
			Menu();
		}


	}
}