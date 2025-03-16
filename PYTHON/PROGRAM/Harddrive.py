from Komponen import Komponen
from StorageDevice import StorageDevice

class Harddrive(Komponen, StorageDevice):
    #konstruktor
    def __init__(self, merk="", nama="", kapasitasGB=0, bacaTulisMBps=0, tipeDrive=""):
        Komponen.__init__(self, merk, nama)
        StorageDevice.__init__(self, kapasitasGB, bacaTulisMBps)
        self.__tipeDrive = tipeDrive

    #getter dan setter
    def getTipeDrive(self):
        return self.__tipeDrive
    
    def setTipeDrive(self, tipeDrive):
        self.__tipeDrive = tipeDrive