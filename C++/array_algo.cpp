#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6},arr[6];
    int s=sizeof(a)/sizeof(a[0]);
    all_of(a,a+s,[](int x) {return x>0;}) ? cout<<"1. all":cout<<"1. none";
    any_of(a,a+s,[](int x) {return x<0;}) ? cout<<"\n2. any":cout<<"\n2. none";
    find_if(a,a+s,[](int x) {return x=3;}) ? cout<<"\n3. find":cout<<"\n3. none";
    none_of(a,a+s,[](int x) {return x>6;}) ? cout<<"\n4. none":cout<<"\n4. none or more";
    copy_n(a,6,arr); cout<<"\n5. copy : ";
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    
    int b[10];
    iota(b,b+10,1);
    cout << "\nThe new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << b[i] << " ";
  
    return 0;
}
