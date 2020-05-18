#include "Defeat.h"
#include "Menu.h"

Defeat* CreateDef(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** defeat = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		defeat[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &defeat[i][j]);


		}
	}
	return defeat;
}

void PrintDef()
{
	char** defeat = CreateDef("Defeat.txt");

	while (1) {
		printf("Tul sokat idoztel es a szorny megevett!\n");
		printf("Nyomjd meg az [e], hogy visszalepja menube\n");
		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {

				if (defeat[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (defeat[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (defeat[i][j] == '0') {
					printf(" ");
				}
				if (defeat[i][j] == '1') {
					printf("*");
				}
				if (defeat[i][j] == '?') {
					printf("?");
				}
				if (defeat[i][j] == 'Z') {
					printf("'");
				}
				if (defeat[i][j] == 'K') {
					printf("-");
				}
				if (defeat[i][j] == 'F') {
					printf(")");
				}
				if (defeat[i][j] == 'E') {
					printf("(");
				}
				if (defeat[i][j] == '_') {
					printf("_");
				}
				if (defeat[i][j] == '^') {
					printf("^");
				}
				if (defeat[i][j] == '|') {
					printf("|");
				}
				if (defeat[i][j] == '#') {
					printf("#");
				}
				if (defeat[i][j] == '-') {
					printf("-");
				}
				if (defeat[i][j] == '/') {
					printf("/");
				}
				if (defeat[i][j] == '+') {
					printf("+");
				}
				if (defeat[i][j] == 'T') {
					printf("~");
				}
				if (defeat[i][j] == 'o') {
					printf("o");
				}
				if (defeat[i][j] == 'Q') {
					printf("}");
				}
				if (defeat[i][j] == '$') {
					printf("$");
				}
				if (defeat[i][j] == '!') {
					printf("!");
				}
				if (defeat[i][j] == '>') {
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
