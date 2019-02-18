#include<iostream>
#include<conio.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>qwe;
    qwe["One"]=1;
    qwe["Two"]=2;
    qwe["Three"]=3;
    qwe.insert(make_pair("Four",4));
    for(auto x:qwe)
        cout<<x.first<<"\t"<<x.second<<endl;

    unordered_map<string,int>::iterator it;
    for(it=qwe.begin();it!=qwe.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    getch();
}
