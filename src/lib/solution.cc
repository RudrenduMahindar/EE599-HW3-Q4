#include "solution.h"
#include <stack>
#include <string>
using namespace std;

bool Solution::checkvalidstring(string& s) 
{ //return "**** Hello World ****"; 
  stack<char> st;
  for(auto c : s)
  {
    if(c=='(' || c=='[' || c=='{')
      st.push(c);
    else if((c==')' && st.top()=='(') || (c==']' && st.top()=='[') || (c=='}' && st.top()=='{'))  
      st.pop();    
  }
  
  if(st.size()==0)
    return true;
  else
    return false;
  
}

