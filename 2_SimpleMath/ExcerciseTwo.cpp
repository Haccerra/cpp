/*
 * (2) Write a C++ program that prompts the user to enter the radius of a circle, and it computes and displays the diameter, the circumference, and the area of the circle.

 * Please enter the radius of the circle (cm): 2.0
 * The radius of a circle = 2.0 cm.
 * The diameter of the circle = 4.0 cm.
 * The circumference of the circle = 12.57 cm
 * The area of the circle = 12.57 cm^2.
 */

#include <iostream>
#include <math.h>

/* Function declarations */
void get_values(float* r);
void calculate(float r);


int main(void)
{
  float radius;

  std::cout << "---------------------------------------------------------------" << std::endl;
  std::cout << "Program to calculate information regarding circle circumference" << std::endl;
  std::cout << "---------------------------------------------------------------" << std::endl;

  get_values(&radius);
  calculate(radius);

  return EXIT_SUCCESS;
}

/* Function definitions */
void get_values(float* r)
{
  float radius;

  std::cout << "Please enter the radius of the circle (cm): ";
  std::cin  >> radius;
  std::cout << std::endl;

  *r = radius;
}

void calculate(float r)
{
  std::cout << "The radius of a circle = " << r << std::endl;
  std::cout << "The diameter of the circle = " << 2*r << std::endl;
  std::cout << "The circumference of the circle = " << 2*r*M_PI << std::endl;
  std::cout << "The area of the circle = " << (r*r*M_PI) << std::endl;
}
