/*--------------------------------------------------------------------*/
/* createdataB.c                                                      */
/* Author: Shlomo Fortgang and Jacob Penstein                         */
/*--------------------------------------------------------------------*/
 
#include <stdio.h>
#include <string.h>

int main(void) {
    int bufferLength = 48;
    int i;
    int nameLength;
    FILE *psFile;
    unsigned int uiData;
    char name[48] = "Jacob Penstein";

    psFile = fopen("dataB", "w");

    nameLength = strlen(name);
    i = 0;

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