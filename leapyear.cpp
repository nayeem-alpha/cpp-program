#include<iostream>
using namespace std;

int main(){
    int yr;
    cout<<"Enter the year :"<<endl;
    cin>>yr;
    if(yr%400==0)
    {
        cout<<"Its a leap year"<<endl;
    }
    else if (yr%4==0 && yr%100!=0)
    {
        cout<<"Its a leap year"<<endl;
    }
    else
       cout<<"Not a leap year"<<endl;
    return 0;
}