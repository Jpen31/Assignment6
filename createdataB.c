/*--------------------------------------------------------------------*/
/* createdataB.c                                                      */
/* Author: Shlomo Fortgang and Jacob Penstein                         */
/*--------------------------------------------------------------------*/
 
#include <stdio.h>
#include <string.h>

/* Creates a file containing binary. The first 48 bytes contain a name
followed by null bytes. Then, the file has an address. */
int main(void) {
    int bufferLength = 48; /* length of array */
    int nameLength; /* length of name in the array */
    int i;
    FILE *psFile;
    unsigned int uiData; /* memory address */
    char name[48] = "Jacob Penstein"; 

    psFile = fopen("dataB", "w");

    nameLength = strlen(name);
    i = 0;
    /* prints a name followed by null bytes, for a total of 48 chars*/
    while (i < bufferLength) {
        if (i < nameLength)
            putc(name[i], psFile);
        else
            putc('\0', psFile);
        i++;
    }

    uiData = 0x400858;
    fwrite(&uiData, sizeof(unsigned int), 1, psFile);

    fclose(psFile);

    return 0;
}