#include <iostream>
using namespace std;

template <class T>
T max_t(T a, T b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int i1 = 810;
  int i2 = 893;
  int m1 = max_t(i1, i2);
  cout << m1 << '\n';

  double d1 = 11.4;
  double d2 = 51.4;
  double m2 = max_t(d1, d2);
  cout << m2 << '\n';

  return 0;
}