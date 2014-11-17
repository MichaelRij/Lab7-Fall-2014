
/*
Author : Michael Rijlaarsdam
Lab #7 Memory Management
Purpose : This is the header for a program that simulates memory management with a class
Can only handle ints;
Functions will be in a seperate linked file
*/
#ifndef MEMORY
#define MEMORY

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



class memory{
private:
    vector<int> mem;

public:
    memory(int);//construct memory space of specified length
    memory();   //construct memory space of default length

    int storeInt(int,int);//place first int in location of second; returns a negative if theres an error
    int getInt(int);//takes the value from a given memory location returns a negative if theres an error
    int blockCopy(int,int,int);//source memory location, dest memory location, length
    void dump(int,int);// dumps specified start location to end location
    void dump();// dumps all 
    
};

#endif

