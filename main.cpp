/**
* @file main.cpp
* @authors Declan Holmes
* @brief tbd
* @date 2026-04-20 initial creation
* @date n/a
*/

#include "issue.h"
#include "issue_manager.h"

#include <string>
#include <iostream>

/*
 * output starting banner 
 */
void banner() {
    std::cout << "==============================" << std::endl;
    std::cout << "       MAIN SYSTEM MENU       " << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << "   Welcome to ForgeTracker    " << std::endl;
}

/*
 * print menu thing (im guessing take in numbers that corelate to certain actions)
 */
void printMenu() {
    std::cout << "\n\nMenu Options:       " << std::endl;
    std::cout << "   1 -> Add a new issue " << std::endl;
    std::cout << "   2 -> List all issues " << std::endl;
    std::cout << "   5 -> Quit the program" << std::endl;
}

/*
 * erm 
 */
void reader() {
    Issue readIssueInput();
}

int main() {
    IssueManager manager;
    bool running = true;

    banner() // print the banner once

    // being program / start loop
    while (running) {
        printMenu();

        // read choice
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            // add
        }
        else if (choice == 2) {
            // list issues
        }
        // note: 3 and 4 will be edit / delete i think
        else if (choice == 5) {
            running = false;
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}