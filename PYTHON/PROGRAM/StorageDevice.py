class StorageDevice:
    #konstruktor
    def __init__(self, kapasitasGB = 0, bacaTulisMBps = 0):
        self.__kapasitasGB = kapasitasGB
        self.__bacaTulisMBps = bacaTulisMBps

    #getter dan setter
    def getKapasitasGB(self):
        return self.__kapasitasGB
    
    def setKapasitasGB(self, kapasitasGB):
        self.__kapasitasGB = kapasitasGB

    def getBacaTulisMBps(self):
        return self.__bacaTulisMBps
    
    def setBacaTulisMBps(self, bacaTulisMBps):
        self.__bacaTulisMBps = bacaTulisMBps