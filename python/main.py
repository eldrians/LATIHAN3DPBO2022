from Processor import Processor
from Ram import Ram
from Disk import Disk
from Pc import Pc

ProcessorAxel = Processor("AMD Ryzen 9 3900X", 8200000)
DiskAxel = Disk("SSD", 1000, 1195000)
RamAxel = Ram(32, 2150000)

TotalPrice = ProcessorAxel.getPriceProcessor() + DiskAxel.getPriceDisk() + \
    RamAxel.getPriceRam()

PcAxel = Pc(ProcessorAxel, DiskAxel, RamAxel, TotalPrice)

PcAxel.print()
