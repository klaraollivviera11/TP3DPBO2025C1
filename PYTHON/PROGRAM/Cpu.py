from Komponen import Komponen

class Cpu(Komponen):
    #konstruktor
    def __init__(self, merk = "", nama = "", jumlahCore = 0, kecepatanGHz = 0):
        super().__init__(merk, nama)
        self.__jumlahCore = jumlahCore
        self.__kecepatanGHz = kecepatanGHz

    #getter dan setter
    def getJumlahCore(self):
        return self.__jumlahCore
    
    def setJumlahCore(self, jumlahCore):
        self.__jumlahCore = jumlahCore

    def getKecepatanGHz(self):
        return self.__kecepatanGHz
    
    def setKecepatanGHz(self, kecepatanGHz):
        self.__kecepatanGHz = kecepatanGHz