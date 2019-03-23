#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "split.h"

int main()
{
    char string[] = "Ciao,come,va,,bastardo,fhwefheowihfueigd7ifgSeouwrhoihw,aiofdhdiushuifhewuifuiwguifhuiwrhfo";
    char delimeter[] = ",";
    char** result = split(string,delimeter);
    int i=0;
    while(strcmp(result[i],"/0")!=0)
    {
        printf("%s\n",result[i]);
        i++;
    }
    return 0;
}
