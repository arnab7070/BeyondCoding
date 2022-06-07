// Write a C program to find area of a triangle Area of triangle=
// √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄) .Where a, b and c are three sides of the triangle and 𝑠 = (𝑎+𝑏+𝑐/2)

#include <stdio.h>
#include <math.h>
int main()
{
  int i=0;
  for(i=0; i<10000; i++){
  float a, b, c, s, area;

  printf("Enter sides of a triangle\n");
  scanf("%f%f%f", &a, &b, &c);

  s = (a+b+c)/2; // Semiperimeter

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %f\n", area);
  printf("\n");
  printf("______________________Ok let's re-run the program______________________\n");
  printf("\n");
  }
  return 0;
}
