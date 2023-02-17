https://www.acwing.com/problem/content/description/3771/
//思路讲解：把x分成很多组，每一组需要减去多少个才合适

#include <iostream>
#include <algorithm>
using namespace std;        

int n;      //字符串长度是n

int main()
{
    string str;
    cin>>n>>str;
    int res = 0;            //res是 需要减去的数，是输出结果
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'x')       //定位 i
        {
            int j = i + 1;
            while(str[j] == 'x' && j < n) j++;  //循环结束时，j 是'x'的下一个字符索引
            res += max(j - i - 2, 0);     //j-i 是每一组'x'的长度 如果'x'长度小于3，则j-i-2 <= 0 ；
                                          //                    如果'x'长度大于等于3，则j-i-2 > 0，取最大值
            i = j - 1;
        }
    }
    cout<<res<<endl;
    return 0;
}
