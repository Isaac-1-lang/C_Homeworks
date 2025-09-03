// Supplying values to the union using pointers and memory allocation(malloc)

union nested {
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
	union nested *dataFieldMan = (union nested *)malloc(sizeof(union nested));
	

	dataFieldMan->dataField.floatNum = 23.32;
	
	dataFieldMan->point1Field.y1 = 34;
	
	
	printf("The float is %.2f",dataFieldMan->point1Field.y1);
	return 0;
}