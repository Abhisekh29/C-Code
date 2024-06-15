#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main()
{
	char ch[1024] = {0};

	int network_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	int connect_socket = connect(network_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	if(connect_socket == -1)
	{
		printf("Error connecting socket\n");
		exit(1);
	}	
	
	for(int i = 0; i < 5; i++)
	{
		memset(ch, 0, sizeof(ch));	
		recv(network_socket, &ch, sizeof(ch), 0);
		printf("The received data from the server is: %s", ch);
		printf("\nEnter message to send: ");
		fgets(ch, sizeof(ch), stdin);
		send(network_socket, ch, strlen(ch), 0);
	}
	
	close(network_socket);
	return 0;
}
