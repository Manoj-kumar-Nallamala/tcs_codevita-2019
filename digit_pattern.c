#include<stdio.h>
int main()
{
    int n,i;
scanf("%d",&n);
int a[n],bit[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    int k=a[i];
    int num[3];
    int p;
    num[0]=k%10;
    k=k/10;
    num[1]=k%10;
    k=k/10;
    num[2]=k;
    
    int u,j,temp;
    for(u=0;u<2;u++)
  {
      for(j=u+1;j<3;j++)
      {
          if(num[u]>num[j])
          {
              int temp=num[u];
              num[u]=num[j];
              num[j]=temp;
          }
      }
      
  }
  u=num[2]*11+num[0]*7;
  if(u>99)
  {
      u=u%100;
  }
  a[i]=u;
  
}

int pairs[10]={0};
int sig1[10]={0};
int sig2[10]={0};int j;
for(i=0;i<n-2;i+=2)
{
    int k=a[i]/10;
    for(j=i+2;j<n;j+=2)
    {
        if((a[j]/10)==k){
            if(sig1[k]){sig1[k]++;}else sig1[k]=2;}
    }
}
for(i=1;i<n-2;i+=2)
{
    int k=a[i]/10;
    for(j=i+2;j<n;j+=2)
    {
        if((a[j]/10)==k){if(sig2[k])sig2[k]++;else sig2[k]=2;}
    }
}

int count=0;
for(i=0;i<10;i++)
{   int t1,t2;
    int even=sig2[i];
    if(even>=3)t1=2;
    else if(even==2)t1=1;
    else t1=0;
    int odd=sig1[i];
    if(odd>=3)t2=2;
    else if(odd==2)t2=1;
    else t2=0;
    t1=t1+t2;
    
    if(t1>=2)count+=2;
    else count+=t1;
    
}
printf("%d",count);




}
