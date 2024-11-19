#include<bits/stdc++.h>
using namespace std;

void print( map<int, string> &m)
{
    for(auto pr: m)
    {
        cout<<pr.first<<":"<<pr.second<<"  ";
    }
}


int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[2] = "cde";
    m.insert({3, "barishal"});
    map<int, string> ::iterator it;

    // for(it = m.begin(); it!= m.end(); ++it)
    //{
    //  cout<<(*it).first<<":" <<(*it).second<<" ";
    //}
    //cout<<endl;

    print(m);
    cout<<m.find("abc");

    return 0;
}

