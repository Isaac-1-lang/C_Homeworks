#include <stdio.h>
int main() {
	char letters[2][15][15]= {
   {
   	{'A','B','C','D','E'},
	{'F','G','H','K','L'},
},
    {
    	{'G','M','N','P','O','C'},
    	{'Z','X','Q','W','Y','K'},
    	{'r','g','j','d','r','d'},
	}
	
	};
	printf("%c",letters[1][2][3]);
}