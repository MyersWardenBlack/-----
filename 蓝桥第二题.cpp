
//小蓝给学生们组织了一场考试，卷面总分为 100 分，每个学生的得分都是一个 0 到 100 的整数。如果得分至少是 60 分，则称为及格。如果得分至少为 85 分，则称为优秀。
//请计算及格率和优秀率，用百分数表示，百分号前的部分四舍五入保留整 数。
//输入的第一行包含一个整数 n 表示考试人数。接下来 nn 行，每行包含一个 0 至 100 的整数，表示一个学生的得分。
//输出两行，每行一个百分数，分别表示及格率和优秀率。百分号前的部分 四舍五入保留整数。
//输入
7
80
92
56
74
88
100
0
//输出
71%
43%
  
//第一次提交
#include <iostream>
using namespace std;
int main()
{
    int n;
    int num1 = 0;       // num1 及格的数量 ，num2 优秀的个数
    int num2 = 0;       //这里一开始没有定义好 num1, num2
    cin>>n;
    int score[n];          //创建一个数组，每个元素代表每个成绩
  
    for(int i = 0; i < n; i++)
    {
        cin>>score[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(score[i] >= 60)
        {
            num1++;
        }
        if(score[i] >= 85)
        {
            num2++;
        }
    }
  
    int A = (num1*100/n) + 0.5;         //下边会说到，num1*100/n 仍然是整数运算，失精度
    int B = (num2*100/n) + 0.5;

    cout<<A<<"%"<<endl;
    cout<<B<<"%"<<endl;

    return 0;
}

//第二次提交
//这次只写改动的部分 循环体改动了一下
    for(int i = 0; i < n; i++)
    {
        cin>>score[i];
        if(score[i] >= 60)
        {
            num1++;      //计算 num1
        }
        if(score[i] >= 85)
        {
            num2++;      //计算num2
        }
    }

//第三次提交 最终结果
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;             //输入第一行， n
    int a = 0,b = 0;   //a 及格的数量 ，b优秀的数量
    for(int i = 0; i < n; i++)
    {
        int x;       // x输入的每一行成绩
        cin>>x;
        if(x >= 60)
        {
            a++;      //计算a
        }
        if(x >= 85)
        {
            b++;      //计算b
        }
    }
    cout<<(int)((100.*a/n)+0.5)<<"%\n"<<(int)((100.*b/n)+0.5)<<"%\n";
    //100 . * 中的 . 主要是为了保证 100*a/n的计算过程中不失精度(毕竟不加 . 的话也算是整数型计算)

    return 0;
}
