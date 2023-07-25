//1028 人口普查 (20 分)
//某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。
//
//这里确保每个输入的日期都是合法的，但不一定是合理的——
//假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，
//所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。
//
//输入格式：
//输入在第一行给出正整数 N，取值在(0,10 
//5
// ]；随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。
//
//输出格式：
//在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
//
//输入样例：
//5
//John 2001/05/12
//Tom 1814/09/06
//Ann 2121/01/30
//James 1814/09/05
//Steve 1967/11/20
//输出样例：
//3 Tom John
//分析：用字符串接收name和birth，如果当前birth >= “1814/09/06″且<= “2014/09/06″，
//则是有效生日，有效个数cnt++，如果birth >= maxbirth，则更新maxname和maxbirth的值；
//如果birth <= minbirth，则更新minname和minbirth的值，这里的max和min是指数值上的大小～
//最后输出cnt，minname和maxname，
//minname表示最年长的（生日的数值大小最小的），maxname表示最年轻的（生日的数值大小最大的）～

//C++法 
//#include <iostream>
//using namespace std;
//int main() {
//    int n, cnt = 0;
//    cin >> n;
//    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";
//    for (int i = 0; i < n; i++) 
//	{
//        cin >> name >> birth;
//        if (birth >= "1814/09/06" && birth <= "2014/09/06") 
//		{
//            cnt++;
//            if (birth >= maxbirth) 
//			{
//                maxbirth = birth;
//                maxname = name;
//            }
//            if (birth <= minbirth) 
//			{
//                minbirth = birth;
//                minname = name;
//            }
//        }
//    }
//    cout << cnt;
//    if (cnt != 0) cout << " " << minname << " " << maxname;
//    return 0;
//}

//C语言法 
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char name[6], birth[11], maxname[6], minname[6], maxbirth[]= "1814/09/06", minbirth[]= "2014/09/06";
	int count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s",name,birth);
		if(strcmp(birth,"2014/09/06")<=0&&strcmp(birth,"1814/09/06")>=0)
		{
			count++;
			if(strcmp(birth,maxbirth)>0)
			{
				strcpy(maxbirth,birth);	//	maxbirth=birth;	错误：C语言字符串之间赋值不能直接使用字符串名（表示地址）进行赋值 （C++可以） 
				strcpy(maxname,name);	//	maxname=name;		对于C语言只能通过strcpy函数实现字符串之间的赋值 
			}
			if(strcmp(birth,minbirth)<0)
			{
				strcpy(minbirth,birth);	
				strcpy(minname,name);
			}
		}
	}
	printf("\n");
	if(count!=0)
		printf("%d %s %s",count,minname,maxname);	
	return 0;
 } 
