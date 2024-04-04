#include <iostream>  
     using namespace std;  
     template<class T>
    class A   
    {  
	public:
         T a, b;  
         public:  
        void display(T,T);
};
  template<class T>

          void A<T>:: display(T a ,T b)  
          {  
                 cout << "Values of a and b are : " << a<<" ,"<<b<<endl;  
           }  
   
  
      int main()  
     {  
           A<int> d;  
           d.display(5,6);  
		A<char> d1;  
           d1.display('','b');
           return 0;  
     } 
