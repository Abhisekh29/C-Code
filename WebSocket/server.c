#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>stram

int main()
{
	char ch[1024] = {0};
	
	int server_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	
	listen(server_socket, 5);
	
	int client_socket = accept(server_socket, NULL, NULL);
	
	for(int i = 0; i < 5; i++)
	{
		printf("Message: ");
		fgets(ch, sizeof(ch), stdin);
		send(client_socket, ch, strlen(ch), 0);
		memset(ch, 0, sizeof(ch));
		recv(client_socket, &ch, sizeof(ch), 0);
		printf("Message received: %s\n", ch);
	}
	
	close(server_socket);
	return 0;
}
