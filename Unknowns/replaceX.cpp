#include <stdio.h>
#include <string.h>
int main(){
    int i;
    int counter=1;
    char name[500];
    printf("please enter your names\n");
    fgets(name,500,stdin);//this is to get the input of the user and keep it in name variable
    for( i=0;i<=23;i++){
            if(name[i]==32||name[i]==10){//32 is ascii code representing space and 10 represent newline character
            counter++;
            }
            if (counter==3){//if it is three it reaches to the second space or the end of line
                break;//we break as i is beyond directly the last char of second name
            }
}
name[i-1]='x';//to return on the last char of second name we go back by one and change it to x
printf("%s",name);
return 0;
}