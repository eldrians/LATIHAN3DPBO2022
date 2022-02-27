class Processor:
    __NameProcessor = ""
    __PriceProcessor = 0

    def __init__(self, Name="", Price=0):
        self.__NameProcessor = Name
        self.__PriceProcessor = Price

    def setNameProcessor(self, Name):
        self.__NameProcessor = Name

    def getNameProcessor(self):
        return self.__NameProcessor

    def setPriceProcessor(self, Price):
        self.__PriceProcessor = Price

    def getPriceProcessor(self):
        return self.__PriceProcessor

    def print(self):
        print("Processor:")
        print("Name : " + str(self.getNameProcessor()))
        print("Price (Rp) :" + str(self.getPriceProcessor()))