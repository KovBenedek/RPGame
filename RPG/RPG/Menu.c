#include "Menu.h"
#include "Palya.h"

void Menu()
{

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
			Sleep(2000);
			system("cls");

		}
		break;

	case 2:
		system("cls");
	
			printf("A jatek egy varazslorol szol, aki kulonbozo helyeken szörnyekkel harcol. \nIranyitas: w-felfele\n s-lefele \n a-balra\n d-jobbra \n  Harcrendszer: A wasd billentyuk segitsegevel a varazslatot (~) elkell juttatni az ellenfelek gyengepotjaikhoz(},!,$), ezzel megsebezve oket mielott megennek a varazslot, de ha rossz helyen talalodik el a szorny az megsebzi a varazslot. \n Nyomj egy meg az 'e'-t, hogy visszterj a menube.\n");
			
			
			break;

	case 3:
		system("cls");
		exit(1);
		break;
	}

}

void arrowHere(int realPosition, int arrowPosition)
{
	if (realPosition == arrowPosition) {
		printf("  >");
	}
	else
	{
		printf("  ");
	}
}


void backgroundColor()
{
	system("COLOR 80");
}

void backgroundColor2()
{
	system("COLOR E0");
}