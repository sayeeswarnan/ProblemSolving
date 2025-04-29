#include<iostream>
using namespace std;

int main(){
char word;
cout<<"Enter the Character:";
cin>>word;
if(word == 'a' || word == 'e' || word == 'i'|| word == 'o' || word == 'u'){
    cout<< word <<" :It is Vowel";
}
else{
    cout<< word << " : It is not Vowel";
}
}
