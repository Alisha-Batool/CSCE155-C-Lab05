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
//make min function
int min(int x, int y, int z)
{
  int m= x < y ? x : y;
  m = m < z ? m :z ;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return ((r + g + b) / 3);
}

//make tograyscalelightness function
int toGrayScaleLightness(int r, int g, int b)
{   
   // int greyScale= (max(r,g,b) + min(r,g,b)) / 2;  
    //return greyScale; 
     return (max(r,g,b) + min(r,g,b)) / 2; 
}

//make tograyscaleluminosity function
int toGrayScaleLuminosity(int r, int g, int b)
{
  //int greyScale= (0.21*r + 0.72*g + 0.07*b);
  //return greyScale;
     return  round(0.21*r + 0.72*g + 0.07*b);
}
// make three function toSepia(Red, Green, Blue)
int toSepiaRed(int r, int g, int b)
{
   //int r_new= 0.393*r + 0.769*g + 0.189*b;
   //return r_new;
  return round(0.393*r + 0.769*g + 0.189*b);
}
int toSepiaGreen(int r, int g, int b)
{
   //int g_new= 0.349*r + 0.686*b + 0.168*b;
   //return g_new;
   return round(0.349*r + 0.686*g + 0.168*b);
}
int toSepiaBlue(int r, int g, int b)
{
  //int b_new= 0.72*r + 0.534*g + 0.131*b;
  //return b_new;
  return round(0.72*r + 0.534*g + 0.131*b);
}