#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "StorageDevice.cpp"

using namespace std;

class Harddrive : public Komponen, public StorageDevice{
    //atribut
    private:
        string tipeDrive;

    public:
        //konstruktor
        Harddrive(){
            this->tipeDrive = "";
        }

        Harddrive(string tipeDrive, string merk, string nama, int kapasitasGB, float bacaTulisMBps) : Komponen(merk, nama), StorageDevice(kapasitasGB, bacaTulisMBps){
            this->tipeDrive = tipeDrive;
        }

        //getter dan setter
        void setTipeDrive(string tipeDrive){
            this->tipeDrive = tipeDrive;
        }
        
        string getTipeDrive(){
            return this->tipeDrive;
        }

        ~Harddrive(){

        }
};
