#include "MerkleMain.h"
#include "CSVReader.h"

#include <iostream>

void MerkleMain::init() {
    loadOrderBook();
    while(true) {
        printMenu();
        processUserOption(getUserOption());
    }
}

void MerkleMain::loadOrderBook() {
    orders = CSVReader::readCSV("testData.csv");
}

void MerkleMain::printMenu() {
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

void MerkleMain::printHelp() {
    std::cout << "1: Print help" << std::endl;
}

void MerkleMain::printMarketStats() {
    std::cout << "2: Print exchange stats" << std::endl;
}

void MerkleMain::enterAsk() {
    std::cout << "3: Place an ask" << std::endl;
}

void MerkleMain::enterBid() {
    std::cout << "4: Place a bid" << std::endl;
}

void MerkleMain::printWallet() {
    std::cout << "5: Print wallet" << std::endl;
}

void MerkleMain::gotoNextTimeframe() {
    std::cout << "6: Continue" << std::endl;
}

int MerkleMain::getUserOption() {
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    return userOption;
}

void MerkleMain::processUserOption(int userOption) {
    switch (userOption) {
        case 1:
            printHelp();
            break;
        case 2:
            printMarketStats();
            break;
        case 3:
            enterAsk();
            break;
        case 4:
            enterBid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
            gotoNextTimeframe();
            break;
        default:
            std::cout << "Invalid input. Type 1-6" << std::endl;
    }
}