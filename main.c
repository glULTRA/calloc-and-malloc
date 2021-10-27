#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int ID;
    char * info;
} Data;

int main(){
    int MemoryCapacity = 5;
    char information[] = "Hello wassup";
    Data *d1 = calloc(MemoryCapacity, sizeof(Data));
    if(d1 != NULL){
        for(int i = 0; i < MemoryCapacity; i++){
            (d1+i)->ID = i;
            (d1+i)->info = malloc(sizeof(information));
            strcpy((d1+i)->info, information);
        }
    }

    for(int i=0; i< MemoryCapacity; i++)
    {
        printf("%d , ", (d1 + i)->ID);
        printf("%s \n", (d1 + i)->info);
    }

}