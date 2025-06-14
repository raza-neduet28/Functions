#include<iostream>
using namespace std;
double ftoc(double temp)
{
    return(temp-32.0)*(5.0/9.0);
}
double ctof(double temp)
 {
    return (temp*(9.0/5.0) + 32.0);
}
double convertTemp(double temp, char scale)
 {
     if(scale == 'c' || scale == 'C'){
cout<<"Converted from C to F"<<endl;
 return ctof(temp);
 }
     else if (scale == 'f' || scale == 'F')
 { cout<<"Converted from F to C"<<endl;
 return ftoc(temp);
 }

  else
{
 cout<<"*****ERROR*****"<<endl<<"Invalid Scale"<<endl;
 return 0;
 }
 }
 int main()
 {
 double act_temp, conv_temp;
 char conv_to;
 cout<<"Enter temperature and unit to convert to : ";
 cin>>act_temp>>conv_to;
 conv_temp=convertTemp(act_temp,conv_to);
 cout<<"The converted temperature is "<<conv_temp<<endl;
 return 0;}
