#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

Card::Card()
{

}

Card::Card(int num, string col)
{
	number = num;
    colour = col;
}

string Card::getColour()
{
     return colour;
}

int Card::getNumber()
{
    return number; 
}

void Card::print()
{
     cout << number << " " << colour << endl;    
}

Card::~Card()
{
}
