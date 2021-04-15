// MoneyManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "consoleMessages.h"
using namespace std;
//#include "Account.h"
int main()
{
    string input = "";
    while (input != "quit")
    {
        std::cout << welcomeMessage << endl << "   ";
        std::cin >> input;

        if (input == "help")
        {
            std::cout << "List of commands: this option is coming soon! " << endl;
        }else
            if (input == "createAccount")
            {
                //Create account Start
                cout << "What do you want the Username as?" << endl;
                cin
                //Create Account End
            }else
        if (input == "quit")
        {
            cout << plzDontGo << endl;
            std::cin >> input;
            if (input == "yes")
            {
                std::cout << leavingAcceptance;
                input = "quit";
            }
            else
            {
                input = "";
                std::cout << "Okay. Quit cancled." << endl;
            }
        }
        else
        {
            std::cout << "Yikes. You typed '" << input << "'. That command wasn't found. Try again, or maybe check your spelling." << endl;
        }

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
