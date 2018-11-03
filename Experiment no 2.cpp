#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,ele,flag=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cin>>ele;
for(i=0;i<n;i++)
{
    if(a[i]==ele)
    {
        cout<<ele<<i+1;
        flag=1;
        break;
    }
}
if(flag==0)
return 0;
}
