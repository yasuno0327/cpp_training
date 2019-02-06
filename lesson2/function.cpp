#include <iostream>
using namespace std;

int max(int a, int b) {
  cout << "int版max関数が呼ばれました\n";
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

double max(double a, double b) {
  cout << "double版max関数が呼ばれました\n";
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int i1 = 810;
  int i2 = 893;
  int m1 = max(i1, i2);
  cout << m1 << '\n';

  double d1 = 11.4;
  double d2 = 51.4;
  double m2 = max(d1, d2);
  cout << m2 << '\n';

  return 0;
}
