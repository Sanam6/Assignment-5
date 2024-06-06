#include<iostream>
using namespace std;
int main()
{
int sum=0,ans=0,n=5,num;
cout<<"Enter the 5 decial numbers:"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>num;
    sum+=num;
}

while(sum!=0){
ans=ans*10+sum%2;
sum/=2;

}
cout<<"Sum of decimal numbers from 1 to 5: "<<ans;


return 0;
}