/*
������

��Ϊ��֪��һ���ж��ٸ����飬������һ��string���͵Ĳ�������ά����vector�洢��������飬
�����ʱ���Ե���v.size()�����֪��һ���ж��ٸ��������������⡫

���������鹲���У��ֱ��Ӧ�������������С�ֻ�����ڴ洢������֮ǰ�����ǵķ�����ȥ���ڴ洢
~���������string��substr����ʵ�֡�Ȼ����������������������Ӧ�ı��顫

ע�⣺

1.��Are you kidding me? @\/@���ġ�\����ת���ַ�����Ҫ�����\����Ҫ�á�\\����ʾ��

2.��һ�����Ե���������˿ո�������cin��ʧ�ܵģ�Ҫ��getline���ܶ���һ���ַ�����
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
                        j=k;        //���д����ʡ��
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
