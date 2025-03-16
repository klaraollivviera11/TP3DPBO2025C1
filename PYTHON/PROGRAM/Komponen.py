class Komponen:
    #konstruktor
    def __init__(self, merk = "", nama = ""):
        self.__merk = merk
        self.__nama = nama

    #getter dan setter
    def getMerk(self):
        return self.__merk
    
    def setMerk(self, merk):
        self.__merk = merk

    def getNama(self):
        return self.__nama
    
    def setNama(self, nama):
        self.__nama = nama