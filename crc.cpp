#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,m1,d;

    cout<<"enter the no of digits:";
    cin>>m;
    m1=m;
    int msg[m],temp[m];
    cout<<"enter the message:";
     for(int i=0;i<m;i++)
     {
         cin>>msg[i];
         temp[i]=msg[i];
     }


    cout<<"enter the divisor digits:";
    cin>>d;
     int crc[d];
    cout<<"enter the divisor:";
     for(int i=0;i<d;i++)
        cin>>crc[i];

    for(int r=m;r<m+d-1;r++)
    {
        msg[r]=0;
        temp[r]=0;
    }

cout<<endl<<"MESSAGE WITH REDUNDENT 0'S:";

    for(int i=0;i<d+m-1;i++)
        cout<<temp[i];
cout<<endl;

int j=0,i=0,c=0,mn;
vector<int>fmsg;

  //MAIN CRC LOGIC
            while(j<d && i<m)
            {

                mn=msg[i]^crc[j];
                msg[i]=mn;
                fmsg.push_back(mn);
                i++;j++;
                if(j==d)
                {
                    c++;i=c;j=0;
                }

            }
int s;
s=fmsg.size();
cout<<"CRC bit:";
for(int k=s-d+1;k<s;k++)
{
    temp[m]=fmsg[k];
    cout<<fmsg[k];
    m++;
}
cout<<endl<<"FINAL MESSAGE TO BE TRANSMITTED:"<<endl;

    for(int k=0;k<d+m1-1;k++)
        cout<<temp[k];

return 0;

}
