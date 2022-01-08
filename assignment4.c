#include <stdio.h>
/*Question 1; 	1. Write a program to multiply two matrices A, B, C and store the results in matrix C.
		a. Declare Matrix A to be of size 3x3
		b. Declare Matrix B to be of size 3x3
		c. Initialize both matrices to some values
		d. Print the contents of Matrix A and Matrix B
Print the contents of Matrix C to display the result */

int multiplication(){
    int a[3][3], b[3][3], c[3][3], i, j, k;
    int product;

    printf("Enter 9 elements into the first matrix:\n");
    for(i = 0; i < 3; i++){ //starting at 0, incrementing by 1 until 2
        for(j = 0; j < 3; j++){ //starting at 0, incrementing by 1 until 2
            scanf("%d", &a[i][j]); //obtaining array elements 
        }
    }

    printf("The first matrix is:\n"); //printing array elements inputed
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter 9 elements into the second matrix:\n"); //obtaining array elements inputed
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("The second matrix is:\n"); //printing array elements previously inputed
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i <= 2; i++){ //starting at 0, incrementing by 1 until 2
        for(j = 0; j <= 2; j++){ //starting at 0, incrementing by 1 until 2
            product = 0;
            for(k = 0; k <= 2; k++){ //starting at 0, incrementing by 1 until 2
                product = product + a[i][k] * b[k][j]; //the product is equal to the product plus the multiplication of array a and array b 
            }
            c[i][j] = product; //the product is then equal to matrix c
        }
    }

   printf("Multiplication of Matrix a and b is: \n"); //printing the multiplication of matrix a and b into matrix c
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }
}

//Question 2: Write a program that calculate the average of 10 floating point values

int storage(){
    int i;
    float sum = 0.0, average, floater[10]; //floater array stores 10 values

    printf("Enter 10 float values to the floater array:\n"); //Entering value into arrays
    for(i = 1; i <= 10; i++)
        scanf("%f", &floater[i]);

    for(i = 1; i <= 10; i++){ //adding together all the values of the array
        sum += floater[i];
    }
    average = sum / 10; //the sum of numbers divided by the number of elements equaling the average
    printf("%0.2f\n", average); //printing only 2 numbers after the decimal
}

/*Question 4: Write a function called arraySum() that takes two arguments: 
an integer array and the number of elements in the array. 
Have the function return as its result the sum of the elements in the array. 
Also, write a main() routine to test the function.*/

int arraySum(int integer[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){ 
        sum += integer[i]; //adding together the elements of the array
    }
    return sum;
}

/*Question 5a: A Matrix M with i rows, j columns can be transposed into a 
              Matrix N have j rows and i columns by simply setting the value of Na,
              b equal to the value of Mb,a for all relevant values of a and b.
		a.  Write a function called transposeMatrix() that takes an argument a 4x5 matrix and a 5x4 matrix. 
                Have the function transpose the 4x5 matrix and store the results in the 5x4 matrix. 
                Also write a main() routine to test the function. */

void transpose(int M[4][5], int N[5][4]){
    int i, j;
    for(i = 0; i < 5; i++){ //starting at 0, incrementing by 1 until 4
        for(j = 0; j < 4; j++){ //starting at 0, incrementing by 1 until 3
            N[i][j] = M[j][i]; //the array M now equals the array N
        }
    }
}

/*Question 5b: Using the variable-length arrays, rewrite the transposeMatrix() 
                function developed in the previous step to take the number of rows and column as arguments, 
                and to transpose the matrix of the specified dimensions */

void transposed(int M[100][100], int x, int y, int N[100][100]){
    for(int i = 0; i < x; i++){ 
        for(int j = 0; j < y; j++){
            N[i][j] = M[j][i]; //creating a matrix equal to the other matrix but reversing the rows and columns
        }
    }
}

/*Question 6: The following code sorts an Array of integers into ascending order.
		        -Compile and run the program. Verify that it indeed sorts the values
		        -Modify the sort function to take a third argument indicating whether the array is to be sorted in ascending or descending order. 
                 Then modify the sort() algorithm to correctly sort the array into the indicated order */
	

void sort (int a[], int n, int order){
    int i, j, temp;
    for (i = 0; i < n; ++i){ //starting at 0, pre-incrementing by 1 until n
        for (j = i + 1; j < n; ++j){ //starting at i plus 1, pre-incrementing by 1, until n
            if (order == 1){ //if ascending order is selected 
                if (a[i] > a[j]){ //the element in array i is greater than j 
                    temp = a[i]; //then it becomes the temp variable
                    a[i] = a[j]; //element j in array a equals i in a
                    a[j] = temp; //element j in a equals temp 
                }
            } else if (order == 0){ //if descending order is selected
                if (a[i] < a[j]){ //the element in array j is greater than i
                    temp = a[i]; //then it becomes the temp variable
                    a[i] = a[j]; //element i in array a equals j in a
                    a[j] = temp; //element j in a equals temp 
             
                }
            }
        }
    }
}

int main() {
    //multiplication(); //Question 1
    //storage();//Question 2
    // int elements[5] = {10, 12, 12, 12, 12}; //Question 4
    // int sum = arraySum(elements, 5);
    // printf("The sum is: %d", sum);

    // int M[4][5], N[5][4]; //Question 5a
    // int i, j;

    // printf("Input values for original matrix:"); //user inputs the values into M array
    // for(i = 0; i < 4; i++){
    //     for(j = 0; j < 5; j++){
    //         scanf("%d", &M[i][j]);
    //     }
    // }

    // printf("\nThe original matrix is:\n"); //printing the M array 
    // for(i = 0; i < 4; i++){
    //     for(j = 0; j < 5; j++){
    //         printf("%d", M[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // transpose(M, N); //calling transpose function

    // printf("\nThe transpose of the original function is:\n"); //printing the transpose of the original matrix
    // for(i = 0; i < 5; i++){
    //     for(j = 0; j < 4; j++){
    //         printf("%d", N[i][j]);
    //     }
    //     printf("\n");
    // }

    // int M[100][100], N[100][100], x, y; //Question 5b

    // printf("Enter numbers of rows and columns: \n"); //specifing dimensions of rows and columns
    // scanf("%d%d", &x, &y);

    // printf("\nEnter the elements into the matrix:\n"); //inputing elements into matrix
    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         scanf("%d", &M[i][j]);
    //     }
    // }

    // printf("\nThe output of the matrix: \n"); //printing inputed elements of the matrix
    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         printf("%d", M[i][j]);
    //     }
    //     printf("\n");
    // }

    // transposed(M, x, y, N); //calling the transpose function

    // printf("\nThe tranpose matrix:\n"); //transposing the matrix
    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         printf("%d", N[i][j]);
    //     }
    //     printf("\n");
    // }

    // int i, order; //Question 6
    // int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
    // printf("The array before the sort:\n");
    // for (i=0; i < 16; i++) printf("%i ",array[i]); //printing the 16 elements of the array
    
    // printf("\nEnter '1': for accending, and '0' for decending:\n"); //accepting user input
    // scanf("%d", &order);
    // sort(array, 16, order); //call the sorting algorithm function
    // printf("\n");
    // printf("The array after the sort:\n"); //printing the array after sorting
    // for (i=0; i < 16; i++)
    //     printf("%i ",array[i]);
    // printf("\n");
}