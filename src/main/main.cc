#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  Solution s;
  string s1="(a+b)";
  bool b=s.checkvalidstring(s1);
  if(b==true)
    cout<<"true\n";
  else
    cout<<"false\n";

  return EXIT_SUCCESS;
}