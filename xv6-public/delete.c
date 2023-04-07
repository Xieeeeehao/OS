#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])	//such: delete  1.txt    2.txt
{								//		argv[0] argv[1] argv[2]
  int i;						//number:  1       2       3

  if(argc < 2){					//<2 no file			
    printf(2, "Usage: rm files...\n");
    exit();
  }

  for(i = 1; i < argc; i++){	//argv[1].... rm
    if(unlink(argv[i]) < 0){
      printf(2, "rm: %s failed to delete\n", argv[i]);
      break;
    }
  }

  exit();
}
