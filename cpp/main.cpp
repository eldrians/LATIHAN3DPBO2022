#include <bits/stdc++.h>
#include "Pc.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Processor ProcessorAxel("AMD Ryzen 9 3900X", 8200000);
    Disk DiskAxel("SSD", 1000, 1195000);
    Ram RamAxel(32, 2150000);

    int TotalPrice = ProcessorAxel.getPriceProcessor() + DiskAxel.getPriceDisk() + RamAxel.getPriceRam();

    Pc PcAxel(ProcessorAxel, DiskAxel, RamAxel, TotalPrice);

    PcAxel.print();

    return 0;
}