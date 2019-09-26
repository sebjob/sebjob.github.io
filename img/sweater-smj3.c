// (c) 2019 smj3
//This program will describe the appropriate clothing for an input temperature.
//It provides seven different responses depending on the temperature.

#include <stdio.h>

int main()
{
  int temperature = -30;

if (temperature >= 130 || temperature <= -40) {
  printf("\n\n Do not go outside!! \n\n");
} else if (temperature <= 130 && temperature > 100) {
  printf("\n\n Underwear...find AC!! \n\n");
} else if (temperature <= 70 && temperature > 50) {
  printf("\n\n long-sleeve shirts, t-shirts, jeans, shorts,light jackets are great options for today!  \n\n");
} else if (temperature <= 50 && temperature > 32) {
  printf("\n\n SWEATER WEATHER! \n\n");
} else if (temperature <= 32 && temperature > 0) {
  printf("\n\n Wear one heavy jacket and warm pants! \n\n");
} else if (temperature <= 0 && temperature > -40) {
  printf("\n\n Extreme cold! Wear layers, thick down jacket, sweatshirt, hat, and gloves!   \n\n");
} else {
  printf("\n\n Wear loose, light clothes. Shorts, dresses, tanks, and sandals are all optimal \n\n");
}
return 0;
}
