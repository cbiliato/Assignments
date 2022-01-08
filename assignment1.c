#include <stdio.h>
//Question 6: Write a program to print the numbers from 1 to 10 and their squares:

int numAndSquares(){
    int n; 
    for(int n = 1; n <= 10; n++){ //starting at 1, incrementing by 1 until 10
        int nSquares = n * n; //mutiply n by n
        printf("%d %d\n", n, nSquares);
    }
}

int main(){
    numAndSquares(); //Question 6
}