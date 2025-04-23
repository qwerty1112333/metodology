#include <iostream>

#include "games/GeometryProgression.h"
#include "games/LcmGame.h"
#include "Engine.cpp"

void displayMenu() {
    std::cout << "Select a game to play:\n";
    std::cout << "1. Geometry Progression Game\n";
    std::cout << "2. LCM Game\n";
    std::cout << "0. Exit\n";
}

int main() {
    int choice;
    displayMenu();
    std::cin >> choice;
    Engine(int choice);
    return 0;
}