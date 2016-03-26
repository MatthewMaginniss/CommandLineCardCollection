//
// Created by Matt on 3/10/2016.
//

#include <iostream>
#include <iomanip>
#include "CardDisplay.h"

namespace view {

    CardDisplay::CardDisplay() {

    }


    void CardDisplay::PrintCardByNameAscending(const CardNode *card) {
        if (card != 0) {
            this->DisplayCardDataConsoleFormat(card);
            this->PrintCardByNameAscending(card->nextName);
        }
    }

    void CardDisplay::PrintCardByYearAscending(const CardNode *card) {
        if (card != 0) {
            this->DisplayCardDataConsoleFormat(card);
            this->PrintCardByYearAscending(card->nextYear);
        }
    }

    void CardDisplay::PrintCardByConditionAscending(const CardNode *card) {
        if (card != 0) {
            this->DisplayCardDataConsoleFormat(card);
            this->PrintCardByConditionAscending(card->nextCondition);
        }
    }

    void CardDisplay::PrintCardByNameDescending(const CardNode *card) {
        if (card != 0) {
            this->PrintCardByNameDescending(card->nextName);
            this->DisplayCardDataConsoleFormat(card);
        }

    }

    void CardDisplay::PrintCardByYearDescending(const CardNode *card) {
        if (card != 0) {
            this->PrintCardByYearDescending(card->nextYear);
            this->DisplayCardDataConsoleFormat(card);
        }

    }

    void CardDisplay::PrintCardByConditionDescending(const CardNode *card) {
        if (card != 0) {
            this->PrintCardByConditionDescending(card->nextCondition);
            this->DisplayCardDataConsoleFormat(card);
        }
    }

    void CardDisplay::DisplayMenu() {
        cout << " " << endl;
        cout << "Please enter the desired action:" << endl;
        cout << "\t1. Load File" << endl;
        cout << "\t2. Save File" << endl;
        cout << "\t3. Insert Card" << endl;
        cout << "\t4. Delete Card" << endl;
        cout << "\t5. Print Alphabetic" << endl;
        cout << "\t6. Reverse Alphabetic" << endl;
        cout << "\t7. Year Ascending" << endl;
        cout << "\t8. Year Descending" << endl;
        cout << "\t9. Condition Ascending" << endl;
        cout << "\t10. Condition Descending" << endl;
        cout << "\t11. Quit" << endl;
        cout << " " << endl;
        cout << "Enter Action >";
    }

    void CardDisplay::DisplayCardDataFileFormat(const CardNode *card) {
        cout << card->GetName() << "," << card->GetYear() << "," << card->GetCondition() << "," << card->GetValue() << endl;
    }

    void CardDisplay::DisplayMessage(const string &message) {
        cout << message << endl;
    }

    void CardDisplay::DisplayWelcome() {
        cout << "" << endl;
        cout << "Welcome to Matt Maginniss' Baseball Card Collector" << endl;
        cout << "--------------------------------------------------" << endl;
    }

    void CardDisplay::DisplayCardDataConsoleFormat(const CardNode *card) {
        cout << setw(20) << left << card->GetName() << setw(6) << left << card->GetYear() << setw(12) << left << card->GetCondition() << setw(12) << right << card->GetValue() << endl;

    }
}