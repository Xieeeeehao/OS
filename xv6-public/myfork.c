#include "types.h"
#include "user.h"

#define STDIN 0
#define STDOUT 1
#define STDERR 2

int main(int argc, char* argv[]){

	fork();
	printf(STDOUT, "Hello world.\n");
	
	exit();
	return 0;

}
	
