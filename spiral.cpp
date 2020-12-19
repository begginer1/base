#include<iostream>
using namespace std;
int main()
{ int r,c,i,j,L,U,R,D,dir=0,co=0;
    cin>>r>>c;
    int rev[r*c];
    L=c-1,U=r-1;R=0,D=0;
     int a[r][c];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    while(R<=L&&U>=D)
    {
if(dir==0)
{
for(i=R;i<=L;i++)
rev[co++]=a[D][i];
dir=1,D++;
}
else if(dir==1)
{
    for(i=D;i<=U;i++)
rev[co++]=a[i][L];
dir=2,L--;
}
 else if(dir==2)
{
    for(i=L;i>=R;i--)
rev[co++]=a[U][i];
dir=3,U--;
}
else if(dir==3)
{
    for(i=U;i>=D;i--)
rev[co++]=a[i][R];
dir=0,R++;
}
    }
    for(i=co-1;i>=0;i--)
    cout<<rev[i]<<" ";
    return 0;
}