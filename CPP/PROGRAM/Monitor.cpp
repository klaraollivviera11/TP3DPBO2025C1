#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

class Monitor : public Peripheral{
    //atribut
    private:
        string resolusi;
        int refreshRateHz;

    public:
        //konstruktor
        Monitor(){
            this->resolusi = "";
            this->refreshRateHz = 0;
        }

        Monitor(string resolusi, int refreshRateHz, string tipePeripheral, string interface, string merk, string nama) : Peripheral(tipePeripheral, interface, merk, nama){
            this->resolusi = resolusi;
            this->refreshRateHz = refreshRateHz;
        }

        //getter dan setter
        void setResolusi(string resolusi){
            this->resolusi = resolusi;
        }

        void setRefreshRateHz(int refreshRateHz){
            this->refreshRateHz = refreshRateHz;
        }

        string getResolusi(){
            return this->resolusi;
        }

        int getRefreshRateHz(){
            return this->refreshRateHz;
        }

        ~Monitor(){

        }
};
