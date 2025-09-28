#include <iostream>
#include <string>

int main() {
    std::string line, name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::getline(std::cin, line);
    int age = 0;
    try { age = std::stoi(line); } catch(...) { std::cerr << "Bad age, using 0\n"; }

    std::cout << "Hello " << name << ", age " << age << "\n";
}
