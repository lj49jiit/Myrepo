#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cout<<"ARRAY RANGE = ";cin>>n;
    int arr[n];cout<<"ENTER "<<n<<" INTEGERS =";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum=0,avg=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"SUM = "<<sum<<endl;
    cout<<"AVERAGE = "<<avg<<endl;
}