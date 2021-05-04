// MoneyManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "consoleMessages.h"
using namespace std;
#include "Account.h"
int main()
{
    string input = "";
    string user = "";
    string pass = "";
    int accid = 0;
    std::cout << welcomeMessage << endl << endl;
    while (input != "quit")
    {
        std::cout << Instruction << endl << "   ";
        std::cin >> input;

        if (input == "help")
        {
            std::cout << "List of commands: this option is coming soon! " << endl;
        }else
            if (input == "createAccount")
            {
                //Create account Start
                std::cout << "What do you want the Username as?" << endl;
                std::cin >> user;
                std::cout << "Okay, your username is:" << user << ". Confirm? (Type 'yes' or 'cancel'.)" << endl;
                std::cin >> input;
                    if (input == "yes")
                    {
                        accid++;
                        std::cout << "Okay. What do you want your password to be?" << endl;
                        cin >> pass;
                        BankAccount user;
                        user.Balance = 0;
                        user.id = accid;
                        user.password = pass;
                        std::cout << "Account created!" << endl;
                    }else 
                    {
                        std::cout << "Okay. Create account canceled." << endl;
                    }
                //Create Account End
            }
            else if (input == "balance")
            {
                std::cout << "Enter username: ";
                std::cin >> input;
                input.
            }
            else if (input == "ab")
            {
                std::cout << "Username: ";
                cin >> input;

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
