#include <iostream>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");
  std::cout << "Ol�, mundo!" << std::endl;
  return 0;
}
