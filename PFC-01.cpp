#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void A ()
{
  cout << "Hello" << endl;
}

void B (void (*ptr) ())
{
  ptr ();
}

int main ()
{
  void (*p) () = A;
  B (p);
  B (A);

  return 0;
}
