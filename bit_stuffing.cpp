#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    string stuff="1",a;
    string msg;
    cout<<"enter the message:\n";
    cin>>msg;
    for(int i=0;i<msg.length();i++)
    {
        a=msg[i];
        if(a==stuff)
            c++;
        else
            c=0;
        if(c==5)
        {
           msg.insert(i+1,"<0>");
           c=0;i++;
        }

    }
    cout<<msg;
}
