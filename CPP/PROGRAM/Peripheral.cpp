#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Peripheral : public Komponen{
    //atribut
    private:
        string tipePeripheral;
        string interface;

    public:
        //konstruktor
        Peripheral(){
            this->tipePeripheral = "";
            this->interface = "";
        }

        Peripheral(string tipePeripheral, string interface, string merk, string nama) : Komponen(merk, nama){
            this->tipePeripheral = tipePeripheral;
            this->interface = interface;
        }

        //getter dan setter
        void setTipePeripheral(string tipePeripheral){
            this->tipePeripheral = tipePeripheral;
        }

        void setInterface(string interface){
            this->interface = interface;
        }

        string getTipePeripheral(){
            return this->tipePeripheral;
        }

        string getInterface(){
            return this->interface;
        }

        ~Peripheral(){

        }
};
