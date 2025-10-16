#include <stdio.h>
#include <math.h>
int main(){
    int a=36;
    int b=69;
    int c=13;
    int A = pow(a,2) + pow(b,2) + 2*c + sqrt(a+b-c);
    printf("A = %d", A);
    return 0;
}
