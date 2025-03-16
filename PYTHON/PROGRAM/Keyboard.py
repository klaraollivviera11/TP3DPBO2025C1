from Peripheral import Peripheral

class Keyboard(Peripheral):
    #konstruktor
    def __init__(self, tipePeripheral = "", interface = "", merk = "", nama = "", jenisSwitch = "", RGB = 0):
        super().__init__(merk, nama, tipePeripheral, interface)
        self.__jenisSwitch = jenisSwitch
        self.__RGB = RGB

    #getter dan setter
    def getJenisSwitch(self):
        return self.__jenisSwitch
    
    def setJenisSwitch(self, jenisSwitch):
        self.__jenisSwitch = jenisSwitch

    def getRGB(self):
        return self.__RGB
    
    def setRGB(self, RGB):
        self.__RGB = RGB