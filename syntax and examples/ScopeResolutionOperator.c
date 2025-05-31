#include<iostream>
int m = 10;
int main()
{
  int m = 20;
  {
      int k = m;
      int m = 30;
      std::cout<<"We are in inner block";
      std::cout<<"k="<<k<<"\n";
      std::cout<<"m="<<m<<"\n";
      std::cout<<"::m="<<::m<<"\n";
   }

   std::cout<<"\n We are in outer block";
   std::cout<<"m="<<m<<"\n";
   std::cout<<"::m="<<::m<<"\n";

   return 0;

}

// syntax :- ::variable_name



