#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter message:";
    cin>>str;
    string layer_sort[]={"<APP>","<PRE>","<SSN>","<TNP>","<NWK>","<DAT>","<PHY>"};
    string layer[]={"APPLICATION: \t","PRESENTATION: \t","SESSION: \t","TRANSPORT: \t","NETWORK: \t","DATA:      \t","PHYSICAL: \t"};
    cout<<"SENDERS SIDE: \n\n\n";
    for(int i=0;i<7;i++)
    {
        cout<<layer[i];
        int j=0;
        for(j=0;j<=i;j++)
        {
            cout<<layer_sort[j];
        }
        cout<<"  "<<str;
        cout<<endl;
    }


     cout<<"\n \nRECEIVER SIDE: \n\n\n";
    for(int i=6;i>=0;i--)
    {
        cout<<layer[i];
        for(int j=i;j>=0;j--)
        {
            cout<<layer_sort[j];
        }
        cout<<"  "<<str;
        cout<<endl;
    }


return 0;
}
