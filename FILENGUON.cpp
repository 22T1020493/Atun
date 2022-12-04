// Doi so giay ra dong ho
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; cin>>n;
int temp, h,m,s;
s=n%60;
temp=n/60;
m=temp%60;
h=temp/60;
if(h/10==0) cout<<"0"<<h<<":";
else cout<<h<<":";
if(m/10==0) cout<<"0"<<m<<":";
else cout<<m<<":";
if(s/10==0) cout<<"0"<<m;
else cout<<s<<endl;

}
