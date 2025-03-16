#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

class Keyboard : public Peripheral{
    //atribut
    private:
        string jenisSwitch;
        int RGB;

    public:
        //konstruktor
        Keyboard(){
            this->jenisSwitch = "";
            this->RGB = 0;
        }

        Keyboard(string jenisSwitch, int RGB, string tipePeripheral, string interface, string merk, string nama) : Peripheral(tipePeripheral, interface, merk, nama){
            this->jenisSwitch = jenisSwitch;
            this->RGB = RGB;
        }

        //getter dan setter
        void setJenisSwitch(string jenisSwitch){
            this->jenisSwitch = jenisSwitch;
        }

        void setRGB(int RGB){
            this->RGB = RGB;
        }

        string getJenisSwitch(){
            return this->jenisSwitch;
        }

        int getRGB(){
            return this->RGB;
        }

        ~Keyboard(){

        }
};
