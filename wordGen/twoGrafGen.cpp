#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <string>

int main(){

int length = 0;
srand(time(NULL)); // Seed	

std::vector<int> choice = {}; // User choice input
std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}; //Vowel Vector
std::vector<char> consts = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'}; // Consonant vector
std::vector<char> rConsts = {'b', 'c', 'd', 'g', 'p', 'q', 'r', 's'};
std::vector<char> result; // Where our random word generated will go

std::cout << "Graffiti Tag Generator\n";
std::cout << "Enter the length you want your tag to be: \n";
std::cin >> length;

std::cout << "Input 0 for more information, 1 for consonants, 2 for vowels, 3 for round consonants (Please note: Inputing 0 will remove a letter from your name.";
for(int i = 0; i < length; i++) { // Display message from vector(choices), read user input, add to our vector(choice) - if input is not 0, 1 or 2, terminate program.

    std::cout << "\nChar " << i << ":\n";
    int temp;
    std::cin >> temp;
    choice.push_back(temp);
    
    if(temp == 1 || temp == 2 || temp == 0 || temp == 3) {
     } else {
    std::cout << "Invalid input, program terminated.\n";
    return 0;
    }
   	
}


for(int j = 0; j < choice.size(); j++) { // Random letter selection to total length of our desired word

	switch(choice[j]){
		case 0: // Description
			break; 
			
		case 1: // Generates a random seed between 1 and 21, selects a const from our vector, pushes it back to our result
			int con;
			con = rand() % 21;
			char temp2;
			temp2 = consts[con];
			result.push_back(temp2);
			break;
		case 2:
			int vow;
			vow = rand() % 5; // Number between 0 and 4, selects a vowel from our vector, pushes it back to result
			char temp3;
			temp3 = vowels[vow];
			result.push_back(temp3);
			break;
		case 3:
			int rCon;
			rCon = rand() % 7;
			char temp4;
			temp4 = rConsts[rCon];
			result.push_back(temp4);
			break;
		default:
			return 0;
			break;
	
	
	}


}


// Display the result
std::cout << "\n\nYour word is the following: \n";

for (int z = 0; z < result.size(); z++) {
	std::cout << result[z];
}
std::cout << "\n\n";



}
