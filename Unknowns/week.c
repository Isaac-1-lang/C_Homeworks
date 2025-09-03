#include <stdio.h>
// Enumerators in C,As integer constants
enum DaysOfWeek {
	Monday=1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
    Sunday
};
int main() {
	for(enum DaysOfWeek day=Monday;day<=Sunday;day++) {
		printf("%d\t",day);
}
	return 0;
}