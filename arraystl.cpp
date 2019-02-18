#include<iostream>
#include<array>
#include<string>

#include<algorithm>
using namespace std;
int main()
{
    array<int,4>arraylist={20,65,12,87};
    pair<int,int>my_pair;
    pair <int,int>p5(34,986);
    my_pair=make_pair(43,67);
    my_pair.swap(p5);
    cout<<"The Size of the Array is:"<<arraylist.size()<<endl;
    sort(arraylist.begin(),arraylist.end());
    cout<<"The key of the My pair is:"<< my_pair.first<<endl;
    cout<<"The Value of the My pair is:"<<my_pair.second<<endl;
    for(int i=0;i<4;i++)
        cout<<arraylist.at(i)<<endl;
   if(my_pair>p5)
     cout<<"Both pair are equal."<<endl;
   else
    cout<<"Both pairs are not equal."<<endl;

   return 0;
}
