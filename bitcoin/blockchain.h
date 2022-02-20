#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <iostream>
#include <vector>

class Blockchain{
public:
    Blockchain():
    d_chain(),d_currentTransaction(){}

    int addNewBlock(); //Adding a new block to the existing chain

    int addNewTransaction(); //Adding a new transaction 

private:
    
    std::vector<std::string> d_chain;
    std::vector<std::string> d_currentTransaction;
};
#endif 