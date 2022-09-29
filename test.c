/**************************************************************
* Class:  CSC-415-03 Fall 2022
* Name: Andy Cho, Gabriella Arcilla
* Student ID: 920484081, 921822951
* GitHub Name: andrewyjo, gabriellaarcilla
* Project: Group Project - Dir Entry - Test Program
*
* File: test.c
*
* Description: Run instructions: gcc test.c; ./a.out;
*
**************************************************************/
#include "DirEntry.c"
#include <string.h>
#include <stdio.h>
#include <time.h>

int test(){

        struct DirEntry de;
        strcpy(de.name, "pizza.jpeg");
        strcpy(de.path, "/root/pizza.jpeg");
        strcpy(de.type, "file");
        strcpy(de.owner, "boberts");
        strcpy(de.permissions, "-rwxr-xr-x");
        de.groupID = 1;
        de.nameLength = 10;
        de.pathLength = 16;
        de.id = 0;
        de.addr = 2;
        de.lastAccess = 0;
        de.lastMod = 0;

        printf("\n••••••Testing••••••\n");
        printf("\n•name:%s\n•path:%s\n•type:%s•owner:%s\n•permissions:%s\n•groupID: %d\n•nameLength: %d\n•pathLength:%d\n•id:%d\n•addr:%d\n•lastAccess:%ld, lastMod:%ld\n", de.name,  de.path, de.type, de.owner, de.permissions, de.groupID, de.nameLength, de.pathLength, de.id, de.addr, de.lastAccess, de.lastMod);
         return 0;

}


