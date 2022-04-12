C program to add two complex numbers
#include <stdio.h>
struct complex{
    int real,img;
};
int main(){
   struct complex num1,num2,result;

// accept data for first complex number
   printf("Enter Real part of first complex number: ");
   scanf("%d",&num1.real);
   printf("Enter Imaginary part of first complex number: ");
   scanf("%d",&num1.img);
   printf("Complex Number1: %di + %d",num1.real,num1.img);
   
// accept data for second complex number
   printf("\nEnter Real part of second complex number: ");
   scanf("%d",&num2.real);
   printf("Enter Imaginary part of first complex number: ");
   scanf("%d",&num2.img);
   printf("Complex Number2: %di + %d",num2.real,num2.img);
   
   result.real = num1.real+num2.real;
   result.img = num1.img + num2.img;
   printf("\nComplex Addition is : %di + %d",result.real,result.img);
   
    return 0;
}




Output:

Enter Real part of first complex number: 6
Enter Imaginary part of first complex number: 7
Complex Number1: 6i + 7
Enter Real part of second complex number: 8
Enter Imaginary part of first complex number: 9
Complex Number2: 8i + 9
Complex Addition is : 14i + 16




