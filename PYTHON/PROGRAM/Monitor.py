from Peripheral import Peripheral

class Monitor(Peripheral):
    #konstruktor
    def __init__(self, tipePeripheral = "", interface = "", merk = "", nama = "", resolusi = "", refreshRateHz = 0):
        super().__init__(merk, nama, tipePeripheral, interface)
        self.__resolusi = resolusi
        self.__refreshRateHz = refreshRateHz

    #getter dan setter
    def getResolusi(self):
        return self.__resolusi
    
    def setResolusi(self, resolusi):
        self.__resolusi = resolusi

    def getRefreshRateHz(self):
        return self.__refreshRateHz
    
    def setRefreshRateHz(self, refreshRateHz):
        self.__refreshRateHz = refreshRateHz