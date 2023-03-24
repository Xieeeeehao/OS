#include "types.h"
#include "stat.h"
#include "user.h"

int 
sum(int a,int b)
{
	int s = 0;
	for(int i=a;i <= b;i++)
		s+=i;
		
	return s;
}

int
main(int argc, char *argv[])
{
  	printf(1, "%d\n", sum(1,100));
  	exit();
}
