#include <iostream>
#include <string>

using namespace std;

class Disk
{
private:
    string TypeDisk;
    int CapacityDisk;
    int PriceDisk;

public:
    Disk(string Type, int Capacity, int Price)
    {
        this->TypeDisk = Type;
        this->CapacityDisk = Capacity;
        this->PriceDisk = Price;
    }

    Disk() {}

    void setTypeDisk(string Type)
    {
        this->TypeDisk = Type;
    }

    string getTypeDisk()
    {
        return this->TypeDisk;
    }

    void setCapacityDisk(int Capacity)
    {
        this->CapacityDisk = Capacity;
    }

    int getCapacityDisk()
    {
        return this->CapacityDisk;
    }

    void setPriceDisk(int Price)
    {
        this->PriceDisk = Price;
    }

    int getPriceDisk()
    {
        return this->PriceDisk;
    }

    void print()
    {
        cout << "Disk :" << endl;
        cout << endl;
        cout << "Type -> " << this->getTypeDisk() << endl;
        cout << "Capacity (Gb) -> " << this->getCapacityDisk() << endl;
        cout << "Price (Rp) ->" << this->getPriceDisk() << endl;
    }

    ~Disk() {}
};