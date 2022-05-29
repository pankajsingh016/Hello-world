#include<iostream>
class B; 
class A 
{ 
        public: 
          void showB(B&); 
}; 

class B 
{ 
    private: 
      int b; 
    public: 
        void getdata() { b = 0; } 
        friend void A::showB(B& x); // Friend function 
}; 

void A::showB(B& x) //passing the objects as the reference object
{ 
    std::cout << "B::b = " << x.b; 

} 

int main() 
{ 

  A a; 
  B x; 
  x.getdata();
  a.showB(x); 
  return 0; 
}

//Press Shift + Tab to navigate to chat history.
