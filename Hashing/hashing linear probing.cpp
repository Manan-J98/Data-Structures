#include<iostream>
using namespace std;
int i=0;

int hash(int key,int size)
{
	return key%size;
}

int l_prob(int arr[],int hi,int size)
{
	if(arr[hi]!=0)
	{
		i++;
		return (hi+i)%size;
	}
	else
		return hi;
}
int main()
{
	int n,hashIndex,key,k;
	cin>>n;
	int arr[n]={0};
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>key;
		int hashIndex=hash(key,n);
		hashIndex=l_prob(arr,hashIndex,n);
		arr[hashIndex]=key;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
