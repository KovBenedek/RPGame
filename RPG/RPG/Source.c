#include "Menu.h"
#include "Palya.h"


int main() {



	backgroundColor();
	system("cls");
	int position = 1;
	int keyPressed = 0;


#define MAX 3
#define MIN 1

	while (keyPressed != 13) {

		system("cls");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                                                  ______________________\n\n");
		arrowHere(1, position); printf("                                                       Start Game\n");
		printf("                                                  ______________________\n\n");
		arrowHere(2, position); printf("                                                       Instruction\n");
		printf("                                                  ______________________\n\n");
		arrowHere(3, position); printf("                                                         Exit\n");
		printf("                                                  ______________________\n\n");


		keyPressed = getch();

		if (keyPressed == 80 && position != MAX) {
			position++;
		}
		else if (keyPressed == 72 && position != MIN) {
			position--;
		}
		else {
			position = position;
		}
	}

	switch (position) {

	case 1:

		system("cls");
		while (1) {
			backgroundColor2();

			PrintP();
			//Sleep(2000);
			//system("cls");

		}
		break;

	case 2:
		system("cls");
		printf("<3");
		break;

	case 3:
		system("cls");

		break;
	}

}