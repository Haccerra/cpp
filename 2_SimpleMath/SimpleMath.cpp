#include <iostream>

/* Function declarations */
void get_numbers(int* a, int* b);
int addition(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b = 1);

int main(void)
{
  char input;
  int n1, n2;
  int result;
  bool error = false;

  get_numbers(&n1, &n2);

  std::cout << "Specify operation to be done: ";
  std::cin >> input;
  std::cout << std::endl;

  switch (input)
  {
    case '-': /* call substraction function   */ result =   substraction(n1, n2); break;
    case '+': /* call addition function       */ result =       addition(n1, n2); break;
    case '*': /* call multiplication function */ result = multiplication(n1, n2); break;
    case '/': /* call division function       */ result =       division(n1, n2); break;
    default: error = true; std::cerr << "Mathematical operator which was inputed is either not supported or not a valid operator." << std::endl;
  }

  if (false == error)
  {
    std::cout << std::endl;
    std::cout << "Result is: " << result << std::endl;
  }

  return 0;
}

/* Function definitions */
void get_numbers(int* a, int* b)
{
  int n1, n2;
  std::cout << "Input 1st number: ";
  std::cin  >> n1;
  std::cout << std::endl;
  std::cout << "Input 2nd number: ";
  std::cin  >> n2;
  std::cout << std::endl << std::endl;

  *a = n1;
  *b = n2;
}


int addition(int a, int b)
{
  return a+b;
}


int substraction(int a, int b)
{
  return a-b;
}


int multiplication(int a, int b)
{
  return a*b;
}


int division(int a, int b)
{
  return (b != 0) ? a/b : -1;
}
