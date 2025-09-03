// Swapping inputs from the user
#include <stdio.h>


//void swapping(int *a,int *b) {
//	int temp= *a;
//	*a=*b;
//	*b=temp;
//	printf("Swapped numbers are %d and %d\n",*a,*b);
//}
//
//int main() {
////	int a,b;
////	printf("Enter first number: ");
////	scanf("%d",&a);
////	printf("Enter second number: ");
////	scanf("%d",&b);
////	printf("\n");
////	printf("Initial numbers are %d and %d\n",a,b);
////	swapping(&a,&b);
//#include <stdio.h>

int main() {
   int n=12;
   int *ptr=&n;
   printf("%p\n\n",ptr);
   printf("%p\n\n",ptr+1);
   printf("%p",ptr+2);
   printf("%p",ptr+3);
    
    return 0;
}
