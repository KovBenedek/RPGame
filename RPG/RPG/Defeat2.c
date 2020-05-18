#include "Defeat2.h"
#include "Menu.h"

Defeat2* CreateDef2(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** defeat2 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		defeat2[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &defeat2[i][j]);


		}
	}
	return defeat2;
}

void PrintDef2()
{
	char** defeat2 = CreateDef2("Defeat2.txt");

	while (1) {
		printf("Tul sokat idoztel es a szorny megevett!\n");
		printf("Nyomjd meg az [e], hogy visszalepja menube\n");
		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {

				if (defeat2[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (defeat2[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (defeat2[i][j] == '0') {
					printf(" ");
				}
				if (defeat2[i][j] == '1') {
					printf("*");
				}
				if (defeat2[i][j] == '?') {
					printf("?");
				}
				if (defeat2[i][j] == 'Z') {
					printf("'");
				}
				if (defeat2[i][j] == 'K') {
					printf("-");
				}
				if (defeat2[i][j] == 'F') {
					printf(")");
				}
				if (defeat2[i][j] == 'E') {
					printf("(");
				}
				if (defeat2[i][j] == '_') {
					printf("_");
				}
				if (defeat2[i][j] == '^') {
					printf("^");
				}
				if (defeat2[i][j] == '|') {
					printf("|");
				}
				if (defeat2[i][j] == '#') {
					printf("#");
				}
				if (defeat2[i][j] == '-') {
					printf("-");
				}
				if (defeat2[i][j] == '/') {
					printf("/");
				}
				if (defeat2[i][j] == '+') {
					printf("+");
				}
				if (defeat2[i][j] == 'T') {
					printf("~");
				}
				if (defeat2[i][j] == 'o') {
					printf("o");
				}
				if (defeat2[i][j] == 'Q') {
					printf("}");
				}
				if (defeat2[i][j] == '$') {
					printf("$");
				}
				if (defeat2[i][j] == '!') {
					printf("!");
				}
				if (defeat2[i][j] == '>') {
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
