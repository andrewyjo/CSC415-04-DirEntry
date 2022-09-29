/**************************************************************
* Class:  CSC-415-03 Fall 2022
* Name: Andy Cho, Gabriella Arcilla
* Student ID: 920484081, 921822951
* GitHub Name: andrewyjo, gabriellaarcilla
* Project: Group Assignment - File System - Directory Entry Prototype
*
* File: DirEntry.c
*
* Description: An early prototype of the Boberts Directory Entry.
* To test: gcc test.c; ./a.out;
* 
*
**************************************************************/
#include <time.h>

struct DirEntry{

        char name[255];
        //Combined with the filename, the path can be upto 4096bytes.
        char path[4096];
        char type[25];
        char owner[25];

        //permissions: "----------" string with 'r,w,x' modifiers
        char permissions[11];
        unsigned int groupID;
        unsigned int nameLength;
        unsigned int pathLength;
        unsigned int id;
        unsigned int addr;
        unsigned int size;
        time_t lastAccess;
        time_t lastMod;


};
