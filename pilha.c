#include <stdio.h>
#include <stdlib.h>


int pilha [10]; 
int posiAtual = -1;


int isEmpty(){
 
    return posiAtual == -1;

}

int isFull(){

    return posiAtual == 9;
    
}
void push(int x){
    if (isFull())
    {
        printf("ERROR! A pilha está cheia\n");
    }
    else{

    pilha [++posiAtual] = x;

    }

}

void pop(){
    if (isEmpty())
    {
        printf("ERROR! A pilha ta vazia\n ");
    }
    else{
        
        pilha[posiAtual--];

    }
}

int main(){

    push(10);
    push(8);
    push(7);
    push(16);
    push(11);
    push(17);
    push(15);
    push(14);
    push(100);
    push(25);
    push(95);

    return 0;

}