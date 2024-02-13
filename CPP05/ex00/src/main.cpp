// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"

int main()
{
  try
  {
    Bureaucrat BurA("other", 179);
  }
  catch (std::exception & e) {
    std::cout << "Exception Catched";
  }
}