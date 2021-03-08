#include <iostream>
#include <vector>
#include <string>
#include "funcs.hpp"

std::vector<City> cities;

City::City(int c, int entropy){
	for(int i = 0; i <= c; i++){
		population = entropy;
		designation = i;
		des = std::to_string(designation);
	}


}


std::string City::cityInfo(){

	std::string info = "\n" + name;
	info += des;
	info += "\n";
	info += "population: ";
	info += std::to_string(population);
	info += "\n\n";
	return info;



}

int City::getPop(){

return population;

}

int City::getDes(){

return designation;

}

std::string merge_cities(int a, int b) {

	int popOne, popTwo, newPop;
	int newDes;

	City cityOne = cities[a];
	City cityTwo = cities[b];

	popOne = cityOne.getPop();
	popTwo = cityTwo.getPop();
	newPop = popOne + popTwo;


	if(a != 0 || b != 0){
	cities.erase(cities.begin() + a);
	cities.erase(cities.begin() + b - 1);
	} else if (a == 1 && b == 2){
	
	cities.erase(cities.begin() + a + 1);
	cities.erase(cities.begin() + b);
	
	} else {
	cities.erase(cities.begin() + a);
	cities.erase(cities.begin() + b);
	}
	
	
	newDes = cities.size();
	

	cities.push_back(City(newDes, newPop));
	std::string nuCity = cities[cities.size()].cityInfo();

	return nuCity;

}


void cityGenerate(int seed) {

srand(time(NULL));

	for(int i = 0; i <= seed; i++){
		int entropy = rand() % 20;
		cities.push_back(City(i, entropy));
	}

}

void callCities(){

for(int j = 0; j < cities.size(); j++){

		std::cout << cities[j].cityInfo();
	}
	
}

void clearCities(){

cities.clear();

}

int newCities() {
int temp;
std::cout << "Enter the numeric value of cities you want generated: ";
std::cin >> temp;

return temp;
}
