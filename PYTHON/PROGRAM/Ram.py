from Komponen import Komponen

class Ram(Komponen):
    #konstruktor
    def __init__(self, merk = "", nama = "", kapasitasGB = 0, ddr = ""):
        super().__init__(merk, nama)
        self.__kapasitasGB = kapasitasGB
        self.__ddr = ddr

    #getter dan setter
    def getKapasitasGB(self):
        return self.__kapasitasGB
    
    def setKapasitasGB(self, kapasitasGB):
        self.__kapasitasGB = kapasitasGB

    def getDdr(self):
        return self.__ddr
    
    def setDdr(self, ddr):
        self.__ddr = ddr