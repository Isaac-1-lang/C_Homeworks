#include <stdio.h>
// Union for holding anonymous function
union anonymous {
	struct {
		int maMarks;
		int phMakrs;
		int fopMarks;
	};
	int geoMarks;
};
int main() {
	union anonymous data;
	data.fopMarks = 12;
	data.maMarks = 43;
	data.phMakrs = 45;
	data.geoMarks = 32;
	printf("%d As geography marks\n",data.geoMarks);
	printf("%d As PHYSICS marks\n",data.phMakrs);
	printf("%d As FOP marks\n",data.fopMarks);
	printf("%d As geography marks\n",data.geoMarks);
	printf("%d As Math marks\n",data.maMarks);
	return 0;
}