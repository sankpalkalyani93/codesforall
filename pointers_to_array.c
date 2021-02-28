#include <stdio.h>

int* getArray(int *);
void display();

int main()
{   
    display();
    return 0;
}

int* getArray(int *array){
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    return array;
} 

void display(){
    int array[5];
    int *ptr;
    ptr = getArray(array);
    int i;
    for(i = 0; i < 5; i++){
        printf("%d \t", ptr[i]);
        //ptr++;
    }
}
