#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//  Use pointers to access and modify structure members
struct Animal {
	int legs;
	int price;
	int childen;
};
// Swaping two numbers using pointers
int main() {
	printf("Enter two numbers\n\n");
	int num1,num2;
	int *pointer = &num1;
	int *pointer1  = &num2;
	scanf("%d %d",pointer,pointer1);
	printf("Original numbers are: %d %d\n\n",*pointer,*pointer1);
	int temp = *pointer;
	*pointer = *pointer1;
	*pointer1 = temp;
	printf("Swapped Numbers are: %d %d\n\n\n",*pointer,*pointer1);
	// Passing values to the members of a structure
	// Printing original Values
	struct Animal Lion = {4,200000,5};
//	ptr->price = 300000;
    printf("Printing original Values\n\n");
	printf("The legs of a lion are: %d\n",Lion.legs);
	printf("The children of a lion are: %d\n ",Lion.childen);
	printf("The price of a lion is: %d Frw\n\n\n",Lion.price);
	struct Animal *ptr = &Lion;
	ptr->legs = 12;
	ptr->childen = 32;
	ptr->price = 300000;
	printf("Printing Modified Values\n\n");
	printf("The legs of a lion are: %d\n",ptr->legs);
	printf("The children of a lion are: %d\n ",ptr->childen);
	printf("The price of a lion is: %d Frw\n",ptr->price);
	
}