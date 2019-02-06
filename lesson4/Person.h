#pragma once

#include <string>
using namespace std;

class Person {
  private:
    string name;
    string job;
    int old;
  public:
    void setName(string);
    void setJob(string);
    void setOld(int);
    void print();
};