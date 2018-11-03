#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,m,pos,e,c,flag=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cin>>c;
while(c!=0)
{
    switch(c)
    {
    case 1:
        cin>>pos>>e;
        m=n-pos-1;
        for(i=n;i>=m;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=e;
        n=n+1;
        break;
    case 2:
        cin>>pos;
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        break;
    case 3:
        flag=0;
        cin>>e;
        for(i=0;i<n;i++)
        {
            if(a[i]==e)
            {
                cout<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cin>>c;
}
}

