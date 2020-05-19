#include "Palya2.h"
#include "Fight2.h"


Palya2* CreateP2(FILE* file) {

	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** palya2 = (char**)(calloc(29, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 29; ++i) {
		palya2[i] = (char*)(calloc(60, sizeof(char)));
	}
	for (int i = 0; i < 29; ++i) {
		for (int j = 0; j < 60; ++j) {
			fscanf(fin, "%c \n", &palya2[i][j]);


		}
	}
	return palya2;

}


void PrintP2() {

	char** palya2 = CreateP("Palya2.txt");


	int elozoX2, elozoY2;
	int playerX2 = 1;
	int playerY2 = 1;
	palya2[playerX2][playerY2] = 'P';


	while (1) {

		for (int i = 0; i < 29; ++i) {
			for (int j = 0; j < 60; ++j) {

				if (palya2[i][j] == '3' && (i == 0 || i == 29 - 1)) {

					printf(".");
				}
				else if (palya2[i][j] == '3' && (j == 0 || j == 60 - 1)) {

					printf(":");
				}
				if (palya2[i][j] == '0') {
					printf(" ");
				}
				if (palya2[i][j] == '1') {
					printf("*");
				}
				if (palya2[i][j] == 'P') {
					printf("@");
				}
				if (palya2[i][j] == '?') {
					printf("?");
				}
				if (palya2[i][j] == '#') {
					printf("#");
				}

			}
			printf("\n");
		}

		char option2 = getch();
		elozoX2 = playerX2;
		elozoY2 = playerY2;


		if (option2 == 'd') {
			playerY2++;
		}
		if (option2 == 'a') {
			playerY2--;
		}
		else if (option2 == 's') {
			playerX2++;
		}
		else if (option2 == 'w') {
			playerX2--;
		}

		if (palya2[playerX2][playerY2] == '0') {

			palya2[playerX2][playerY2] = 'P';
			palya2[elozoX2][elozoY2] = '0';



		}

		if (palya2[playerX2][playerY2] == '3') {

			playerX2= 1;
			playerY2= 1;
		}
		if (palya2[playerX2][playerY2] == '#') {

			playerX2 = 1;
			playerY2= 1;
		}
		if (palya2[playerX2][playerY2] == '1') {

			playerX2 = 1;
			playerY2 = 1;
		}

		if (palya2[playerX2][playerY2] == '?') {

			while (1) {

				PrintFight2();

				Sleep(200);
				system("cls");
			}

		}
		Sleep(1);
		system("cls");
	}





}