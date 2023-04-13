#include <iostream>

#include "lib.hpp"

struct Singleton {
  Singleton() {
    std::cout << "Constructor" << std::endl;
  }

  int func(int arg) const {
    return arg + 1;
  }

  ~Singleton() {
    std::cout << "Destructor" << std::endl;
  }
};

static inline const Singleton instance = {};

int lib_func(int arg) {
  return instance.func(arg);
}
