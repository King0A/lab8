/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
using namespace std;
int age;
int height;
int bounty;
int main()
{
    cout<<"Enter your age: ";
    cin>>age;
    cin.ignore();
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>height;
        cin.ignore();
        if(height<=99)
            cout<<"Your character = Chopper";
        else if(height<=179)
            cout<<"Your character = Usopp";
        else{
            cout<<"Enter your bounty: ";
            cin>>bounty;
            cin.ignore();
            if(bounty>1100000000)
                cout<<"Your character = Zoro";
            else
                cout<<"Your character = Sanji";
            }
    }
    else if(age<=60){
        cout<<"Enter your bounty: ";
        cin>>bounty;
        cin.ignore();
        if(bounty>500000000)
            cout<<"Your character = Jinbe";
        else
            cout<<"Your character = Franky";
    }
    else{cout<<"Your character = Brook";}
    
}