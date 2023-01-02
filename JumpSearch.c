//
// Created by Ki on 12/31/2022.
//
#include "stdio.h"
#include "math.h"

int min(int first, int second){    // minimum
    if(second>first){
        return first;
    }else{
        return second;
    }
}

int jumpSearch(int arr[], int size, int key){   // Jumpsearch

    int step = sqrt(size);    // step size

    int previous = 0;

    while(arr[min(step, size)-1]<key){    // right condition

        previous = step;

        step = step+ sqrt(size);

        if(previous >=size){     // ending point
            return -1;
        }

    }

    for(int j= previous; j< step; j++){     // wrong condition

        if(arr[j] == key){
            return j;
        }
    }
    return -1;   //   ending point
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8, 10,45,120,145, 234, 123, 256,345};

    int size = sizeof(arr)/sizeof(arr[0]);

    int toFind = 120;

    int indexNumber = jumpSearch(arr, size,  toFind);

    if(indexNumber != -1){
        printf("We found\n");
        printf("Found at index %d  Data %d", indexNumber, arr[indexNumber]);

    }else{

        printf("Not Found!\n");
    }

    return 0;

}