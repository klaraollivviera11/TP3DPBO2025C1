from Cpu import Cpu
from Harddrive import Harddrive
from Ram import Ram
from Ssd import Ssd
from Keyboard import Keyboard
from Mouse import Mouse
from Monitor import Monitor

class Komputer:
    def __init__(self, nama = "", cpu= None, ram_list = None,
                 harddrive = None, ssd = None, keyboard = None,
                 mouse = None, monitor = None):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list if ram_list else []
        self.harddrive = harddrive
        self.ssd = ssd
        self.keyboard = keyboard
        self.mouse = mouse
        self.monitor = monitor

    # Setter
    def setNama(self, nama):
        self.nama = nama

    def setCpu(self, cpu):
        self.cpu = cpu

    def setRam_list(self, ram_list):
        self.ram_list = ram_list

    def setHarddrive(self, harddrive):
        self.harddrive = harddrive

    def setSsd(self, ssd):
        self.ssd = ssd

    def setKeyboard(self, keyboard):
        self.keyboard = keyboard

    def setMouse(self, mouse):
        self.mouse = mouse

    def setMonitor(self, monitor):
        self.monitor = monitor

    # add ram
    def addRam(self, ram):
        self.ram_list.append(ram)

    # Getter
    def getNama(self):
        return self.nama

    def getCpu(self):
        return self.cpu

    def getRam_list(self):
        return self.ram_list

    def getHarddrive(self):
        return self.harddrive

    def getSsd(self):
        return self.ssd

    def getKeyboard(self):
        return self.keyboard

    def getMouse(self):
        return self.mouse

    def getMonitor(self):
        return self.monitor
