#include <stdio.h>
#include <unistd.h>  // For sleep()
#include <stdlib.h>  // For system()

enum TrafficLight { RED, YELLOW, GREEN };

void clearScreen() {
    // Use "clear" for Linux/macOS and "cls" for Windows
    system("cls");  // Use "cls" if running on Windows
}

int main() {
    enum TrafficLight light = RED;

    while (1) { // Infinite loop for continuous traffic light cycle
        clearScreen(); // Clear previous output

        switch (light) {
            case RED:
                printf("?? RED - Stop!\n");
                sleep(3);
                light = GREEN;
                break;
            case YELLOW:
                printf("?? YELLOW - Slow down!\n");
                sleep(2);
                light = RED;
                break;
            case GREEN:
                printf("?? GREEN - Go!\n");
                sleep(3);
                light = YELLOW;
                break;
        }
    }
    return 0;
}
