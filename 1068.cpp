//1068 万绿丛中一点红 (20 分)
//对于计算机而言，颜色不过是像素点对应的一个24位的数值。现给定一幅分辨率为 M×N 的画，
//要求你找出万绿丛中的一点红，即有独一无二颜色的那个像素点，
//并且该点的颜色与其周围 8 个相邻像素的颜色差充分大。
//
//输入格式：
//输入第一行给出三个正整数，分别是 M 和 N（≤ 1000），即图像的分辨率；
//以及 TOL，是所求像素点与相邻点的颜色差阈值，色差超过 TOL 的点才被考虑。
//随后 N 行，每行给出 M 个像素的颜色值，范围在 [0,2^24) 内。
//所有同行数字间用空格或 TAB 分开。
//
//输出格式：
//在一行中按照 (x, y): color 的格式输出所求像素点的位置以及颜色值，
//其中位置 x 和 y 分别是该像素在图像矩阵中的列、行编号（从 1 开始编号）。
//如果这样的点不唯一，则输出 Not Unique；如果这样的点不存在，则输出 Not Exist。
//
//输入样例 1：
//8 6 200
//0 	 0 	  0 	   0	    0 	     0 	      0        0
//65280 	 65280    65280    16711479 65280    65280    65280    65280
//16711479 65280    65280    65280    16711680 65280    65280    65280
//65280 	 65280    65280    65280    65280    65280    165280   165280
//65280 	 65280 	  16777015 65280    65280    165280   65480    165280
//16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215
//输出样例 1：
//(5, 3): 16711680
//
//输入样例 2：
//4 5 2
//0 0 0 0
//0 0 3 0
//0 0 0 0
//0 5 0 0
//0 0 0 0
//输出样例 2：
//Not Unique
//
//输入样例 3：
//3 3 5
//1 2 3
//3 4 5
//5 6 7
//输出样例 3：
//Not Exist
//分析：首先这个点必须是唯一的，所以用map标记如果不是唯一的点就不用考虑了
//～接着对于每个点，判断它的周围八个点与它的差值是否大于阈值，
//如果有一个点没有满足大于阈值就return false
//～最后记得输入的时候是列、行——m、n，输出的时候也是列、行坐标～
#include <iostream>
using namespace std;
int main()
{
	

	return 0;
}

