#include <stdio.h>

int main()
{
    printf("File Handling in 'C' --- creating files");
    
    FILE *ptr;
    
    ptr = fopen("H:\\Profound Work\\C-Codes\\filedemo.txt", "w");
    printf("File created...");
    
    fputs("Welcome to c-files.", ptr);  
    
    fseek(ptr, 10, SEEK_SET );  
    fputs(" profound\'s session", ptr);  
    fclose(ptr);
}
