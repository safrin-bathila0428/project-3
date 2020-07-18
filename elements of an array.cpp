#include<iostream>
using namespace std;
int main()
{
int a[5],i;
cout<<"\n enter elements:";
for(i=0;i<5;i++)
cin>>a[i];
cout<<"\n you entered:";
for(i=0;i<5;i++)
cout<<"\n"<<*(a+i);
return 0;	
}
