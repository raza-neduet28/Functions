#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
int main(){
int sq;
cout<<"Enter the number to find its square :";
cin>>sq;
cout<<"Square of "<<sq<< " is:"<<square(sq);
}
