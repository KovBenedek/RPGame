#include "Fight2.h"
#include "Defeat2.h"
#include "Victory2.h"


Fight2* CreateF2(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** fight2 = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		fight2[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &fight2[i][j]);


		}
	}
	return fight2;
}

void PrintFight2()
{

	char** fight2 = CreateF2("Fight2.txt");

	int HP = 3;
	int CHP = 3;
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

				if (fight2[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (fight2[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (fight2[i][j] == '0') {
					printf(" ");
				}
				if (fight2[i][j] == '1') {
					printf("*");
				}
				if (fight2[i][j] == '?') {
					printf("?");
				}
				if (fight2[i][j] == 'Z') {
					printf("'");
				}
				if (fight2[i][j] == 'K') {
					printf("-");
				}
				if (fight2[i][j] == 'F') {
					printf(")");
				}
				if (fight2[i][j] == 'E') {
					printf("(");
				}
				if (fight2[i][j] == '_') {
					printf("_");
				}
				if (fight2[i][j] == '^') {
					printf("^");
				}
				if (fight2[i][j] == '|') {
					printf("|");
				}
				if (fight2[i][j] == '#') {
					printf("#");
				}
				if (fight2[i][j] == '-') {
					printf("-");
				}
				if (fight2[i][j] == '/') {
					printf("/");
				}
				if (fight2[i][j] == '+') {
					printf("+");
				}
				if (fight2[i][j] == 'T') {
					printf("~");
				}
				if (fight2[i][j] == 'o') {
					printf("o");
				}
				if (fight2[i][j] == 'Q') {
					printf("}");
				}
				if (fight2[i][j] == '$') {
					printf("$");
				}
				if (fight2[i][j] == '!') {
					printf("!");
				}
				if (fight2[i][j] == '>') {
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

		if (fight2[magicX][magicY] == '0') {
			fight2[magicX][magicY] = 'T';
			fight2[previousX][previousY] = '0';
		}





		if (RandonNumber == 1) {

			if (fight2[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight2[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight2[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight2[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 2) {

			if (fight2[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight2[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight2[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight2[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 3) {

			if (fight2[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight2[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight2[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight2[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight2[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}

		if (HP == 0) {
			while (1) {
				PrintVic2();
				Sleep(1);
				system("cls");
			}
		}
		if (CHP == 0) {
			while (1) {
				PrintDef2();
				Sleep(1);
				system("cls");
			}
			//HA MEGHAL A VARAZSLO
		}

		if (cTime - sTime > 40) {

			while (1) {

				PrintDef2();

				Sleep(1);

				system("cls");

			}
		}


		Sleep(50);
		system("cls");


	}
}