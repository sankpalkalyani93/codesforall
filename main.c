#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int rollno;
    char buffer[500];

    file = fopen("H:\\cfiles\\demofile1.txt", "w+");
    if(file == NULL){

        printf("\n\t File NOT created...");
    }
    else{

        printf("\n\t File created...");

        printf("\n\t Enter rollno: \t");
        scanf("%d", &rollno);

        fprintf(file, "Welcome-to-files-session \t");
        fprintf(file, "%d", rollno);

        fclose(file);
    }

    FILE *fp = fopen("H:\\cfiles\\demofile1.txt", "r");
    if(fp == NULL){

        printf("\n\t File Not Opened...");
    }
    else{

        printf("\n\t File Opening...");

        fscanf(fp, "%d", &rollno);
        printf("\n\t ---> %d", rollno);

        fscanf(fp, "%s", buffer);
        printf("\n\t ---> %s", buffer);
    }
    return 0;
}
