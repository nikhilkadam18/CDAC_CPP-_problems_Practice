#include<iostream>
using namespace std;

string convert(string str)
{
  for (int i = 0; i < 1; i++) 
  {
    
      // If it is in lower-case
      if (str[i] >= 'a' && str[i] <= 'z') 
      {
        // Convert into Upper-case
        str[i] = (char)(str[i] - 'a' + 'A');
      }
    }
  return str;
}
int main()
{
  string str = "nikhil kadam";
  cout << (convert(str));
  return 0;
}
