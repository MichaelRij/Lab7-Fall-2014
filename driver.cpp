/*
Author : Michael Rijlaarsdam
Lab #7 Memory Management
Purpose : This is the driver for testing a program that simulates memory management with a class
Can only handle ints;
Functions will be in a seperate linked file
*/
#include "memory.h"

int main () {

    memory mem = memory(60);

    mem.storeInt(55,25);
    mem.storeInt(45,25);
    mem.storeInt(1,1);
    mem.storeInt(2,2);
    mem.storeInt(3,3);

    mem.blockCopy(1,5,3);

    mem.dump(1,20);

    return 0;
}
