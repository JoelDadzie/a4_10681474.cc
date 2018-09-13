#include <iostream>

using namespace std;
  int gcd (int huge, int little)
{
 int result;
 result=little%huge;
 if (result==0)
    {
        return little; 
    }
  else
   {
    huge=little;
    little=result;
    gcd(little,huge);
   }
}
int main()
{
cout<<"Calculation of the GCF of two numbers"<<endl;
int large;
int small;
int newvar;
cout<<"enter the large number"<<endl;
cin>>large;
cout<<"enter the small number"<<endl;
cin>>small;
newvar=gcd(large,small);
cout<<newvar<<endl;

system ("PAUSE");
       return 0;
}