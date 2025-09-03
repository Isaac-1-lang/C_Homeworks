#include <stdio.h>
int main()
{
char name[30];
printf("Enter name: ");
gets(name); // read string
printf("Your Name is: ");
puts(name); // display string
printf("\n");
// String length
    char name[50] = "hello people in my country";
    printf("%zu\n", sizeof(name)); // Print the size of the array
    return 0;


}