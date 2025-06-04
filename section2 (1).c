// Online C compiler to run C program online
#include <stdio.h>
/* Question 1

int main() {
    int a;
    char b;
    float c;
    double d;
    short e;
    long f;
    long long g;
    
    int *ptr_a;
    char *ptr_b;
    float *ptr_c;
    double *ptr_d;
    short *ptr_e;
    long *ptr_f;
    long long *ptr_g;
    
    
    printf("Size of Int : %zu \n", sizeof(a));
    printf("Size of Char : %zu \n", sizeof(b));
    printf("Size of Float : %zu \n", sizeof(c));
    printf("Size of Double :%zu \n", sizeof(d));
    printf("Size of Short :%zu \n", sizeof(e));
    printf("Size of Long : %zu \n", sizeof(f));
    printf("Size of Long Long : %zu \n",sizeof(g));
    
    printf("====== he he he ============= \n");
    printf("\n");
    
    printf("Size of Int : %zu \n", sizeof(ptr_a));
    printf("Size of Char : %zu \n", sizeof(ptr_b));
    printf("Size of Float : %zu \n", sizeof(ptr_c));
    printf("Size of Double :%zu \n", sizeof(ptr_d));
    printf("Size of Short :%zu \n", sizeof(ptr_e));
    printf("Size of Long : %zu \n", sizeof(ptr_f));
    printf("Size of Long Long : %zu \n",sizeof(ptr_g));
    
    
    

    return 0;
}

*/

/* Question 3

int main() {
    int a, b;
    
    printf("Enter the first no.: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    printf("\n");
    
    int *c = &a;
    int *d = &b; 

    printf("Old no are a: %d, b: %d \n", a , b);
    
    int temp = *c;
    *c = *d;
    *d = temp;
    
    printf("New no are a: %d, b: %d", a , b );
    return 0;
}
*/