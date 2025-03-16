/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 3 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */

#include <iostream>
#include <vector>
#include <string>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "Ssd.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Monitor.cpp"
#include "Peripheral.cpp"

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr);
    
    Komputer komputer("PC Abdul", Cpu(8, 3.4, "Intel", "Core i7"), {Ram(16, "DDR5", "Corsair", "Vengeance"), Ram(8, "DDR4", "Corsair", "Vengeance")}, 
                      Harddrive("Disk", "Samsung", "Evo", 1024, 50.0), Ssd("TLC", "RoyalCanin", "Eva", 512, 100.0), Keyboard("Red Switch", 1, "Input Device", 
                      "USB", "Logitech", "G Pro"), Mouse(3200, 5, "Input Device", "Bluetooth", "Logitech", "Basilisk X"), Monitor("4K", 240, "Output Device", 
                      "HDMI", "LG", "UltraGear"));
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
   
    cout << "Informasi Komputer:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Cpu       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
    for(Ram& ram : komputer.getRamList()){
        cout << "Ram       : ";
        cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
    }
    cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk() << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) " << "(" << komputer.getHarddrive().getBacaTulisMBps() << ".0 MBps)" << endl;
    cout << "SSD       : " << komputer.getSsd().getJenisMemori() << ' ' << komputer.getSsd().getMerk() << ' ' << komputer.getSsd().getNama() << " (" << komputer.getSsd().getKapasitasGB() << " GB) " << "(" << komputer.getSsd().getBacaTulisMBps() << ".0 MBps)" << endl;
    cout << "Keyboard  : " << komputer.getKeyboard().getJenisSwitch() << ' ' << komputer.getKeyboard().getRGB() << ' ' << komputer.getKeyboard().getMerk() << ' ' << komputer.getKeyboard().getNama() << " (" << komputer.getKeyboard().getTipePeripheral() << ", " << komputer.getKeyboard().getInterface() << ")" << endl;
    cout << "Mouse     : " << komputer.getMouse().getDPI() << "dpi " << komputer.getMouse().getJumlahTombol() << ' ' << komputer.getMouse().getMerk() << ' ' << komputer.getMouse().getNama() << " (" << komputer.getMouse().getTipePeripheral() << ", " << komputer.getMouse().getInterface() << ")" << endl;
    cout << "Monitor   : " << komputer.getMonitor().getResolusi() << ' ' << komputer.getMonitor().getRefreshRateHz() << "Hz " << komputer.getMonitor().getMerk() << ' ' << komputer.getMonitor().getNama() << " (" << komputer.getMonitor().getTipePeripheral() << ", " << komputer.getMonitor().getInterface() << ")" << endl;

    return 0;
}