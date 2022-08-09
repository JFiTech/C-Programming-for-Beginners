/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM PRINTS OUT THE AREA AND PERIMETER OF A RECTANGLE TO THE SCREEN
	DATE: DECEMBER 29TH, 2021
*/

#include <stdio.h>

int main() {
  // DECLARE VARIABLES
  double width = 0;
  double height = 0;
  double perimeter = 0;
  double area = 0;

  //REQUEST USER INPUT
  printf("Enter the height and width of the triangle: ");
  scanf("%lf %lf", &height, &width);

  //PERIMETER AND AREA LOGIC
  perimeter = (height + width) * 2.0;
  area = height * width;

  //FINAL PRINT STATEMENTS
  printf("\nThe height is: %.2lf and the width is: %.2lf \nThe perimeter is: %.2lf\n", height, width, perimeter);
  printf("\nThe height is: %.2lf and the width is: %.2lf \nThe area is %lf", height, width, area);

  return 0;

}
