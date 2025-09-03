#include <stdio.h>
int add(int *p,int *z) {
  return  *p + *z;
}

int main() {
	while (1) {
	int n1,n2;
	printf("n1");
	scanf("%d",&n1);
	printf("n2");
	scanf("%d",&n2);
	int result = add(&n1,&n2);
	printf("addition: %d\n",result);
}
	return 0;

}