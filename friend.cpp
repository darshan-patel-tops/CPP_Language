#include <iostream>

class Number {
  private:
    int num;
  public:
    Number(int n) : num(n) {}
    friend void swap(Number& a, Number& b);
    void display() {
      std::cout << "Number = " << num << std::endl;
    }
};

void swap(Number& a, Number& b) {
  a.num = a.num + b.num;
  b.num = a.num - b.num;
  a.num = a.num - b.num;
}

int main() {
  Number n1(5), n2(10);
  std::cout << "Before swapping:" << std::endl;
  n1.display();
  n2.display();
  swap(n1, n2);
  std::cout << "After swapping:" << std::endl;
  n1.display();
  n2.display();
  return 0;
}