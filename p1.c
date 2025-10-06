#include <stdio.h>
// printing the fibonacci sequence
int main(){
    printf ("Let us print the Fibonacci sequence upto 100:\n");
    int num1=1;
    int num0 =0;
    int i;
    printf ("%d\n", num0);
    printf ("%d\n", num1);
    for (i = 1;i<100;i=i+num0){
        printf ("%d\n", i);
        num0 = num1;
        num1 = i;
    }
    return 0;
}

