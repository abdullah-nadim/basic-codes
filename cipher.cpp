#include <iostream>

using namespace std;

string encode(string cs,int s)
{
    int sz = cs.length();
    for(int i = 0; i<sz;i++)
    {
        if('a'<=cs[i]&&'z'>=cs[i])
        {
            cs[i] = (cs[i]-'a'+s)%26+'a';
        }
        if('A'<=cs[i]&&'Z'>=cs[i])
        {
            cs[i] = (cs[i]-'A'+s)%26+'A';
        }
        if('!'<=cs[i]&&'@'>=cs[i])
        {
            cs[i] = (cs[i]-'!'+s)%32+'!';
        }
        else
        {}
    }
    cout<<"Encoded String: "<<cs;
    return cs;
}
int main()
{
    string cs ;
    int j;
    cout<<"Input your String: ";
    getline(cin,cs);
    cout<<"Input integer: ";
    cin>>j;
    encode(cs,j);
    return 0;
}
