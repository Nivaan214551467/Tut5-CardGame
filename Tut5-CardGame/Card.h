#pragma once
class Card
{
private:
	int number;
	string colour;

public:
	Card(int,string);
	string getColour();
	int getNumber();
	void print();
	~Card();
};

