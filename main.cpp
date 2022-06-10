#include <iostream>
using namespace std;

int main()
{
  double primes[] = { 2, 3, 5, 7, 11, 13 };
  double* p = primes + 3;
  cout << p << " " << *p << endl;
  cout << primes[1] << endl;
  cout << primes + 1 << endl;
  cout << *(primes + 1) << endl;
  cout << p[1] << endl;
  cout << p + 1 << endl;

  int number = 0;
  int* ptr_num = &number;
  *ptr_num = 60;
  number = 80;
  cout << *ptr_num << endl;

  int spark;
  int *q;
  q = &spark;
  cout << q << endl;
  q += 2;
  cout << q << endl;

  int i = 17;
  int *r = &i;
  *r = 98;
  cout << i;
  return 0;
}