package DPBO.TP.TP3.java;

public class Ram {
    private int CapacityRam;
    private int PriceRam;

    public Ram() {
    }

    public Ram(int Capacity, int Price) {
        this.CapacityRam = Capacity;
        this.PriceRam = Price;
    }

    public void setCapacityRam(int Capacity) {
        this.CapacityRam = Capacity;
    }

    public int getCapacityRam() {
        return this.CapacityRam;
    }

    public void setPriceRam(int Price) {
        this.PriceRam = Price;
    }

    public int getPriceRam() {
        return this.PriceRam;
    }

    public void print() {
        System.out.println("Ram :");
        System.out.println();
        System.out.println("Capacity (Gb) :" + this.getCapacityRam());
        System.out.println("Price (Rp) :" + this.getPriceRam());
    }

}
