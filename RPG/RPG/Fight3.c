#include "Fight3.h"
#include "Defeat3.h"
#include "Victory3.h"


Fight3* CreateF3(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** fight3 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		fight3[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &fight3[i][j]);


		}
	}
	return fight3;
}

void PrintFight3()
{

	char** fight3 = CreateF3("Fight3.txt");

	int HP = 3;
	int CHP = 4;
	int previousX, previousY;
	int magicX = 10;
	int magicY = 21;

	srand(time(NULL));

	time_t cTime, sTime;
	sTime = time(NULL);

	int RandonNumber = rand() % ((3 + 1) - 1) + 1;
	int RandonNumber2 = rand() % ((3 + 1) - 1) + 1;
	while (1) {
		cTime = time(NULL);
		printf("A szorny elete: ");
		printf("%i ", HP);
		printf("\n");
		printf("%d\n", RandonNumber);
		printf("A Varazslo elete: ");
		printf("%i ", CHP);
		printf("\n");



		for (int i = 0; i < 16; ++i) {
			for (int j = 0; j < 66; ++j) {

				if (fight3[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (fight3[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (fight3[i][j] == '0') {
					printf(" ");
				}
				if (fight3[i][j] == '1') {
					printf("*");
				}
				if (fight3[i][j] == '?') {
					printf("?");
				}
				if (fight3[i][j] == 'Z') {
					printf("'");
				}
				if (fight3[i][j] == 'K') {
					printf("-");
				}
				if (fight3[i][j] == 'F') {
					printf(")");
				}
				if (fight3[i][j] == 'E') {
					printf("(");
				}
				if (fight3[i][j] == '_') {
					printf("_");
				}
				if (fight3[i][j] == '^') {
					printf("^");
				}
				if (fight3[i][j] == '|') {
					printf("|");
				}
				if (fight3[i][j] == '#') {
					printf("#");
				}
				if (fight3[i][j] == '-') {
					printf("-");
				}
				if (fight3[i][j] == '/') {
					printf("/");
				}
				if (fight3[i][j] == '+') {
					printf("+");
				}
				if (fight3[i][j] == 'T') {
					printf("~");
				}
				if (fight3[i][j] == 'o') {
					printf("o");
				}
				if (fight3[i][j] == 'Q') {
					printf("}");
				}
				if (fight3[i][j] == '$') {
					printf("$");
				}
				if (fight3[i][j] == '!') {
					printf("!");
				}
				if (fight3[i][j] == '>') {
					printf(">");
				}
			}
			printf("\n");
		}

		previousX = magicX;
		previousY = magicY;


		char ch = getch();

		if (ch == 'd') {
			magicY++;
		}
		if (ch == 'a') {
			magicY--;
		}
		if (ch == 'w') {
			magicX--;
		}
		if (ch == 's') {
			magicX++;
		}

		if (fight3[magicX][magicY] == '0') {
			fight3[magicX][magicY] = 'T';
			fight3[previousX][previousY] = '0';
		}





		if (RandonNumber == 1) {

			if (fight3[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight3[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight3[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight3[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 2) {

			if (fight3[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight3[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight3[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight3[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 3) {

			if (fight3[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight3[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight3[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight3[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight3[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}

		if (HP == 0) {
			while (1) {
				PrintVic3();
				Sleep(1);
				system("cls");
			}
		}
		if (CHP == 0) {
			while (1) {
				PrintDef3();
				Sleep(1);
				system("cls");
			}
			//HA MEGHAL A VARAZSLO
		}

		if (cTime - sTime > 30) {

			while (1) {

				PrintDef3();

				Sleep(1);

				system("cls");

			}
		}


		Sleep(1);
		system("cls");


	}
}