#include "types.h"
#include "user.h"

int main(int argc,char** argv){

	if(argc != 2){
		printf(1, "Usage:\n");
		printf(1, "%s <num_ticks>\n", argv[0]);
	}
	
	//argv[1]
	
	int ticks = atoi(argv[1]);
	sleep(ticks);
	
	exit();

}
