#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	char *message={"1100111"};
	int listen_1=socket(PF_INET,SOCK_STREAM,0);
	struct sockaddr_in name;
	name.sin_family=PF_INET;
	name.sin_port=(in_port_t)htons(25563);
	name.sin_addr.s_addr=htonl(INADDR_ANY);
	bind(listen_1,(struct sockaddr *) &name,sizeof(name));

	listen(listen_1,5);
	puts("wait for connect");
	while(1)
	{
		struct sockaddr_storage client_addr;
		unsigned int address_size=sizeof(client_addr);
		int a=accept(listen_1,(struct sockaddr *) &client_addr,&address_size);
		send(a,message,strlen(message),0);
		close(a);
	}
}
