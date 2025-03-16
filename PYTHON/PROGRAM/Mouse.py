from Peripheral import Peripheral

class Mouse(Peripheral):
    #konstruktor
    def __init__(self, tipePeripheral = "", interface = "", merk = "", nama = "", dpi = 0, jumlahTombol = 0):
        super().__init__(merk, nama, tipePeripheral, interface)
        self.__dpi = dpi
        self.__jumlahTombol = jumlahTombol

    #getter dan setter
    def getDpi(self):
        return self.__dpi
    
    def setDpi(self, dpi):
        self.__dpi = dpi

    def getJumlahTombol(self):
        return self.__jumlahTombol
    
    def setJumlahTombol(self, jumlahTombol):
        self.__jumlahTombol = jumlahTombol