#include<iostream>
using namespace std;

int main()
{
    int n, pow, num;
    cout<<"enter a number\n";
    cin>>n;
    cout<<"enter its popwer\n";
    cin>>pow;
    num=n;
    for(int i=1; i<pow; i++)
    {
        num = num*n;
    }
    cout<<n<<" to the power "<<pow<<" is "<<num;
}