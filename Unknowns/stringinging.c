#include <stdio.h>
#include <string.h>

int main() {
    char str1[6] = "hello";
    char str2[5] = "hello";

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else if(strcmp(str1, str2) >=0) {
        printf("The strings one is greater are not equal.\n");
    } else {
    	printf("String 2");
	}

    return 0;
}
