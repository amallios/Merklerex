#ifndef MERKLEREX_MERKLEMAIN_H
#define MERKLEREX_MERKLEMAIN_H

#pragma once

#include "OrderBookEntry.h"

#include<vector>

class MerkleMain {
public:
    MerkleMain() = default;
    void init();

private:
    void loadOrderBook();
    void printMenu();
    void printHelp();
    void printMarketStats();
    void enterAsk();
    void enterBid();
    void printWallet();
    void gotoNextTimeframe();
    int getUserOption();
    void processUserOption(int userOption);
    std::vector<OrderBookEntry> orders;
};


#endif //MERKLEREX_MERKLEMAIN_H
