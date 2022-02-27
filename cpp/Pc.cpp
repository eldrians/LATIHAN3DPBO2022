#include <iostream>
#include <string>
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

class Pc
{
private:
    Processor Processor_Object;
    Disk Disk_Object;
    Ram Ram_Object;
    int TotalPc;

public:
    Pc(Processor ProcessorX, Disk DiskX, Ram RamX, int Total)
    {
        this->Processor_Object = ProcessorX;
        this->Disk_Object = DiskX;
        this->Ram_Object = RamX;
        this->TotalPc = Total;
    }

    Pc() {}

    void setProcessorObject(Processor ProcessorX)
    {
        this->Processor_Object = ProcessorX;
    }

    Processor getProcessorObject()
    {
        return this->Processor_Object;
    }

    void setDiskObject(Disk DiskX)
    {
        this->Disk_Object = DiskX;
    }

    Disk getDiskObject()
    {
        return this->Disk_Object;
    }

    void setRamObject(Ram RamX)
    {
        this->Ram_Object = RamX;
    }

    Ram getRamObject()
    {
        return this->Ram_Object;
    }

    void setTotalPc(int Total)
    {
        this->TotalPc = Total;
    }

    int getTotalPc()
    {
        return this->TotalPc;
    }

    void print()
    {
        cout << ">>> Spesifikasi <<<" << endl;
        cout << endl;
        this->Processor_Object.print();
        cout << endl;
        this->Disk_Object.print();
        cout << endl;
        this->Ram_Object.print();
        cout << "Total (Rp) ->" << this->getTotalPc() << endl;
    }

    ~Pc() {}
};