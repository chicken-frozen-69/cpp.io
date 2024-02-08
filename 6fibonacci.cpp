#include<iostream>
using namespace std;

int main()
{
    unsigned long long int n, i, pre, current, last;
    last=0;
    pre=1;
    current=1;
    cout<<"enter the nth term\n";
    cin>>n;
    for(i=1; i<n; i++)
    {
        current = pre+last;
        last=pre;
        pre=current;
    }
    cout<<"the "<<n<<"th term of the fibonacci series is "<<current;
}