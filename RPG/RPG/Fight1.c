#include "Fight1.h"
#include "Victory.h"
#include "Defeat.h"

Fight* CreateF(FILE* file)
{
	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** fight = (char**)(calloc(16, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 16; ++i) {
		fight[i] = (char*)(calloc(66, sizeof(char)));
	}
	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 66; ++j) {
			fscanf(fin, "%c \n", &fight[i][j]);


		}
	}
	return fight;
}

void PrintFight1()
{

	char** fight = CreateF("Fight1.txt");

	int HP = 2;
	int CHP = 3;
	int previousX, previousY;
	int magicX = 10;
	int magicY = 21;
	//fight[magicX][magicY] = 'T';
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

				if (fight[i][j] == '3' && (i == 0 || i == 16 - 1)) {
					printf(".");
				}
				else if (fight[i][j] == '3' && (j == 0 || j == 66 - 1)) {
					printf(":");
				}
				if (fight[i][j] == '0') {
					printf(" ");
				}
				if (fight[i][j] == '1') {
					printf("*");
				}
				if (fight[i][j] == '?') {
					printf("?");
				}
				if (fight[i][j] == 'Z') {
					printf("'");
				}
				if (fight[i][j] == 'K') {
					printf("-");
				}
				if (fight[i][j] == 'F') {
					printf(")");
				}
				if (fight[i][j] == 'E') {
					printf("(");
				}
				if (fight[i][j] == '_') {
					printf("_");
				}
				if (fight[i][j] == '^') {
					printf("^");
				}
				if (fight[i][j] == '|') {
					printf("|");
				}
				if (fight[i][j] == '#') {
					printf("#");
				}
				if (fight[i][j] == '-') {
					printf("-");
				}
				if (fight[i][j] == '/') {
					printf("/");
				}
				if (fight[i][j] == '+') {
					printf("+");
				}
				if (fight[i][j] == 'T') {
					printf("~");
				}
				if (fight[i][j] == 'o') {
					printf("o");
				}
				if (fight[i][j] == 'Q') {
					printf("}");
				}
				if (fight[i][j] == '$') {
					printf("$");
				}
				if (fight[i][j] == '!') {
					printf("!");
				}
				if (fight[i][j] == '>') {
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

		if (fight[magicX][magicY] == '0') {
			fight[magicX][magicY] = 'T';
			fight[previousX][previousY] = '0';
		}





		if (RandonNumber == 1) {

			if (fight[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 2) {

			if (fight[magicX][magicY] == '$') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		if (RandonNumber == 3) {

			if (fight[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				HP--;

			}
			if (fight[magicX][magicY] == '^') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '|') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '#') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '_') {

				magicX = 10;
				magicY = 21;
			}
			if (fight[magicX][magicY] == '3') {

				magicX = 10;
				magicY = 21;
			}
			//
			if (fight[magicX][magicY] == 'Q') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
			if (fight[magicX][magicY] == '!') {

				magicX = 10;
				magicY = 21;
				CHP--;
			}
		}
		
		if (HP == 0) {
			while (1) {
				PrintVic();
				Sleep(1);
				system("cls");
			}
		}
		if (CHP == 0) {
			while (1) {
				PrintDef();
				Sleep(1);
				system("cls");
			}
			//HA MEGHAL A VARAZSLO
		}

		if (cTime - sTime > 60) {
		
			while (1) {
				
				PrintDef();
				
				Sleep(1);
				
				system("cls");
				
			}
		}


		Sleep(200);
		system("cls");


	}
}
	

