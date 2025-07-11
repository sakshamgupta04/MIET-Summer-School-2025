#include<iostream>
using namespace std;

int main(){

 //table(5,10);

 // cout<<fact(-4)<<endl;

 // cout<<sumNatural(5)<<endl;

 // cout<<sumNatural1(5)<<endl;

 int arr[5]={10,20,30,40,50};

 // cout<<*arr<<endl;

 // cout<<"array sum: "<<arraySum(arr,sizeof(arr)/sizeof(int))<<endl;

 // cout<<"array sum: "<<arraySum2(arr,sizeof(arr)/sizeof(int))<<endl;

 // cout<<"array sum: "<<arraySum1(arr,sizeof(arr)/sizeof(int))<<endl;

 //to search an element in an array and return the index using recurrsion

 // cout<<"Index:" <<SearchArray(arr,(sizeof(arr)/sizeof(int)),20)<<endl;

 // cout<<"INDEX: "<<BinSearch(arr,(sizeof(arr)/sizeof(int)),0,50)<<endl;

 char str[100]="";

 cin>>str;

 cout<<"Original str: "<<str<<endl;

 replace(str);

 cout<<"After Replace: "<<str<<endl;

 cout<<"Ascii Values:\n";

 ascii();

 return 0;

}