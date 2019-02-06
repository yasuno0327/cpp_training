
#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    int number;
    int capacity;
    void show();
};

void Car::show() {
  cout << "この車のナンバーは" << number << "で" << capacity << "人乗りです。\n";
}

int main() {
  Car mycar;
  mycar.number = 114514;
  mycar.capacity = 810;
  mycar.show();
}
