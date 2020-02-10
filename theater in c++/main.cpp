#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t,temp=0;
    cin>>t;
    while(t--)
    {


    long n,time[100],mat[4][4]={0};
    char alpha[100];
    cin>>n;
    for(long i=0;i<n;i++)
    {
    cin>>alpha[i]>>time[i];
    }

    for(long i=0;i<n;i++)
    {
        if(alpha[i]=='A')
        {
            if(time[i]==12)
                mat[0][0]++;
            if(time[i]==3)
                mat[0][1]++;
            if(time[i]==6)
                mat[0][2]++;
            if(time[i]==9)
                mat[0][3]++;
        }
        if(alpha[i]=='B')
        {
            if(time[i]==12)
                mat[1][0]++;
            if(time[i]==3)
                mat[1][1]++;
            if(time[i]==6)
                mat[1][2]++;
            if(time[i]==9)
                mat[1][3]++;
        }
        if(alpha[i]=='C')
        {
            if(time[i]==12)
                mat[2][0]++;
            if(time[i]==3)
                mat[2][1]++;
            if(time[i]==6)
                mat[2][2]++;
            if(time[i]==9)
                mat[2][3]++;
        }
        if(alpha[i]=='D')
        {
            if(time[i]==12)
                mat[3][0]++;
            if(time[i]==3)
                mat[3][1]++;
            if(time[i]==6)
                mat[3][2]++;
            if(time[i]==9)
                mat[3][3]++;
        }
    }

    long i=0;
    long max=0;
    long maxelement[4];
    while(i<4)
    {
        for(long j=0;j<4;j++)
        {
            if(mat[i][j]>max)
            {
                max=mat[i][j];
            }
        }
        maxelement[i]=max;
        max=0;
        i++;
    }
      long count=0;
    int x=sizeof(maxelement)/sizeof(maxelement[0]);
    sort(maxelement,maxelement+x);

    for(long i=0;i<4;i++)
    {

        if(maxelement[i]==0)
        {
            count++;
        }
    }
    long sum=maxelement[3]*100+maxelement[2]*75+maxelement[1]*50+maxelement[0]*25;
    cout<<(sum-count*100)<<endl;
    temp=temp+(sum-count*100);
    }
    cout<<temp;
    return 0;

}
