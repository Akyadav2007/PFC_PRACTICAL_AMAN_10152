#include <stdio.h>
//printing number from a to b using loops
int main(){//Aman kumar erp-10152
int a,b;
printf("Enter a and b:");
scanf("%d %d",&a, &b);
for(int i=a; i<=b; i++){
    printf("%d",i);
}
//sum of even numbers using continue 
 int n, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);
    // ATM pin authentication 
      int pin, correctPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == correctPin)
        printf("Access Granted");
    else
        printf("Invalid PIN");
return 0;
}
