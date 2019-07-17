#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int d[s];int k=0;
    int c[s][4];
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>c[i][j];
        }
    }
    int s1,s2; 
    cin>>s1>>s2;
    for(int i=0;i<s;i++)
    {int x1,y1,x4,y4;
    
    x1=c[i][0];
    y1=c[i][1];
    x4=c[i][2];
    y4=c[i][3];
    int x2,y2,x3,y3;
    
        x2=x4;
        y2=y1;
        x3=x1;
        y3=y4;
        int min=abs(x1-s1)+abs(y1-s2);
        int temp=abs(x2-s1)+abs(y2-s2);
        if(temp<min)min=temp;
        temp=abs(x3-s1)+abs(y3-s2);
        if(temp<min)min=temp;
        temp=abs(x4-s2)+abs(y4-s2);
        if(temp<min)min=temp;
        d[i]=min;
        
        
    }
    int min=-1;
    for(int i=0;i<s;i++)
    {int temp=d[i];int ind=i;
        for(int j=i;j<s;j++)
        {
            if(temp>d[j] && temp>min){temp=d[j];ind=j;}
        }
        min=temp;
        cout<<(ind+1)<<" ";
    }
    
   
    
    
}
