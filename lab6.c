#include <stdio.h>
#include <math.h>

//Question 1: Prime number

int prime(){
    int prime, counter = 0;
    printf("Enter a number: ");
    scanf("%d", &prime); //inputing number

    for(int i = 2; i < prime; i++){ //starting at 2, increasing to prime, incrementing by 1
        if(prime % i == 0) counter++; //when the prime number remainder is 0, add 1 to counter
    }

    if(counter != 0){ //if the counter does not equal 0
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }
}

//Question 2: Positive integer power

int positivePower(int x, int n){
    if(n > 0){ //when n is greater than 0
        int power = pow(x, n); //use the power function
        printf("%d", power);
    } else {
        printf("Program terminated");
    }
}

int main(){
    //prime();
    //positivePower(3,2);
}