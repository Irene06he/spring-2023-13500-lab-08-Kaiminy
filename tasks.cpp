#include <iostream>
#include "imageio.h"
#include "tasks.h"
//task a

int height, width;

void invert(std::string input){
  int img[MAX_H][MAX_W];
  int j;
  int k;
  readImage(input, img, j, k); 
  int out[MAX_H][MAX_W];
  for (int row=0; row<j;row++){
      for (int col = 0 ; col < k ; col++){
    out[row][col]=255-img[row][col];
  }
}
 /* return;
  height=j;
  width=k;*/
  writeImage("taskA.pgm",out, j, k);
}

//task b
void invert_half(std::string input){
  int img[MAX_H][MAX_W];
  int j;
  int k;
  readImage(input, img, j, k); 
  int out[MAX_H][MAX_W]; 
  for (int row=0;row<j;row++){
    for (int col=0; col<k;col++)
  {
    if (col>k /2){
      out[row][col]=255-img [row][col];
    }
    else{
      out[row][col] = img[row][col];
    }
  }
}
    writeImage("taskB.pgm",out, j, k);
    }

    

//task c
void box(std::string input){
  int j;
  int k;
  int img [MAX_H][MAX_W];
  readImage(input, img, j, k); 
 
  for (int row= j/4; row<=((j/4)*3); row++){
    for (int col = k/4; col<= (k/4)*3; col++){
      img[row][col] = 255;
    }
  }
    writeImage("taskC.pgm",img, j, k);
}

//task d frame

void frame(std::string input){
  int j;
  int k;
  int img [MAX_H][MAX_W];
  readImage(input, img, j, k); 
 
  for (int row= j/4; row<=((j/4)*3);row++){
    for (int col = k/4; col <= (k/4)*3;col++){
      if (row == j/4 || row == ((j/4)*3) ){
        img[row][col] = 255;
  }
         else if (col == k/4 || col == ((k/4)*3)){
      img[row][col] = 255;
    }
  }
}

    writeImage("taskD.pgm",img, j, k);
    }
