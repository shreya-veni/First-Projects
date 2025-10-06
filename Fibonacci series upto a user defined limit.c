#include <stdio.h>
// Printing the fibonacci series
//comments are mistakes I've made
int main(){
	int limit;
	printf("Enter the no. of terms of the fibonacci series: \n");
	fflush(stdout);
	scanf("%d",&limit);
    printf ("Let us print the Fibonacci sequence upto %d terms:\n",limit);
    int num1=1;
    int num0 =0;
    int nextTerm=0; //good practicce
    printf ("%d\n", num0);
    printf ("%d\n", num1);

    //loop for printing the fibonacci series upto given number of terms
    for (int i =3;i<= limit;i++){    //we have already printed two values so we need to print from the 3rd value to the nth value
    	nextTerm=num1 + num0;    //wrong logic- nextTerm is not nextTerm+num0 it is num1+num0 think why
    	//initialize value of nextTerm before printing the value
    	printf ("%d\n", nextTerm);
    	num0 = num1;
    	num1 = nextTerm;
    	}
    return 0;
}
