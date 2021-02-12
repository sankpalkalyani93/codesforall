#include <stdio.h>
#include <stdlib.h>

FILE *create_file(int no);
void read_file(FILE *);
void write_file(FILE *);
void close(FILE *);

int main()
{
    FILE *file;
    int n;

    printf("\n\t Enter 1 to write to file or 2 to read from file:\t");
    scanf("%d", &n);
    if((file = create_file(n)) == NULL){

        printf("\n\t Error creating file...");
    }
    else{

        if(n == 1){
            printf("\n\t File Opened...");
            write_file(file);
        }
        else if(n == 2)
        {
            printf("\n\t File opened...");
            read_file(file);
        }
    }

    return 0;
}

FILE *create_file(int no){

    FILE *fp;
    if(no == 1){
        fp = fopen("H:\\cfiles\\file1.txt", "w+");
        return fp;
    }
    else if(no == 2){
        fp = fopen("H:\\cfiles\\file1.txt", "r");
        return fp;
    }
}

void read_file(FILE *fp){

    char c;
    printf("\n\t Reading data from file...");

    while((c = fgetc(fp)) != EOF){

        printf("%c", c);
    }
    close(fp);
}

void write_file(FILE *fp){

    char data[500], i, n;
    printf("\n\t Enter the no. of lines to write to file: \t");
    scanf("%d", &n);

    printf("\n\t Enter data to write in file: ");

    for(i = 0; i < n+1; i++){

        fgets(data, sizeof(data), stdin);
        fputs(data, fp);
    }
    close(fp);
}

void close(FILE *fp){

    fclose(fp);
}
