#include <iostream>


int main(void)
{
#if 0
  char character;
  short short_intiger;

  int integer;

  float  floating_point_precision;
  double double_floating_precision;

  unsigned char uc;
  unsigned short usi;
  unsigned int ui;

  std::cout << "Sizeof char  = (" << sizeof (character) << ")" << std::endl << "Alignof char = (" << alignof (character) << ")" << std::endl;
  std::cout << "Sizeof char  = (" << sizeof (char) << ")" << std::endl << "Alignof char = (" << alignof (char) << ")" << std::endl << std::endl;

  std::cout << "Sizeof short  = (" << sizeof (short_intiger) << ")" << std::endl << "Alignof short = (" << alignof (short_intiger) << ")" << std::endl;
  std::cout << "Sizeof short  = (" << sizeof (short) << ")" << std::endl << "Alignof short = (" << alignof (short) << ")" << std::endl << std::endl;

  std::cout << "Sizeof int  = (" << sizeof (integer) << ")" << std::endl << "Alignof int = (" << alignof (integer) << ")" << std::endl;
  std::cout << "Sizeof int  = (" << sizeof (int) << ")" << std::endl << "Alignof int = (" << alignof (int) << ")" << std::endl << std::endl;

  std::cout << "Sizeof float  = (" << sizeof (floating_point_precision) << ")" << std::endl << "Alignof float = (" << alignof (floating_point_precision) << ")" << std::endl;
  std::cout << "Sizeof float  = (" << sizeof (float) << ")" << std::endl << "Alignof float = (" << alignof (float) << ")" << std::endl << std::endl;

  std::cout << "Sizeof double  = (" << sizeof (double_floating_precision) << ")" << std::endl << "Alignof double = (" << alignof (double_floating_precision) << ")" << std::endl;
  std::cout << "Sizeof double  = (" << sizeof (double) << ")" << std::endl << "Alignof double = (" << alignof (double) << ")" << std::endl << std::endl;

  std::cout << "Sizeof unsigned char  = (" << sizeof (uc) << ")" << std::endl << "Alignof unsigned char = (" << alignof (uc) << ")" << std::endl;
  std::cout << "Sizeof unsigned char  = (" << sizeof (unsigned char) << ")" << std::endl << "Alignof unsigned char = (" << alignof (unsigned char) << ")" << std::endl << std::endl;

  std::cout << "Sizeof unsigned short  = (" << sizeof (usi) << ")" << std::endl << "Alignof unsigned short = (" << alignof (usi) << ")" << std::endl;
  std::cout << "Sizeof unsigned short  = (" << sizeof (unsigned short) << ")" << std::endl << "Alignof unsigned short = (" << alignof (unsigned short) << ")" << std::endl << std::endl;

  std::cout << "Sizeof unsigned int  = (" << sizeof (ui) << ")" << std::endl << "Alignof unsigned int = (" << alignof (ui) << ")" << std::endl;
  std::cout << "Sizeof unsigned int  = (" << sizeof (unsigned int) << ")" << std::endl << "Alignof unsigned int = (" << alignof (unsigned int) << ")" << std::endl << std::endl;
#else
  char c1;
  std::cout << "Alignment of char 'c1' is " << alignof c1 << std::endl;

  alignas (int) char c2;
  std::cout << "Alignment of char 'c2' is " << alignof c2 << std::endl;
#endif
  return EXIT_SUCCESS;
}
