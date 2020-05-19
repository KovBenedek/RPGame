#include "Palya3.h"
#include "Fight3.h"


Palya3* CreateP3(FILE* file) {

	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** palya3 = (char**)(calloc(29, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 29; ++i) {
		palya3[i] = (char*)(calloc(60, sizeof(char)));
	}
	for (int i = 0; i < 29; ++i) {
		for (int j = 0; j < 60; ++j) {
			fscanf(fin, "%c \n", &palya3[i][j]);


		}
	}
	return palya3;

}


void PrintP3() {

	char** palya3 = CreateP3("Palya3.txt");


	int elozoX3, elozoY3;
	int playerX3 = 1;
	int playerY3 = 1;
	palya3[playerX3][playerY3] = 'P';


	while (1) {

		for (int i = 0; i < 29; ++i) {
			for (int j = 0; j < 60; ++j) {

				if (palya3[i][j] == '3' && (i == 0 || i == 29 - 1)) {

					printf(".");
				}
				else if (palya3[i][j] == '3' && (j == 0 || j == 60 - 1)) {

					printf(":");
				}
				if (palya3[i][j] == '0') {
					printf(" ");
				}
				if (palya3[i][j] == '1') {
					printf("*");
				}
				if (palya3[i][j] == 'P') {
					printf("@");
				}
				if (palya3[i][j] == '?') {
					printf("?");
				}
				if (palya3[i][j] == '#') {
					printf("#");
				}

			}
			printf("\n");
		}

		char option3 = getch();
		elozoX3= playerX3;
		elozoY3 = playerY3;


		if (option3 == 'd') {
			playerY3++;
		}
		if (option3 == 'a') {
			playerY3--;
		}
		else if (option3 == 's') {
			playerX3++;
		}
		else if (option3 == 'w') {
			playerX3--;
		}

		if (palya3[playerX3][playerY3] == '0') {

			palya3[playerX3][playerY3] = 'P';
			palya3[elozoX3][elozoY3] = '0';



		}
		if (palya3[playerX3][playerY3] == '3') {

			playerX3 = 1;
			playerY3 = 1;
		}
		if (palya3[playerX3][playerY3] == '#') {

			playerX3 = 1;
			playerY3 = 1;
		}
		if (palya3[playerX3][playerY3] == '1') {

			playerX3 = 1;
			playerY3= 1;
		}
		if (palya3[playerX3][playerY3] == '?') {

			while (1) {

				PrintFight3();

				Sleep(200);
				system("cls");
			}

		}
		Sleep(1);
		system("cls");
	}





}