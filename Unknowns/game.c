#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//#include <arpa/inet.h>

#define PORT 12345
#define MAX_BUFFER 1024

int main() {
    int sock;
    struct sockaddr_in server_addr, client_addr;
    char buffer[MAX_BUFFER];
    socklen_t client_len = sizeof(client_addr);

    // Create UDP socket
    sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        perror("Socket creation failed");
        exit(1);
    }

    // Setup server address
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket to the port
    if (bind(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        exit(1);
    }

    printf("Server is listening for players...\n");

    while (1) {
        // Receive data from client (player)
        int recv_len = recvfrom(sock, buffer, MAX_BUFFER, 0, (struct sockaddr *)&client_addr, &client_len);
        if (recv_len < 0) {
            perror("Receive failed");
            continue;
        }

        buffer[recv_len] = '\0';  // Null terminate received string
        printf("Received from player: %s\n", buffer);

        // Respond to the client (e.g., send game update)
        sendto(sock, "Game update: Keep playing!", strlen("Game update: Keep playing!"), 0, (struct sockaddr *)&client_addr, client_len);
    }

    close(sock);
    return 0;
}
