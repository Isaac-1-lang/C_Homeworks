#include <stdio.h>

int main() {
    char arr[] = "hello";
    printf("sizeof(arr): %zu\n", strlen(arr)); // Outputs 20 (entire array size) 
// strlen works on strings and while counting it does not include the null character at the end of the string
// strcpy is used to copy a given string from one array to another
char stringCpy[]="Hello people";
char strCpy[12];
strcpy(strCpy,stringCpy);
printf("%s\n",strCpy);
// string concatenation
char name[20]= "NIYOBYOSE Isaac";
char surName[20]= "Precieux";
strcat(name,surName);
printf("%s\n",name);

  return 0;
}