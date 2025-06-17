 #include<iostream>
using namespace std;

 bool isVowel(char letter)
 {
 if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
 return true;
 else
 return false;
 }
int main()
 {
 char ltr;
 cout<<"Enter an alphabet in lower case only : ";
 cin>>ltr;
 if(isVowel(ltr))
cout<<ltr<<" is a vowel.";
 else
 cout<<ltr<<" is a consonant.";
 return 0;
 }
