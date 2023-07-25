//1021 个位数统计
#include <iostream>
using namespace std;
int main()
{
    int a[10]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[s[i]-'0']++;
    for(int i=0;i<10;i++)
    {
        if(a[i])    printf("%d:%d",&i,&a[i]);
    }
}
