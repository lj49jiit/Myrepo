#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main(){
    string s;
    cout<<"ENTER STRING = ";
    getline(cin,s);
    int n=s.length();
    reverse(s.begin(),s.end());
    cout<<"REVERSED STRING = "<<s;

}