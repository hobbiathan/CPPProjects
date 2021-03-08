#include <iostream>

class City{

int checkPlace;
int population;
int designation;
std::string name = "city ";
std::string des;

public:
	void pop_update();
	void desig_update();
	std::string cityInfo();

	City(int c, int entropy);
	int getPop();
	int getDes();
};

std::string merge_cities(int a, int b);

void cityGenerate(int seed = 2);
void callCities();
void clearCities();
int newCities();

