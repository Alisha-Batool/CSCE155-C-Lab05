#include<stdio.h>
#include<math.h>
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}


int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!

  return (r + g + b) / 3;
}
//make min function
int min(int x, int y, int z){
      
}
//make tograyscalelightness function
int toGreyScaleLightness(int R, int G, int B){

}
//make tograyscaleluminosity function
int toGreyScaleLuminosity(int R, int G, int B){

}
// make three function toSepia(Red, Green, Blue)
int toSepiaRed(){

}
int toSepiaGreen(){

}
int toSepiaBlue(){
  
}