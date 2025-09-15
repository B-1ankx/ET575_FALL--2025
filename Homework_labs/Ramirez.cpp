/*  
Homework 1: strings, string methiods, and 
numerical variables
Student's Name: Luis Ramirez*/

#include <iostream>
#include <string>
using namespace std;
int main() {

	cout<<"----- Activity 1 -----"<<std::endl;
	
	std::string greeting = "Welcome to New York City";

	std::string name;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	std::string fullMessage = greeting + name;

	std::cout << "Message:\t" << fullMessage << std::endl;

	int length = fullMessage.length();

	int index = fullMessage.find("ma");

	std::string replacedMessage = fullMessage;
	if (index != std::string::npos) {
		replacedMessage.replace(index, 2, "%---%");
	}

	std::cout << "Length:\t\t" << length << std::endl;
	std::cout << "Index of 'ma':\t" << index << std::endl;
	std::cout << "Replaced:\t" << replacedMessage << std::endl;



	cout << "\n----- Activity 2 -----" << std::endl;

	const float PI = 3.14159f;
	
    float radius, height;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter height: ";
	cin >> height;

	bool radiusGreater = radius > height;

	bool radiusEqual = radius == height;

	height *= 3;
	radius += 5;

	bool radiusNotEqualAndGreater = (radius != height) && (radius > height);

	float volume = PI * radius * radius * height;

	cout << "Is the radius greater than height?:\t" << boolalpha << radiusGreater << endl;
	cout << "Is the radius equal to height?\t" << boolalpha << radiusEqual << endl;
	cout << "Tripled Height=\t\t" << height << endl;
	cout << "Increased radius by 5=\t\t" << radius << endl;
	cout << "is the radius not equal to and greater than height?:\t" << boolalpha << radiusNotEqualAndGreater << endl;
	cout << "The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is =\t" << volume << endl;

	return 0;
}

