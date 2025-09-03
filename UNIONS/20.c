// A structure with nested unions in C

struct nested {
	union data {
       int intNum;
       float floatNum;
       	char alp;
       	char Name[20];
    }dataField;
    
    union Point
    {
    	int x;
    	int y;
    	int z;
	}pointField;
	union Point1 {
		float x1;
		float y1;
		float z1;
	}point1Field; 
};


int main() {
	struct nested *Structure = (struct nested *)malloc(sizeof(struct nested));
	Structure->dataField.alp = 'A';
	printf("The integer value is %d\n",Structure->dataField.alp);
//    Structure.point1Field.x1 = 23.78;
//    printf("The integer value is %d\n",Structure.point1Field.x1);
	
	return 0;
}