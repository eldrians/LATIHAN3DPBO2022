#include <iostream>
#include <string>

using namespace std;

class Ram
{
private:
    int CapacityRam;
    int PriceRam;

public:
    Ram(int Capacity, int Price)
    {
        this->CapacityRam = Capacity;
        this->PriceRam = Price;
    }

    Ram() {}

    void setCapacityRam(int Capacity)
    {
        this->CapacityRam = Capacity;
    }

    int getCapacityRam()
    {
        return this->CapacityRam;
    }

    void setPriceRam(int Price)
    {
        this->PriceRam = Price;
    }

    int getPriceRam()
    {
        return this->PriceRam;
    }

    void print()
    {
        cout << "Ram :" << endl;
        cout << endl;
        cout << "Capacity (Gb) -> " << this->getCapacityRam() << endl;
        cout << "Price (Rp) ->" << this->getPriceRam() << endl;
    }

    ~Ram() {}
};