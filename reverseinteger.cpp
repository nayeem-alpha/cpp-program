#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your number :"<<endl;
    cin>>x;
    int ans =0,rem;
    while(x!=0)
    {
        rem = x %10;
        x = x/10;
        if(ans>INT_MAX/10 || ans <INT_MIN/10) 
        return 0;
        ans = ans*10+rem;
    }
    cout<<ans;
    return 0;
}