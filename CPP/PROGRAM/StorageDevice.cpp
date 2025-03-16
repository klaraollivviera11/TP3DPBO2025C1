#pragma once
#include <iostream>
#include <string>

using namespace std;

class StorageDevice{
    //atribut
    private:
        int kapasitasGB;
        float bacaTulisMBps;

    public:
        //konstruktor
        StorageDevice(){
            this->kapasitasGB = 0;
            this->bacaTulisMBps = 0;
        }

        StorageDevice(int kapasitasGB, float bacaTulisMBps){
            this->kapasitasGB = kapasitasGB;
            this->bacaTulisMBps = bacaTulisMBps;
        }
        
        //getter dan setter
        void setKapasitasGB(int kapasitasGB){
            this->kapasitasGB = kapasitasGB;
        }

        void setBacaTulisMBps(float bacaTulisMBps){
            this->bacaTulisMBps = bacaTulisMBps;
        }

        int getKapasitasGB(){
            return kapasitasGB;
        }

        float getBacaTulisMBps(){
            return bacaTulisMBps;
        }

        ~StorageDevice(){

        }
};
