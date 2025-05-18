#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,4,5,7,3};
    int ans = INT_MAX;


    for(int i=0;i<5;i++)
    {
        if (arr[i]<ans)
        ans = arr[i];

        
    }
    cout<<ans<<endl;

    


// Maximum number

 ans = INT_MIN;

 for(int i=0;i<5;i++)
{
    if(arr[i]>ans)
    ans=arr[i];
}

cout<<ans;

}