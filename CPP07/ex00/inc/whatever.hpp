// Created by tde-sous on 08-03-2024.
#ifndef WHATEVER_HPP
#define WHATEVER_HPP



class whatever {
public:
  template <typename T>
  void swap(T &num1, T &num2) {
      T tmp = num1;
      num1 =  num2;
      num2 = tmp;
  };
  template <typename T>
    T min(T &num1, T &num2) {
     return (num1 < num2 ? num1 : num2);
  };
};



#endif //WHATEVER_HPP