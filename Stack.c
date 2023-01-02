//
// Created by Ki on 1/1/2023.
//
#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

struct stack{                             //  struct

    int data[MAXOFSTACK];

    int top;


};

typedef struct stack st;                 //  creat function

int  isStackIsFull(st *myStack){         //  Checking stack is full

    if(myStack->top == MAXOFSTACK-1){
        return -1;
    }else{
        return 0;
    }
}

void creat_emptyStack(st *myStack){       // Creat empty step

    myStack->top = -1;
}

void pushToStack(st *myStack , int value){   //  Pushing

    if(isStackIsFull(myStack)){
        printf("Stack is Full!");
    }else{
        myStack->top++;
        myStack->data[myStack->top]=value;

    }
}

int isStackIsEmpty(st *myStack){            // Checking Stack is Empty for Pop
    if(myStack->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void popFromStack(st *myStack){               // popping

  if(isStackIsEmpty(myStack)){
    printf("Stack is Empty!");
}else{
      printf("Pop from Stack Data is %d\n",myStack->data[myStack->top]);

      myStack->top--;
  }

}

int main(){

    st *myStack=(st*)malloc(sizeof(st));

    creat_emptyStack(myStack);

    pushToStack(myStack, 3);
    pushToStack(myStack, 23);
    pushToStack(myStack, 45);
    pushToStack(myStack, 66);
    pushToStack(myStack, 77);
    pushToStack(myStack, 100);

    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);


return 0;
    }

