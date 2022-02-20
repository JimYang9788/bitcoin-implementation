#ifdef TRANSACTION_H
#define TRANSACTION_H
#include <string>
class Transaction {
    public:
    Transaction(std::string,std::string,long double);

    std::string getSender();
    std::string getRecipent();
    long double getAmount ();

    private:
    std::string sender;
    std::string recipent;
    long double amount;

};
#endif 