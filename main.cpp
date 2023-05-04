#include <iostream>
#include "imageio.h"
#include "tasks.h"

int main(){
  std::string input1 = "image1.pgm";
  std::string input2 = "image2.pgm";

  int img[MAX_H][MAX_W];
  int h, w;
  //task a
  invert(input1);

  //task b
  invert_half(input1);

  //task c
  box(input1);

  //task d
  frame (input2);

  return 0;
}