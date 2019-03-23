#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "split.h"
#define DIM_ROW 30

char** split(char* string,char* separator)
{
    int n = strlen(string);
    char stringX[n];
    strcpy(stringX,string);
    int numElements=0;
    if(strtok(string,separator)!=NULL){
        numElements++;
        while(strtok(NULL,separator)!=NULL){
            numElements++;
        }
    }

    if(numElements > 0 )
    {
        char** result;
        result = (char**) malloc((numElements+1) * sizeof(char*));
        if(result == NULL)
        {
            return NULL;
        }
        if(result!=NULL)
        {
            for(int i=0;i<=numElements;i++)
            {
                result[i]= (char*) malloc(DIM_ROW);
                if(result[i]==NULL)
                {
                    return NULL;
                }
            }
        }
        int i = 0;
        char* buf;
        if((buf=strtok(stringX,separator))!=NULL){
            if(copyString(&result[i],buf)!=1)
                return NULL;
            i++;
            while((buf=strtok(NULL,separator))!=NULL){
                if(!copyString(&result[i],buf))
                    return NULL;
                i++;
            }
        }
        strcpy(result[numElements],"/0");
        return result;
    }

    return NULL;

}

int copyString(char** dest,char* src)
{
    int n = strlen(src);
    if(n > DIM_ROW)
    {
        *dest = (char*) realloc(*dest,120 * (int)(ceil(n/120) + 1));
        if(*dest == NULL)
        {
            return 0;
        }
    }
    strcpy(*dest,src);
    return 1;
}
