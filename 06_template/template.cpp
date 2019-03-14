// function template
#include <iostream>
using namespace std;
// template is good when user want functions over loading and in case to make function generic for several data types
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  float l=10.0,m=10.0,n;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  n=sum<float>(l,m);
  cout << k << '\n';
  cout << h << '\n';
  cout << n << '\n';
  return 0;
}
