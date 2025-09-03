#include <stdio.h>
struct Animal {
	int price;
	int age;
	int height;
};
int main() {
//	printf("The original price:\t\t");
	
	struct Animal Lion = {23,678,32};
	struct Animal *ptr=&Lion;
	ptr->age = 23;
	printf("The original price: %d\n",ptr->age);
}