#ifndef MERKLEREX_CSVREADER_H
#define MERKLEREX_CSVREADER_H

#pragma once

#include "OrderBookEntry.h"

#include <vector>
#include <string>

class CSVReader {
public:
    CSVReader();
    static std::vector<OrderBookEntry> readCSV(std::string csvFile);

private:
    static std::vector<std::string> tokenise(std::string csvLine, char separator);
    static OrderBookEntry stringsToOBE(std::vector<std::string> strings);
};

#endif //MERKLEREX_CSVREADER_H
