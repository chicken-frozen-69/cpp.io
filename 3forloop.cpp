#include<iostream>
#include<vector>
using namespace std;

int main()

{
    int a[5]={1,2,3,4,5};
    vector<int> v(5);
    v.at(0)=1;
    // v.at(1)=1;
    v[1]=1;
    v.at(2)=3;
    v.at(3)=1;
    v.at(4)=1;
    cout<<v[2]<<endl;
    v[5]=2;
    a[5]=7;
    cout<<a[5];
    //={1,2,3,4,5};
    // int count;
    // for(count=1; count<=1000;count++)
    // {
    //     cout<<(count*count)<<"\n";
    //    // cout<<endl;
    // }
}