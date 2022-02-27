class Disk:
    __NameDisk = ""
    __CapacityDisk = 0
    __PriceDisk = 0

    def __init__(self, Name="", Capacity = 0, Price=0):
        self.__NameDisk = Name
        self.__CapacityDisk = Capacity
        self.__PriceDisk = Price

    def setNameDisk(self, Name):
        self.__NameDisk = Name

    def getNameDisk(self):
        return self.__NameDisk

    def setCapacityDisk(self, Capacity):
        self.__CapacityDisk = Capacity

    def getCapacityDisk(self):
        return self.__CapacityDisk
        
    def setPriceDisk(self, Price):
        self.__PriceDisk = Price

    def getPriceDisk(self):
        return self.__PriceDisk

    def print(self):
        print("Disk:")
        print("Name : " + str(self.getNameDisk()))
        print("Capacity (Gb) : " + str(self.getCapacityDisk()))
        print("Price (Rp) :" + str(self.getPriceDisk()))