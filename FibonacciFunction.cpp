#include<iostream>
 using namespace std;
 int fibonacci(int num);
 int main(void)
 {
 int a,b;
 cout<<endl<<"Enter the Fibonacci number you wish to find:\n";
 cin>>a;
 b=fibonacci(a);
 cout<<"\nTerm "<<a<<" of Fibonacci sequence is "<<b<<endl;
 return 0;
 }
 int fibonacci(int num)
 {
 if(num==0)
 {
 return 0;
 }
 if(num==1)
 {
 return 1;
 }
 if(num>1)
 {
 return fibonacci(num-1)+fibonacci(num-2);
 }
 }
