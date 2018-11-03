#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,ele,flag=0,temp;
int m,min,max;
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
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cin>>ele;
min=0;
max=n-1;
m=(min+max)/2;
if(min<max)
{
    for(i=0;i<n;i++)
    {
        if(a[m]==ele)
        {
            cout<<ele<<m+1;
            flag=1;
            break;
        }
        else if(a[m]>ele)
        {
            max=m-1;
        }
        else if(a[m]<ele)
        {
            min=m+1;
        }
        m=(min+max)/2;
    }
}
if(flag==0)
return 0;
}
