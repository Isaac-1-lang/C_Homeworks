#include <stdio.h>
int main() {
	int numbers[]={23,30,45,60,50,543,32};
	int sum=0;
	for(int n=0; n<7;n++) {
		if(numbers[n] % 2== 0) {
			sum+=1;
		}
	}
	printf("Number of even number is : %d\n",sum);
	return 0;
}