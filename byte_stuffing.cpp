#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b=0;
    string bytes[3]={"flag\t","esc\t","flag"};
    cout<<"enter the number of the strings : ";
    cin>>n;
    string msg[n];
    cout<<"enter the strings:\n";
    for(int i=0;i<n;i++)
        cin>>msg[i];
    cout<<"\n \nThe Message entered: \n";
    cout<<"*************************\n";
    for(int i=0;i<n;i++)
        cout<<msg[i]<<"\t";
    cout<<endl;
    cout<<"\n \nThe Message after stuffing: \n";
    cout<<"*************************\n";
     cout<<bytes[b];
        b++;
    for(int i=0;i<n;i++)
    {
        if(msg[i]=="flag"||msg[i]=="esc")
            cout<<bytes[b];
        cout<<msg[i]<<"\t";
        if(i==n-1)
        {
            b++;
            cout<<bytes[b];
        }

    }
}
