#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter both the number"<<endl;
    cin>>a>>b;
    cout<<"enter the operators"<<endl;
    char op;
    cin>>op;
   switch (op)
   {
   case '+':
    cout<<"the sum of the two number is "<<a+b<<endl;
    break;
    case '-':
    cout<<"the subtraction of the two number is "<<a-b <<endl;
    break;  
    case '*':
    cout<<"the multiplication  of the two number is "<<a*b <<endl;
    break;  
    case '/':
    cout<<"the division of the two number is "<<a/b <<endl;
    break;  
   default:
   cout<<"wrong input"<<endl;

    break;
    
   }
   return 0;
}
