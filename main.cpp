#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Dungeon!\n";

    std::string name;
    std::cout << "Enter your player name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "! Get ready to explore.\n";
    return 0;
}
