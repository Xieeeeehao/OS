#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char buf[512];

void
cp(char *fd,char *result)
{
  int n;
  int fd_fd,result_result;
  
  fd_fd = open(fd,O_RDONLY);
  result_result = open(result,O_WRONLY|O_CREATE);
	
  if(fd_fd < 0){		//未识别文件报出错误信息
  printf(1,"Error open file");
  exit();
  }
  
	
  while((n = read(fd_fd, buf, sizeof(buf))) > 0) {
    if (write(result_result, buf, n) != n) {
      printf(1, "cp: write error\n");	//复制文件
      exit();
    }
  }
  if(n < 0){
    printf(1, "cp: read error\n");
    exit();
  }
}

int
main(int argc, char *argv[])
{
  cp(argv[1],argv[2]); //调用函数，传递参数
  exit();
}
