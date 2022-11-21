// wite-vs-example.cpp : Defines the entry point for the application.
//

#include <wite/string.hpp>

#include <iostream>

int main() {
  const auto words = wite::string::split("Hello Wite");

  for (const auto& word : words) {
    std::cout << word << std::endl;
  }

  return 0;
}
