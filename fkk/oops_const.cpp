#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
        void set();
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;  
    // e1.set(); 
    return 0;  
} 