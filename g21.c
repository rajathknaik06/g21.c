/*You are tasked with developing a program to perform a specific arithmetic calculation based on user inputs. The program should take four integer inputs from the user: a, b, c, and d. 



It will then calculate the result of the expression (a + b * c) / d while adhering to the following operator precedence and order of evaluation.



Note:

Multiplication (*) has higher precedence than addition (+).
Division (/) has the same precedence as multiplication (*), and both are left-associative, meaning they are evaluated from left to right.
Input format :
The input consists of four integers, a, b, c, and d, separated by space.

Output format :
The output prints the result of the expression as an integer in the format: "The result of (a + b * c) / d is: " followed by the result.*/




#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int result = (a + b * c) / d;
    printf("The result of (%d + %d * %d) / %d is: %d", a, b, c, d, result);   //2 5 4 8

    return 0;
}
