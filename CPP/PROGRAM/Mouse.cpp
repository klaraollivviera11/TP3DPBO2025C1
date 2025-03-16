#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

class Mouse : public Peripheral{
    //atribut
    private:
        int dpi;
        int jumlahTombol;

    public:
        //konstruktor
        Mouse(){
            this->dpi = 0;
            this->jumlahTombol = 0;
        }

        Mouse(int dpi, int jumlahTombol, string tipePeripheral, string interface, string merk, string nama) : Peripheral(tipePeripheral, interface, merk, nama){
            this->dpi = dpi;
            this->jumlahTombol = jumlahTombol;
        }

        //getter dan setter
        void setDPI(int dpi){
            this->dpi = dpi;
        }

        void setJumlahTombol(int jumlahTombol){
            this->jumlahTombol = jumlahTombol;
        }        

        int getDPI(){
            return this->dpi;
        }

        int getJumlahTombol(){
            return this->jumlahTombol;
        }

        ~Mouse(){

        }
};
