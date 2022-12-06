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
    char name[(const) bufferLength] = "Jacob Penstein";

    psFile = fopen("dataB", "w");

    nameLength = strlen(name);
    i = 0;

    for (i < bufferLength; i++;) {
        if (i < nameLength)
            putc(name[i], psFile);
        else
            putc('\0', psFile);
    }

    fclose(psFile);
}