#include<iostream>
using namespace std;
 
int main() 
 
{ 
      char name[125]; 
      cout << "Enter your name" << endl; 
  
      cin.getline(name,125); 
 
      cout << name << endl; 
       
      return 0;
}
