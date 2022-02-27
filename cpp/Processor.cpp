#include <iostream>
#include <string>

using namespace std;

class Processor
{
private:
    string NameProcessor;
    int PriceProcessor;

public:
    Processor(string Name, int Price)
    {
        this->NameProcessor = Name;
        this->PriceProcessor = Price;
    }

    Processor() {}

    void setNameProcessor(string Name)
    {
        this->NameProcessor = Name;
    }

    string getNameProcessor()
    {
        return this->NameProcessor;
    }

    void setPriceProcessor(int Price)
    {
        this->PriceProcessor = Price;
    }

    int getPriceProcessor()
    {
        return this->PriceProcessor;
    }

    void print()
    {
        cout << "Processor :" << endl;
        cout << endl;
        cout << "Name -> " << this->getNameProcessor() << endl;
        cout << "Price (Rp) ->" << this->getPriceProcessor() << endl;
    }

    ~Processor() {}
};