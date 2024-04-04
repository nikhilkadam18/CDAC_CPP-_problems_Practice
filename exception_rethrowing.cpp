#include <iostream> 
using namespace std; 
  
void help() 
{ 
    try { 
        throw 10; 
    } 
    catch (...) { 
        cout << "First throw called\n"; 
        throw 0; 
    } 
} 
  
int main() 
{ 
  
    try { 
        help(); 
    } 
    catch (int x) { 
        cout << "Rethrowing throw called\n"; 
    } 
  cout<<"end\n";
    return 0; 
}
