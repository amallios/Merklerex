#ifndef MERKLEREX_ORDERBOOKENTRY_H
#define MERKLEREX_ORDERBOOKENTRY_H

#pragma once

#include <string>

enum class OrderBookType {bid, ask, unknown};

class OrderBookEntry {
public:
    OrderBookEntry(double _price,
                   double _amount,
                   std::string _timestamp,
                   std::string _product,
                   OrderBookType _orderType);

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};


#endif //MERKLEREX_ORDERBOOKENTRY_H
