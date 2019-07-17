#include <iostream> 
using namespace std;
#include<math.h>

int main() 
{ 
	long long int n;
	
    long long int test;
    cin>>test;
  cin>>n;
	int a[n];
    int temp=0;
	for(int g=0;g<test;g++){
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{ 
			if (n/i == i) 
				{
				    a[temp++]=i;
				    
				}  

			else 
				{
				  a[temp++]=i;
				  a[temp++]=n/i;
				}
		} 
	}
  	for(int i=0;i<temp-1;i++)
  {
      for(int j=i+1;j<temp;j++)
      {
          if(a[i]>a[j])
          {
              int temp1=a[i];
              a[i]=a[j];
              a[j]=temp1;
          }
      }
  }
 
  for(int i=0;i<temp;i++)
  {
      cout<<a[i]<<" ";
  }cout<<endl;}
	return 0; 
} 
