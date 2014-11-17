/*
Author : Michael Rijlaarsdam
Lab #7 Memory Management
Purpose : This is the functions for a program that simulates memory management with a class
Can only handle ints;
Functions will be in a seperate linked file
*/

#include "memory.h"

    extern vector<int> mem;

    

    memory::memory(int length){//construct memory space of specified length in words
	mem.resize(length);
	
    }

    memory::memory(){   //construct memory space of default length
	memory(0);
	
    }

    int memory::storeInt(int loc,int val){//place first int in location of second 
				  	  //returns a negative if theres an error
	if(loc<0) return -1;
	if(loc>mem.capacity()) return-1;
	mem[loc] = val;
	return 0;
	
	
    }

    int memory::getInt(int loc){//takes the value from a given memory location returns a 
				//negative if theres an error
	if(loc<0)return -1;
	if(loc>mem.capacity())return -1;
	return mem[loc];
	
    }

    int memory::blockCopy(int source,int dest,int length){//start memory location, dest memory loc, length

	if(dest+length>mem.capacity())return -1;

	vector<int> tmp(length);

	for(int i = 0; i<length; i++){//copy to a small array
	    tmp[i]=mem[i+source];
	}
	for(int i = 0; i<length; i++){//copy to the old array
	    mem[i+dest]=tmp[i];
	}

	return 0;
    }

    void memory::dump(int startLoc,int endLoc){// dumps specified start location to end location
	
	int numCol = 10;
	
	printf("      ");
	for(int s=0; s<numCol; s++)
	    printf("%6d", s);
	printf("\n");//set up 0-9 index
	for (int i = (startLoc/numCol)*numCol; i<endLoc; i+=numCol){//integer division to drop to 										//nearest 10
		printf("%5d: ", i);
    		for(int a=i; a<numCol+i; a++){
		    printf("%05d ",mem[a]);
		}
		printf("\n");
	}
    }

    void memory::dump(){// dumps all 
	dump(0,mem.capacity());
	
    }

    

