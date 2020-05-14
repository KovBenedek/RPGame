#include "Menu.h"

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