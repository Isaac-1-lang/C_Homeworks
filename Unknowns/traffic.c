// Traffic lights
#include <stdio.h>

enum trafficLight {
	Green,
	Yellow,
	Red
};

int main() {
	enum trafficLight signal = Red;
	while(1) {
		switch(signal) {
			case Red:
				printf("Red-Stop, Please!!!\n");
				sleep(3);
				signal=Green;
			break;
			case Yellow:
				printf("Yellow-Slow down, Please!!!\n");
				sleep(3);
				signal=Red;
			break;
			case Green:
				printf("Green - Go Now, Please!!!\n");
				sleep(3);
				signal=Yellow;
			break;
		}
		
	}
	return 0;
}