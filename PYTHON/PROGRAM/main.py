# Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
# mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Komputer import Komputer
from Ssd import Ssd
from Keyboard import Keyboard
from Mouse import Mouse
from Monitor import Monitor

def main():
    #inisialisasi objek
    komputer = Komputer("PC Abdul", Cpu("Intel", "Core i7", 8, 3.4), 
                        [Ram("Corsair", "Vengeance", 16, "DDR5"), Ram("Corsair", "Vengeance", 8, "DDR4")], 
                        Harddrive("Samsung", "Evo", 1024, 50.0, "Disk"), 
                        Ssd("RoyalCanin", "Eva", 512, 100.0, "TLC"), 
                        Keyboard("Input Device", "USB", "Logitech", "G Pro", "Red Switch", 1), 
                        Mouse("Input Device", "Bluetooth", "Logitech", "Basilisk X", 3200, 5), 
                        Monitor("Output Device", "HDMI", "LG", "UltraGear", "4K", 240))
    # add ram
    komputer.addRam(Ram("Kingston", "FURY", 16, "DDR5"))
    
    #menampilkan objek
    print("Informasi Komputer:")
    print(f"Nama      : {komputer.getNama()}")
    print(f"Cpu       : {komputer.getCpu().getMerk()} {komputer.getCpu().getNama()} ({komputer.getCpu().getJumlahCore()} Core) ~{komputer.getCpu().getKecepatanGHz()}GHz")
    
    for ram in komputer.getRam_list():
        print(f"Ram       : {ram.getMerk()} {ram.getNama()} ({ram.getKapasitasGB()} GB) {ram.getDdr()}")
    
    print(f"Harddrive : {komputer.getHarddrive().getTipeDrive()} {komputer.getHarddrive().getMerk()} {komputer.getHarddrive().getNama()} ({komputer.getHarddrive().getKapasitasGB()} GB) ({komputer.getHarddrive().getBacaTulisMBps()} MBps)")
    print(f"SSD       : {komputer.getSsd().getJenisMemori()} {komputer.getSsd().getMerk()} {komputer.getSsd().getNama()} ({komputer.getSsd().getKapasitasGB()} GB) ({komputer.getSsd().getBacaTulisMBps()} MBps)")
    print(f"Keyboard  : {komputer.getKeyboard().getJenisSwitch()} {komputer.getKeyboard().getRGB()} {komputer.getKeyboard().getMerk()} {komputer.getKeyboard().getNama()} ({komputer.getKeyboard().getTipePeripheral()}, {komputer.getKeyboard().getInterface()})")
    print(f"Mouse     : {komputer.getMouse().getDpi()}dpi {komputer.getMouse().getJumlahTombol()} {komputer.getMouse().getMerk()} {komputer.getMouse().getNama()} ({komputer.getMouse().getTipePeripheral()}, {komputer.getMouse().getInterface()})")
    print(f"Monitor   : {komputer.getMonitor().getResolusi()} {komputer.getMonitor().getRefreshRateHz()}Hz {komputer.getMonitor().getMerk()} {komputer.getMonitor().getNama()} ({komputer.getMonitor().getTipePeripheral()}, {komputer.getMonitor().getInterface()})")

if __name__ == "__main__":
    main()
