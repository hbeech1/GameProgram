//Henry Beech
//20 August 2019
#include <iostream>
#include "userInterface.h"
void mainMenu() {
	std::cout << "\n\n"
			  << " ____      ______     __     __      _____       \n"
		      << "| ___ \\   |  ____|   /   \\_/   \\    /  _  \\  \n"
		      << "| |  \\ |  | |___    |  /\\   /\\  |  |  / \\  |   \n"
		      << "| |   ||  |  ___|   | |  | |  | |  | |   | |     \n"
		      << "| |__/ |  | |____   | |  | |  | |  |  \\_/  |    \n"
		      << "|____ /   |______|  |_|  |_|  |_|   \\_____/      \n"
		      << "===============================================  \n"
		      << std::endl;
	char input = '6';
	while (input != '5') {
		std::cout << "\n1) Start new game\n"
			<< "2) View Encyclopedia\n"
			<< "3) View Game Objective\n"
			<< "4) View Credits\n"
			<< "5) Exit Game\n"
			<< std::endl;
		std::cin >> input;
		switch (input) {
		case '1':initiateNewGame(); break;
		case '2':initiateEncyclopedia(); break;
		case '3':initiateObjective(); break;
		case '4':viewCredits(); break;
		case '5': std::cout << "\nExiting Game.\n"; break;
		default: std::cout << "Invalid input. Please select an option.\n"; break;
		}
	}
}

void initiateNewGame() {

}

void initiateEncyclopedia() {
	char input = '6';
	while (input != '5') {
		std::cout << "Encyclopedia\n================="
			<< "\n1) Player\n"
			<< "2) Enemies\n"
			<< "3) Items\n"
			<< "4) Other\n"
			<< "5) Exit Encyclopedia\n"
			<< std::endl;
		std::cin >> input;
		switch (input) {
		case '1':viewPlayer(); break;
		case '2':viewEnemies(); break;
		case '3':viewItems(); break;
		case '4':viewOther(); break;
		case '5': std::cout << "\nExiting Encyclopedia.\n"; break;
		default: std::cout << "Invalid input. Please select an option.\n"; break;
		}
	}
}

void viewPlayer() {
	std::cout << "\nPlayer Stats\n"
		<< "======================\n"
		<< "Starting Hitpoints: 10\n"
		<< "Starting Attack: 1\n"
		<< "Starting Defense: 1\n"
		<< "Starting Speed: 1\n";
	char input;
	std::cout << "Press any key to go back.";
	std::cin >> input;
}

void viewEnemies() {
	std::cout << "Enemy List\n"
			  << "===================\n"
			  << "Filler for now.";
	char input;
	std::cout << "Press any key to go back.";
	std::cin >> input;
}

void viewItems() {
	std::cout << "Item List\n"
		<< "===================\n"
		<< "Filler for now.";
	char input;
	std::cout << "Press any key to go back.";
	std::cin >> input;
}

void viewOther() {
	std::cout << "Extra\n"
		<< "===================\n"
		<< "Filler for now.";
	char input;
	std::cout << "Press any key to go back.";
	std::cin >> input;
}
void initiateObjective() {
	std::cout << "Filler for now.";
	char input;
	std::cout << "Press any key to go back.";
	std::cin >> input;
}

void viewCredits() {
	std::cout << "\nCredits\n";
	std::cout << "=========================\n";
	std::cout << "Version: a0.1\n";
	std::cout << "Author: Henry Beech\n";
	std::cout << "\nHey, thanks for checking out this game."
			  << "\n I hope you at least get some fun out of it."
		      << "\n Please leave comments for the game so I know where I can improve the content, etc. :)\n";
	std::cout << "\nEnter any key to continue.\n";
	char input;
	std::cin >> input;
}