
#include <iostream>
#include <string>
using namespace std;

class Person {
  private:
    string name;
    string job;
    int old;
  public:
    void setName(string n);
    void setJob(string j);
    void setOld(int o);
    void print();
};

void Person::setName(string n) {
  name = n;
}

void Person::setJob(string j) {
  job = j;
}

void Person::setOld(int o) {
  if (o < 0) {
    cout << "エラー: 不正な値\n";
    old = 0;
  } else {
    old = o;
  }
}

void Person::print() {
  cout << name << "「" << old << "歳、" << job << "です。」\n";
}

int main() {
  Person person;

  person.setName("田所浩二");
  person.setJob("学生");
  person.setOld(24);

  person.print();
  return 0;
}