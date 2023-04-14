#include "types.h"
#include "user.h"

int main(int argc, char** argv){

	int pid = fork();
	printf(1, "fork test 007.\n");
	
	if (pid = 0){
		//child
	}else{
		//parent
		wait();
	}

	exit();
	//never return
	return 0;

}
