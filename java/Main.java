package DPBO.TP.TP3.java;

public class Main {
    public static void main(String[] args) {
        Processor ProcessorAxel = new Processor("AMD Ryzen 9 3900X", 8200000);
        Disk DiskAxel = new Disk("SSD", 1000, 1195000);
        Ram RamAxel = new Ram(32, 2150000);

        int TotalPrice = ProcessorAxel.getPriceProcessor() + DiskAxel.getPriceDisk() + RamAxel.getPriceRam();

        Pc PcAxel = new Pc(ProcessorAxel, DiskAxel, RamAxel, TotalPrice);

        PcAxel.print();
    }
}
