package DPBO.TP.TP3.java;

public class Pc {
    private Processor Processor_Object;
    private Disk Disk_Object;
    private Ram Ram_Object;
    private int TotalPc;

    public Pc() {
    }

    public Pc(Processor ProcessorX, Disk DiskX, Ram RamX, int Total) {
        this.Processor_Object = ProcessorX;
        this.Disk_Object = DiskX;
        this.Ram_Object = RamX;
        this.TotalPc = Total;
    }

    public void setProcessorObject(Processor ProcessorX) {
        this.Processor_Object = ProcessorX;
    }

    public Processor getProcessorObject() {
        return this.Processor_Object;
    }

    public void setDiskObject(Disk DiskX) {
        this.Disk_Object = DiskX;
    }

    public Disk getDiskObject() {
        return this.Disk_Object;
    }

    public void setRamObject(Ram RamX) {
        this.Ram_Object = RamX;
    }

    public Ram getRamObject() {
        return this.Ram_Object;
    }

    public void setTotalPc(int Total) {
        this.TotalPc = Total;
    }

    public int getTotalPc() {
        return this.TotalPc;
    }

    public void print() {
        System.out.println("Sepesifikasi :");
        System.out.println();
        this.Processor_Object.print();
        System.out.println();
        this.Disk_Object.print();
        System.out.println();
        this.Ram_Object.print();
        System.out.println("Total (Rp) :" + this.getTotalPc());
    }
}
