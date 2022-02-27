from functools import total_ordering
from platform import processor
from Processor import Processor
from Ram import Ram
from Disk import Disk

class Pc:

    __Processor_Object = Processor()
    __Disk_Object = Disk()
    __Ram_Object = Ram()
    __TotalPc = 0

    def __init__(self, ProcessorX, DiskX, RamX, Total = 0):
        self.__Processor_Object = ProcessorX
        self.__Disk_Object = DiskX
        self.__Ram_Object = RamX
        self.__TotalPc = Total

    def setProcessorObject(self, ProcessorX):
        self.__Processor_Object = ProcessorX

    def getProcessorObject(self):
        return self.__Processor_Object
    
    def setDiskObject(self, DiskX):
        self.__Disk_Object = DiskX

    def getDiskObject(self):
        return self.__Disk_Object

    def setRamObject(self, RamX):
        self.__Ram_Object = RamX

    def getRamObject(self):
        return self.__Ram_Object

    def setTotalPrice(self, Total):
        self.__TotalPc = Total

    def getTotalPrice(self):
        return self.__TotalPc
    
    def print(self):
        print("Spesifikasi : ")
        self.__Processor_Object.print()
        self.__Disk_Object.print()
        self.__Ram_Object.print()
        print("Total (Rp) :" + str(self.getTotalPrice()))

    
