
#include <iostream>
#include "Person.h"
using namespace std;

void Person::setName(string n) {
  name = n;
}

void Person::setJob(string j) {
  job = j;
}

void Person::setOld(int o) {
  old = o;
}

void Person::print() {
  cout << name << "「" << old << "歳、" << job << "です。」\n";
}