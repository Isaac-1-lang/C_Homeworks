#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Function to reverse a string
void reverse_string(char *str, int len) {
	int start  = 0;
	int end = len -1 ;
	while(start < end) {
		// Swaping the characters
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
// Function to find lexicographically smallest string after op
void solve_test_case(int n, char *s) {
	int len  = strlen(s);
	// Create a reversed copy of s
	char s_reversed[len + 1];
	strcpy(s_reversed,len);
	// Case 1 Reverse and thenn append reversed string
	char option1[len * 2 + 1];
	strcpy(option1, s_reversed);
	strcat(option1,s_reversed);
	// Case 2 Just reverse the string
	char option2[len + 1];
	strcpy(option2,s_reversed);
	
	// Compare the original string, option1,option2 lexicographically
	if(strcmp(s,option1) <= 0 && strcmp(s, option2) <= 0) {
		printf("%s\n",s);
		
	} else if(strcmp(option1,option2) <= 0 ) {
		printf("%s\n",option1);
	} else {
		printf("%s\n",option2);
	}
	}
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		char s[101];
		scanf("%d",&n);
		scanf("%s",s);
		if(n%2 ==0) {
			solve_test_case(n,s);
			
		} else {
			printf("The number must not be odd");
		}
	}
	return 0;
}