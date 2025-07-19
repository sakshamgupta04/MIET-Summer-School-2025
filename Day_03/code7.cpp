#include<iostream>
using namespace std;

int arraySum( int arr[],int n)
{
	static int i=0;
	if( i==n)
	{
		return 0;
	}
	return arr[i++]+arraySum(arr,n);
} 
int main(){
	
	int arr[5]={10,20,30,40,50};
	cout<<"array sum: "<<arraySum(arr,5)<<endl;;
	return 0;
}