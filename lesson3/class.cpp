#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    string job;
    int old;
    void print_person();
};

void Person::print_person() {
  cout << name << "「" << old << "歳、" << job << "です。」\n";
}

int main() {
  Person yasuno;

  yasuno.name = "楊野良智";
  yasuno.job = "エンジニア";
  yasuno.old = 21;

  yasuno.print_person();
  return 0;
}