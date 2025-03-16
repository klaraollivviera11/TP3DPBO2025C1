#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "StorageDevice.cpp"

using namespace std;

class Ssd : public Komponen, public StorageDevice{
    //atribut
    private:
        string jenisMemori;

    public:
        //konstruktor
        Ssd(){
            this->jenisMemori = "";
        }

        Ssd(string jenisMemori, string merk, string nama, int kapasitasGB, float bacaTulisMBps) : Komponen(merk, nama), StorageDevice(kapasitasGB, bacaTulisMBps){
            this->jenisMemori = jenisMemori;
        }

        //getter dan setter
        void setjJenisMemori(string jenisMemori){
            this->jenisMemori = jenisMemori;
        }

        string getJenisMemori(){
            return this->jenisMemori;
        }

        ~Ssd(){

        }
};
