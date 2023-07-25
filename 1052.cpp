/*
分析：

因为不知道一行有多少个表情，所以用一个string类型的不定长二维数组vector存储表情符号组，
且输出时可以调用v.size()解决不知道一行有多少个表情符号组的问题～

不定长数组共三行，分别对应输入用例的三行～只不过在存储如数组之前把它们的方括号去掉在存储
~这里可以用string的substr函数实现～然后根据输入的数字序号输出对应的表情～

注意：

1.“Are you kidding me? @\/@”的’\’是转义字符，想要输出’\’就要用’\\’表示～

2.第一个测试点里面包含了空格，所以用cin会失败的，要用getline才能读入一行字符串～
*/

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<string>  v[3];
    for(int i = 0; i < 3; i++) 
    {
        string s;
        getline(cin, s);
        for(int j=0; j < s.length(); j++) 
        {
            if(s[j] == '[') 
            {
                for(int k=j+1; k< s.length();k++) 
                {
                    if(s[k] == ']') 
                    {
                        v[i].push_back(s.substr(j+1, k-j-1));
                        j=k;        //此行代码可省略
                        break;
                    }
                }
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(a<=v[0].size()&&a>=1  &&  b<=v[1].size()&&b>=1  &&  c<=v[2].size()&&c>=1  &&  d<=v[1].size()&&d>=1  &&  e<=v[0].size()&&e>=1) 
	    	cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
	    else
        	cout << "Are you kidding me? @\\/@" << endl;
	}
    return 0;
}
