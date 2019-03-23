/*
    Library that implement the c# split in C
    It generates an array where the last element is full of /0, so to control if you reach the end you can make a if(array[i] == NULL)
*/

char** split(char* string,char* separator);
int copyString(char**,char*);
