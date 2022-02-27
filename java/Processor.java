package DPBO.TP.TP3.java;

public class Processor {
    private String NameProcessor;
    private int PriceProcessor;

    public Processor() {
    }

    public Processor(String Name, int Price) {
        this.NameProcessor = Name;
        this.PriceProcessor = Price;
    }

    public void setNameProcessor(String Name) {
        this.NameProcessor = Name;
    }

    public String getNameProcessor() {
        return this.NameProcessor;
    }

    public void setPriceProcessor(int Price) {
        this.PriceProcessor = Price;
    }

    public int getPriceProcessor() {
        return this.PriceProcessor;
    }

    public void print() {
        System.out.println("Processor :");
        System.out.println();
        System.out.println("Name :" + this.getNameProcessor());
        System.out.println("Price (Rp) :" + this.getPriceProcessor());
    }

}
