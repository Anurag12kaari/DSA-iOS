#include <stdio.h>
#include <stdlib.h>
/* This is Question 1
int main() {
    int a, b;
    printf("Enter first char: ");
    scanf("%d", &a);
    printf("Enter second char: ");
    scanf(" %d", &b); // Note the space before %c to consume any leftover newline character
    printf("You entered: %d and %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

*/

/* Question 2

#include <stdio.h>
int main() {
    char a;
    printf("Enter Character: ");
    scanf("%c", &a);
    
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("%c is a vowel",a);
    }
    else {
        printf("%c is a consonant", a );
    }
    
    return 0;
}
*/

/* Question 3

#include <stdio.h>
int main() {
    int a , b, c ;
    printf("Enter First No.: ");
    scanf("%d",&a);
    printf("Enter Second No.: ");
    scanf("%d",&b);
    printf("Enter Third No.: ");
    scanf("%d",&c);
    
    if (a > b ) {
        if ( a > c) {
            printf("%d is the Largest of all 3", a);
        }
        
        else {
            printf ("%d is the Largest of all 3", c);
        }
    }
    
    else {
        if (b > c) {
            printf("%d is the Largest of all 3", b);
        }
        
        else {
            printf("%d is the Largest of all 3", c);
        }
    }
    
    return 0;
}
*/

/* Question 4
#include <stdio.h>

int main() {
    int a, b, i ;
    printf("Enter No. for which table required : ");
    scanf("%d",&a);
    
    for (i = 1; i < 11; i++) {
        b = a * i;
        printf ("%d * %d = %d \n", a , i , b) ;
    }
    
    return 0;
}
*/

/* Question 5

#include <stdio.h>

int main() {
    int a, sum = 0, i = 1 ;
    printf("Enter no. till you want : ");
    scanf ("%d", &a);
    
    while (i <= a) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("%d is sum from 1 to %d", sum, a );
    return 0;
}

*/

/* Question 7

#include <stdio.h>


int main() {
    int a, b , result;
    char opr;
    printf("Enter First No.: ");
    scanf ("%d", &a);
    printf("Enter Second No.: ");
    scanf("%d", &b);
    printf("Enter Operator (+ / * / - / ) :   ");
    scanf(" %c", &opr);
    
    switch (opr) {
        case '+' :
            result = a + b;
            break ;
        
        case '-' :
            result = a - b;
            break ;
        
        case '*' :
            result = a * b;
            break ;
        
        case '/' :
            result = a / b;
            break ;
            
        default :
            printf("Invlaid Operator");
            break;
    }
    
    printf("%d %c %d = %d", a,opr,b,result);
    
  
    return 0;
}
    
*/

/* Question 9

#include <stdio.h>

int main() {
    int a;
    printf("Enter the year to check: ");
    scanf("%d",&a);
    
    if (a % 4 == 0) {
        printf("Year %d is a leap year", a);
    }
    
    else {
        printf("Year %d is not a leap year", a);
    }
    return 0;
}
*/

/* Question 10 (This is a simple C++ program )

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the no. : ";
    cin >> a;
    cout << "The no. is : "<< a << endl;
   

    return 0;
}
*/