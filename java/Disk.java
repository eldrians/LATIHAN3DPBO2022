package DPBO.TP.TP3.java;

public class Disk {
    private String NameDisk;
    private int CapacityDisk;
    private int PriceDisk;

    public Disk() {
    }

    public Disk(String Name, int Capacity, int Price) {
        this.NameDisk = Name;
        this.CapacityDisk = Capacity;
        this.PriceDisk = Price;
    }

    public void setNameDisk(String Name) {
        this.NameDisk = Name;
    }

    public String getNameDisk() {
        return this.NameDisk;
    }

    public void setCapacityDisk(int Capacity){
        this.CapacityDisk = Capacity;
    }

    public int getCapacityDisk(){
        return this.CapacityDisk;
    }

    public void setPriceDisk(int Price) {
        this.PriceDisk = Price;
    }

    public int getPriceDisk() {
        return this.PriceDisk;
    }

    public void print() {
        System.out.println("Disk :");
        System.out.println();
        System.out.println("Name :" + this.getNameDisk());
        System.out.println("Capacity (Gb) :" + this.getCapacityDisk());
        System.out.println("Price (Rp) :" + this.getPriceDisk());
    }

}