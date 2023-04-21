#include "types.h"
#include "user.h"

#define STDIN 0
#define STDOUT 1
#define STDERR 2

static int s1_pipe_fds[2] = {-1, -1};
static int s2_pipe_fds[2] = {-1, -1};

int main(int argc, char* argv[]){

	pipe(s1_pipe_fds);
	pipe(s2_pipe_fds);
	
	int pid = fork();
	
	if(pid == 0){
		//child
		char ch;
		read(s1_pipe_fds[0], &ch, 1);
		if(ch == 'H'){
			printf(STDOUT, "Recieved ping\n");
		}
		write(s2_pipe_fds[1], "H", 1);
		printf(STDOUT, "pong\n");
	
	}else{
		//parent
		write(s1_pipe_fds[1], "H", 1);
		printf(STDOUT, "ping\n");
		char ch;
		read(s2_pipe_fds[0], &ch, 1);
		if(ch == 'H'){
			printf(STDOUT, "Recieved pong\n");
		}
		
		wait();
	}
	
	exit();
}
	
