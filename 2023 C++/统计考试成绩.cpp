#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n; 	//输入学生成绩个数
	int scores[n];	//存储学生成绩的教组
	int sum =0;		//存储成绩总和 
	//读取每个学生的成绩
	for(int i= 0; i< n; ++i)
	{
		cin >>scores[i]; //累加成绩
		sum += scores[i];
	}
	//计算平均分(向下取整)
	int average = sum /n;	
	//统计平均分以上和平均分以下的学生人数
	int up = 0;
	int down =0;
	for(int i=0; i<n; ++i)
	{
		if(scores[i]>= average)	{
            up++; 
        }
		else {
            down++;
        }
	}
	//输出结果
	cout << up<<" "<<down<<endl;
	return 0;
}