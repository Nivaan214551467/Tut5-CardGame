#include "DeckOfCards.h"
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;


	Card *ptrArray[20];
	//ptrArray = new Card*[20];

	Card cardArray[20] = { Card(1, "Red"), Card(2, "Red"), Card(3, "Red"), Card(4, "Red"), Card(5, "Red"), Card(6, "Red"), Card(7, "Red"), Card(8, "Red"), Card(9, "Red"), Card(10, "Red"), Card(1, "Black"), Card(2, "Black"), Card(3, "Black"), Card(4, "Black"), Card(5, "Black"), Card(6, "Black"), Card(7, "Black"), Card(8, "Black"), Card(9, "Black"), Card(10, "Black"), };

DeckOfCards::DeckOfCards()
{
	int i;
	for (i = 0; i < 20; i++)
	{
		ptrArray[i] = &cardArray[i];
		//ptrArray[i]->print();
	}
}

void DeckOfCards::reset()
{
	DeckOfCards();
}

void DeckOfCards::shuffle()
{
	Card *tmpPtr;
	srand(time(NULL));
	for (int i = 0; i < 50; i++)
	{
		
		int num1 = rand() % 20;
		int num2 = rand() % 20;
		
		tmpPtr = ptrArray[num1];
		ptrArray[num1] = ptrArray[num2];
		ptrArray[num2] = tmpPtr;
	}

	/*for (int i = 0; i < 20; i++)
	{
		ptrArray[i]->print();
	}*/
}

void DeckOfCards::draw()
{
	for (int i = 0; i < 20; i++)
	{
		if (ptrArray[i] != NULL)
		{
			cout << "Card drawn is : ";
			ptrArray[i]->print();
			ptrArray[i] = NULL;
			break;
		}
	}
}


void DeckOfCards::peek()
{
	for (int i = 0; i < 20; i++)
	{
		if (ptrArray[i] != NULL)
		{
			cout << "Next card is : ";
			ptrArray[i]->print();
			break;
		}
	}
}

int DeckOfCards::numOfCards()
{
	int count = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptrArray[i] != NULL)
		{
			count++;
		}
	}
	return count;
}

DeckOfCards::~DeckOfCards()
{

}