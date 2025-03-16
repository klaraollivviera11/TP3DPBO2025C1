from Komponen import Komponen
from StorageDevice import StorageDevice

class Ssd(Komponen, StorageDevice):
    #konstruktor
    def __init__(self, merk="", nama="", kapasitasGB=0, bacaTulisMBps=0, jenisMemori=""):
        Komponen.__init__(self, merk, nama)
        StorageDevice.__init__(self, kapasitasGB, bacaTulisMBps)
        self.__jenisMemori = jenisMemori

    #getter dan setter
    def getJenisMemori(self):
        return self.__jenisMemori
    
    def setJenisMemori(self, jenisMemori):
        self.__jenisMemori = jenisMemori