# Split function in C

This is a function that perform the famous C# or Java split function.
It generates an array where the last element is full of /0, so to control if you reach the end you can make a cicle like that:

```c
    while(strcmp(result[i],"/0")!=0)
    {
        printf("%s\n",result[i]);
        i++;
    }
```