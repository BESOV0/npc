#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {
  NDL_Init(0);
  int w, h;
  //int i = 0x00ffffff;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  /*
  NDL_Init(0);
  void *bmp1 = BMP_Load("/share/pictures/slides-0.bmp", &w, &h);
  //printf("w is %d\n",w);
  assert(bmp1);
  NDL_OpenCanvas(&w, &h);
  //printf("w is %d\n",w);
  NDL_DrawRect(bmp1, 0, 0, w, h);
  free(bmp1);
  NDL_Quit();
  while(1);
  */
  return 0;
}
