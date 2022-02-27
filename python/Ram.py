class Ram:

    __CapacityRam = 0
    __PriceRam = 0

    def __init__(self, Capacity = 0, Price=0):

        self.__CapacityRam = Capacity
        self.__PriceRam = Price


    def setCapacityRam(self, Capacity):
        self.__CapacityRam = Capacity

    def getCapacityRam(self):
        return self.__CapacityRam
        
    def setPriceRam(self, Price):
        self.__PriceRam = Price

    def getPriceRam(self):
        return self.__PriceRam

    def print(self):
        print("Ram:")
        print("Capacity (Gb) : " + str(self.getCapacityRam()))
        print("Price (Rp) :" + str(self.getPriceRam()))