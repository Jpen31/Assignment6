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

    fclose(psFile);

    return 0;
}