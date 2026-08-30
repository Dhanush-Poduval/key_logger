#include <stdio.h>
#include <stdlib.h>
#include "eventcode_converter.h"
#include <linux/input.h>
#include <linux/input-event-codes.h>
#include <unistd.h>

void event_converter(int code){
  if(2<=code  && code<=9){
      printf("Key pressed : %d \n",code-1);
  }else if(code==11){
    printf("Key pressed : %d \n",0);
  }else if (code == KEY_A) {
      printf(" A\n");
  }else if (code == KEY_B) {
      printf(" B\n");
  }else if (code == KEY_C) {
      printf(" C\n");
  }else if (code == KEY_D) {
      printf(" D\n");
  }else if (code == KEY_E) {
      printf(" E\n");
  }else if (code == KEY_F) {
      printf(" F\n");
  }else if (code == KEY_G) {
      printf(" G\n");
  }else if (code == KEY_H) {
      printf(" H\n");
  }else if (code == KEY_I) {
      printf(" I\n");
  }else if (code == KEY_J) {
      printf(" J\n");
  }else if (code == KEY_K) {
      printf(" K\n");
  }else if (code == KEY_L) {
      printf(" L\n");
  }else if (code == KEY_M) {
      printf(" M\n");
  }else if (code == KEY_N) {
      printf(" N\n");
  }else if (code == KEY_O) {
      printf(" O\n");
  }else if (code == KEY_P) {
      printf(" P\n");
  }else if (code == KEY_Q) {
      printf(" Q\n");
  }else if (code == KEY_R) {
      printf(" R\n");
  }else if (code == KEY_S) {
      printf(" S\n");
  }else if (code == KEY_T) {
      printf(" T\n");
  }else if (code == KEY_U) {
      printf(" U\n");
  }else if (code == KEY_V) {
      printf(" V\n");
  }else if (code == KEY_W) {
      printf(" W\n");
  }else if (code == KEY_X) {
      printf(" X\n");
  }else if (code == KEY_Y) {
      printf(" Y\n");
  }else if (code == KEY_Z) {
      printf(" Z\n");
  }else if(code==KEY_SPACE){
    printf(" \n");
  }else if(code==KEY_TAB){
    printf("\t");
  }else {
    printf("Uknown key pressed : %d \n",code);
  }
  return; 

}
