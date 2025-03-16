#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Ssd.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Monitor.cpp"

using namespace std;

class Komputer{
    //atribut
    private:
        string nama;
        Cpu cpu;
        vector<Ram> ramList;
        Harddrive harddrive;
        Ssd ssd;
        Keyboard keyboard;
        Mouse mouse;
        Monitor monitor;

    public:
        //konstruktor
        Komputer(){
            this->nama = "";
        }

        Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, Ssd ssd, Keyboard keyboard, Mouse mouse, Monitor monitor){
            this->nama = nama;
            this->cpu = cpu;
            this->ramList = ramList;
            this->harddrive = harddrive;
            this->ssd = ssd;
            this->keyboard = keyboard;
            this->mouse = mouse;
            this->monitor = monitor;
        }

        //getter dan setter
        void setNama(string nama){
            this->nama = nama;
        }

        void setCpu(Cpu cpu){
            this->cpu = cpu;
        }

        void setRam(vector<Ram> ramList){
            this->ramList = ramList;
        }    
    
        void setHarddrive(Harddrive harddrive){
            this->harddrive = harddrive;
        }

        void setSsd(Ssd ssd){
            this->ssd = ssd;
        }

        void setKeyboard(Keyboard keyboard){
            this->keyboard = keyboard;
        }

        void setMouse(Mouse mouse){
            this->mouse = mouse;
        }

        void setMonitor(Monitor monitor){
            this->monitor = monitor;
        }

        //add ram
        void addRam(Ram ram){
            this->ramList.push_back(ram);
        }

        string getNama(){
            return this->nama;
        }

        Cpu getCpu(){  
            return this->cpu;
        }

        vector<Ram> getRamList(){ // return vector
            return this->ramList;
        }

        Harddrive getHarddrive(){
            return this->harddrive;
        }

        Ssd getSsd(){  
            return this->ssd;
        }

        Keyboard getKeyboard(){  
            return this->keyboard;
        }

        Mouse getMouse(){  
            return this->mouse;
        }
        
        Monitor getMonitor(){  
            return this->monitor;
        }

        ~Komputer(){

        }
};
