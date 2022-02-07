#ifndef MERKLEREX_WALLET_H
#define MERKLEREX_WALLET_H

#include "OrderBookEntry.h"

#include <string>
#include <map>

class Wallet {
public:
    Wallet();
/** insert currency to the wallet */
    void insertCurrency(std::string type, double amount);
/** remove currency from the wallet */
    bool removeCurrency(std::string type, double amount);
/** check if the wallet contains this much currency or more */
    bool containsCurrency(std::string type, double amount);
/** generate a string representation of the wallet */
    std::string toString();
    bool canFulfillOrder(OrderBookEntry order);
    void processSale(OrderBookEntry& sale);

private:
    std::map<std::string,double>currencies;
};


#endif //MERKLEREX_WALLET_H
