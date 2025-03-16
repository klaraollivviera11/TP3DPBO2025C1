#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen{
    //atribut
    private:
        int kapasitasGB;
        string ddr;

    public:
        //konstruktor
        Ram(){
            this->kapasitasGB = 0;
            this->ddr = "";
        }

        Ram(int kapasitasGB, string ddr, string merk, string nama) : Komponen(merk, nama){
            this->kapasitasGB = kapasitasGB;
            this->ddr = ddr;
        }
        
        //getter dan setter
        void setKapasitasGB(int kapasitasGB){
            this->kapasitasGB = kapasitasGB;
        }

        void setDdr(string ddr){
            this->ddr = ddr;
        }

        int getKapasitasGB(){
            return this->kapasitasGB;
        }

        string getDdr(){
            return this->ddr;
        }

        ~Ram(){

        }
};
