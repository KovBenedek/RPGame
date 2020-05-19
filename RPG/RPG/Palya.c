#include "Palya.h"
#include "Fight1.h"

Palya* CreateP(FILE* file)
{

	FILE* fin = fopen(file, "rt");
	if (!fin) {

		printf("Sikertelen");
		exit(1);
	}


	char** palya = (char**)(calloc(29, sizeof(char*)));
	//ellenorzes
	for (int i = 0; i < 29; ++i) {
		palya[i] = (char*)(calloc(60, sizeof(char)));
	}
	for (int i = 0; i < 29; ++i) {
		for (int j = 0; j < 60; ++j) {
			fscanf(fin, "%c \n", &palya[i][j]);


		}
	}
	return palya;
}

void PrintP()
{
	char** palya = CreateP("Palya.txt");



	

	int elozoX, elozoY;
	int playerX = 1;
	int playerY = 1;
	palya[playerX][playerY] = 'P';


	while (1) {

		for (int i = 0; i < 29; ++i) {
			for (int j = 0; j < 60; ++j) {

				if (palya[i][j] == '3' && (i == 0 || i == 29 - 1)) {

					printf(".");
				}
				else if (palya[i][j] == '3' && (j == 0 || j == 60 - 1)) {

					printf(":");
				}
				if (palya[i][j] == '0') {
					printf(" ");
				}
				if (palya[i][j] == '1') {
					printf("*");
				}
				if (palya[i][j] == 'P') {
					printf("@");
				}
				if (palya[i][j] == '?') {
					printf("?");
				}
				if (palya[i][j] == '#') {
					printf("#");
				}

			}
			printf("\n");
		}

		char option = getch();
		elozoX = playerX;
		elozoY = playerY;


		if (option == 'd') {
			playerY++;
		}
		if (option == 'a') {
			playerY--;
		}
		else if (option == 's') {
			playerX++;
		}
		else if (option == 'w') {
			playerX--;
		}

		if (palya[playerX][playerY] == '0') {

			palya[playerX][playerY] = 'P';
			palya[elozoX][elozoY] = '0';



		}
		if (palya[playerX][playerY] == '3') {

			playerX = 1;
			playerY = 1;
		}
		if (palya[playerX][playerY] == '#') {

			playerX = 1;
			playerY = 1;
		}
		if (palya[playerX][playerY] == '1') {

			playerX = 1;
			playerY = 1;
		}

		if (palya[playerX][playerY] == '?') {

		
			while (1) {

				
	
				
				PrintFight1();

				Sleep(200);
				system("cls");
			}
			
		}
		Sleep(1);
		system("cls");
	}


}