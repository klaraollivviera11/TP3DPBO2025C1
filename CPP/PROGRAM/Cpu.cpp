#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Cpu : public Komponen{
    //atribut
    private:
        int jumlahCore;
        float kecepatanGHz;

    public:
        //konstruktor
        Cpu(){
            this->jumlahCore = 0;
            this->kecepatanGHz = 0;
        }

        Cpu(int jumlahCore, float kecepatanGHz, string merk, string nama) : Komponen(merk, nama){
            this->jumlahCore = jumlahCore;
            this->kecepatanGHz = kecepatanGHz;
        }

        //getter dan setter
        void setJumlahCore(int jumlahCore){
            this->jumlahCore = jumlahCore;
        }

        void setKecepatanGHz(float kecepatanGHz){
            this->kecepatanGHz = kecepatanGHz;
        }

        int getJumlahCore(){
            return this->jumlahCore;
        }

        float getKecepatanGHz(){
            return this->kecepatanGHz;
        }

        ~Cpu(){

        }
};
