// Created by tde-sous on 08-03-2024.

#include "whatever.hpp"
#include <iostream>

int main() {
  int a = 651;
  int b = 6;
  std::cout << "BEFORE SWAP: a = " << a << " b = " << b << std::endl;
  ::swap<int>(a, b);
  std::cout << "AFTER SWAP: a = " << a << " b = " << b << std::endl;

  std::cout << "The min value between a(" << a << ") and b(" << b << ") is "
            << ::min<int>(a, b) << std::endl;

  std::cout << "The max value between a(" << a << ") and b(" << b << ") is "
            << ::max<int>(a, b) << std::endl;

  float c = 60.6123123;
  float d = 6.01;
  std::cout << "BEFORE SWAP: c = " << c << " d = " << d << std::endl;
  ::swap<float>(c, d);
  std::cout << "AFTER SWAP: c = " << c << " d = " << d << std::endl;

  std::cout << "The min value between c(" << c << ") and d(" << d << ") is "
            << ::min<float>(c, d) << std::endl;

  std::cout << "The max value between c(" << c << ") and d(" << d << ") is "
            << ::max<float>(c, d) << std::endl;
}

// int main( void ) {
//   int a = 2;
//   int b = 3;
//   ::swap( a, b );
//   std::cout << "a = " << a << ", b = " << b << std::endl;
//   std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//   std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//   std::string c = "chaine1";
//   std::string d = "chaine2";
//   ::swap(c, d);
//   std::cout << "c = " << c << ", d = " << d << std::endl;
//   std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//   std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//   return 0;
// }
