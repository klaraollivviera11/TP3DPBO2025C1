#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen{
    //atribut
    private:
        string merk;
        string nama;

    public:
        //konstruktor
        Komponen(){
            this->merk = "";
            this->nama = "";
        }

        Komponen(string merk, string nama){
            this->merk = merk;
            this->nama = nama;
        }

        //getter dan setter
        void setMerk(string merk){
            this->merk = merk;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getMerk(){
            return merk;
        }

        string getNama(){
            return nama;
        }

        ~Komponen(){

        }
};
