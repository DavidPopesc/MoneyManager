// MoneyManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Account.h"
int main()
{
    std::cout << "Hi! What would you like to do? Type A command, or type 'help' for a list of commands.\n";
    char start[99];

    std::cin >> start;

    if (start[99] || "help")
    {
        std::cout << "List of commands: this option is coming soon! " << "\l";
    }
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
