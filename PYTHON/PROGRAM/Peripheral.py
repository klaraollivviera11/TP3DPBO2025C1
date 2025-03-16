from Komponen import Komponen

class Peripheral(Komponen):
    #konstruktor
    def __init__(self, merk = "", nama = "", tipePeripheral = "", interface = ""):
        super().__init__(merk, nama)
        self.__tipePeripheral = tipePeripheral
        self.__interface = interface

    #getter dan setter
    def getTipePeripheral(self):
        return self.__tipePeripheral
    
    def setTipePeripheral(self, tipePeripheral):
        self.__tipePeripheral = tipePeripheral

    def getInterface(self):
        return self.__interface
    
    def setInterface(self, interface):
        self.__interface = interface