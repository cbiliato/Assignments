#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*Question 1: Write a program that converts 27 from degrees Fahrenheit (F) to degrees Celsius (C)
using the following formula: (C = (F - 32) / 1.8)
    -prompt the user to enter a value
    -print the temp in degrees Fahrenheit and next to it the temp in degrees Celsius*/

int fahrenheitToCelsius(){
    double fahrenheit, celsius;

    printf("Enter a value in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = ((fahrenheit - 32) / 1.8); //formula to calculate celsius from fahrenheit

    printf("%lf Fahrenheit is %lf in Celsius", fahrenheit, celsius);
}

//Question 2: What output would you expect from the following program?

int question2(){
    char c, d;
    
    c = 'd';
    d = c;
    printf ("d = %d\n", d);
    return 0;
}

//Question 3: Write a program to evaluate the polynomial shown here: 3x^3-5x^2+6 for x = 2.55

int polynomial(){
    double x = 2.55;
    double evaluation = ((3*x*x*x) - (5*x*x) + 6); //turn polynomial equation into something computable
    printf("\nThe evaluation at x = %.2lf is: %lf.", x, evaluation);
}

/*Question 4: Write a program that asks the user to type in two integer values at the terminal. 
Test these two numbers to determine if the first is evenly divisible by the second, 
and then display an appropriate message at the terminal.*/

int divisibility(){
    int value1, value2;
    printf("\nEnter two integers: ");
    scanf("\n%d \n%d", &value1, &value2);

    if(value1 % value2 == 0){ //if the remainder is zero, then the number is divisible
        printf("\nit is divisible");
    } else {
        printf("\nit is not divisible");
    }
}

/*Question 5: Evaluate the following expression indicating their result being TRUE (1) OR FALSE (0) if x = 3, y = 4, z = 5:
		a. x > y || y < z
		b. x % y + z == x + z
		c. x / y + + + z
        d. !(x < y) */

int logic(){
    int a, b, c, d, x = 3, y = 4, z = 5;

    a = x > y || y < z; //True
    b = x % y + z == x + z; //True
    c = x / y +++ z; //True
    d = !(x < y); //False

    printf(" a = %d, b = %d, c = %d, d = %d", a, b, c, d);
}

/*Question 6: Write a program that accepts two integer values typed in by the user. 
Display the result of dividing the first integer by the second, to three-decimal-place accuracy. 
Remember to have the program check for division by zero.*/

int division(){
    int integer1, integer2, div;
    printf("\nEnter two values: ");
    scanf("\n%d %d", &integer1, &integer2);

    div = integer1 / integer2;

    if (integer2 == 0){ //deciphering if the division is by zero
        printf("\ndivision by 0");
    } else {
        printf("\nnot division by zero");
    }
}

/*Question 8: Write a program to generate and display a table of n and n^2,
for integer values of n ranging from 1 to 20. be certain to print appropriate column headings*/

int nAndNSquared(){
    int n;
    printf("\n n     n^2");
    printf("\n---    ---\n");

    for(int n = 1; n <= 20; n++){ //starting at 1, incrementing by 1 until 20
        int nSquares = n * n; //multiple the number by itself
        printf("%d\t%d\n", n, nSquares);
    }
}

/*Question 9: The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n. 
For example, 5 factorial is calculated as: 5! = 5 x 4 x 3 x 2 x 1  = 120. 
Write a program to generate and print a table of the first 10 factorials.*/

int factorial(){
    for(int i = 0; i < 10; i++){ //starting at 0, incrementing by 1 until 9
        int n = i + 1; //the variable n is the value of i plus 1
        int j;
        int factorial = 1;
        for(int j = 1; j <= n; j++){ //starting at 1, incrementing by 1 until it reaches n
            factorial = factorial * j; //the factorial is the factorial mulitplied by the updating value j
        }
        printf(" %d ", i);
        printf("%d\n", factorial);
    }
}

/*Question 10: 	10. Write a program that calculates the sum of the digits of an integer. 
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 (i.e., 13). 
The program should accept any arbitrary integer typed in by the user.*/
	
int sumOfDigits(){
    int integer, whole, sum = 0, remainder;
    printf("Enter any integer: ");
    scanf("%d", &integer);
    
    whole = integer;

    while(whole != 0){ //if the number does not equal zero do...
        remainder = whole % 10; //the remainder variable equals the whole number divisible by 10
        whole /= 10; //the whole number is equal to itself divided by 10
        sum += remainder; //the sum then equals itself plus the remainder value
    }
    printf("The sum is: %d", sum);
}

/*Question 11: Write a program that draws a triangle.
		○ If the program will first prompt the user for the height of the triangle.
		○ If the line is odd it will print a star "*"
Else if the line is even it will print a hash "#" */

int triangle(){
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    for(int i = 1; i <= height; i++){ //starting at 1, incrementing by 1 until inputed height is reached
        for(int j = 1; j <= i; j++){ //starting at 1, incrementing by 1 until i is reached
            if(i % 2 != 0) //if i is divisible by 2 and does not equal 0, print statement below
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
}
int main(){
    // fahrenheitToCelsius(); //Question 1
    // question2(); //Question 2
    // polynomial(); //Question 3
    // divisibility(); //Question 4
    // logic(); //Question 5
    // division(); //Question 6
    // nAndNSquared(); //Question 8
    // factorial(); //Question 9
    // sumOfDigits(); //Question 10
    // triangle(); //Question 11
}