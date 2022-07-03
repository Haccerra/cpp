/*
 * (1) Write a C++ program that prompts the user to enter 3 integer values, and it displays the mean of the three values.
 *
 * Please enter three integer values: 34 20 8
 * The mean of the three values: 34, 20, and 8 is 20.677
 */

#include <iostream>

/* Function declarations. */
void get_user_vals(int* a, int* b, int* c);
float calculate_mean(int a, int b, int c);

int main(void)
{
  int n1, n2, n3;

  std::cout << std::endl;
  std::cout << "------------------------------------------------------------" << std::endl;
  std::cout << "Program to calculate the mean value of three integer numbers" << std::endl;
  std::cout << "------------------------------------------------------------" << std::endl << std::endl;

  get_user_vals(&n1, &n2, &n3);
  float result = calculate_mean(n1, n2, n3);

  std::cout << "Mean value is: " << result << std::endl;

  return 0;
}

/* Function definitions. */
void get_user_vals(int* a, int* b, int* c)
{
  int n1, n2, n3;
  bool nan1 = false, nan2 = false, nan3 = false;

  std::cout << "Enter N1: "; std::cin >> n1; if (false != std::cin.fail()) nan1 = true;
  std::cout << "Enter N2: "; std::cin >> n2; if (false != std::cin.fail()) nan2 = true;
  std::cout << "Enter N3: "; std::cin >> n3; if (false != std::cin.fail()) nan3 = true;

  if (false != nan1) std::cerr << std::endl << "Not a number -> 1st input!" << std::endl;
  if (false != nan2) std::cerr << std::endl << "Not a number -> 2nd input!" << std::endl;
  if (false != nan3) std::cerr << std::endl << "Not a number -> 3rd input!" << std::endl;

  if ((false != nan1) || (false != nan2) || (false != nan3)) exit(1);

  *a = n1; *b = n2; *c = n3;
}

float calculate_mean(int a, int b, int c)
{
  return (float)(a+b+c)/3;
}
