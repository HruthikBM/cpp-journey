#include<iostream>
#include <algorithm> 
using namespace std;
int* del(int *arr,int n,int x)
{
for(int i=n;i<n-1;i++)
{
	arr[n]=arr[n+1];
}
return arr;
}
int* rem(int *arr,int n,int q)
{
	int res;
  for(int i=0;i<n;i++)
  {
  	if(arr[i]%3==1||arr[i]%3==2)
  	{
  		int ch=arr[i]%3;
  		if(q==2&&ch==2)
  		{
 	        arr=del(arr,n,i);
 	        break;
  		}
  		if(arr[i]%3==1&&q==2)
  		{
  			arr=del(arr,n,i);
  			n--;
            rem(arr,n,i);
  			break;
  		}
  		if(arr[i]%3==1&&q==1)
  		{
  			arr=del(arr,n,i);
  			
  			break;
  		}
  	}
  	 

  }
  return arr;
}
int sum(int*arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++) {
		sum+=arr[i];
	}
	return sum%3;
}

int find(int*arr,int n)
{
	int rv;
     rv=sum(arr,n);
     if(rv==2)
     {
     	int q;
     	q=rv;
         arr= rem(arr,n,q);  
         n--;
     }
     for(int i=0;i<n;i++)
     {
     	cout<<arr[i];
     }
     cout<<endl;
/*     {

     }
     else if(rv==0)
     {

     }*/
     return 0;
}
int main()
{
	 int arr[] = {4 , 4 , 1 , 1 , 1 , 3} ; 
	 int n=sizeof(arr)/sizeof(arr[0]);
	 sort(arr,arr+n);
	 find(arr,n);
	 return 0;
}