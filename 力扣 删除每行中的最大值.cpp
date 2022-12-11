// 给你一个 m x n 大小的矩阵 grid ，由若干正整数组成。
// 执行下述操作，直到 grid 变为空矩阵：
// 从每一行删除值最大的元素。如果存在多个这样的值，删除其中任何一个。
// 将删除元素中的最大值与答案相加。
// 注意 每执行一次操作，矩阵中列的数据就会减 1 。
// 返回执行上述操作后的答案。
          // 例如
// 输入：grid = [[1,2,4],[3,3,1]]
// 输出：8
// 解释：上图展示在每一步中需要移除的值。
// - 在第一步操作中，从第一行删除 4 ，从第二行删除 3（注意，有两个单元格中的值为 3 ，我们可以删除任一）。在答案上加 4 。
// - 在第二步操作中，从第一行删除 2 ，从第二行删除 3 。在答案上加 3 。
// - 在第三步操作中，从第一行删除 1 ，从第二行删除 1 。在答案上加 1 。
// 最终，答案 = 4 + 3 + 1 = 8 。
        // 提示
// m ==   grid.length
// n == grid[i].length
// 1 <= m, n <= 50
// 1 <= grid[i][j] <= 100

class Solution {  
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {      // 类 相关的知识 继续学习去吧。。哎
        
    }
};

//下面是自己写的代码

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int grid[m][n];
    cin>>grid[m][n];
  
    m = sizeof(grid)/sizeof(grid[0]);              //行
    n = sizeof(grid[0])/sizeof(grid[0][0]);        //列
    int max = 0;                                  //每行的最大值
    int Final = 0;                                //最终结果

    for(int j = 0; j < m ; j++)
    {
        sort(grid[j], grid[j]+n, greater<int>());         //重排，从大到小

    }
    for(int j = 0; j < m; j++)
    {
        for(int k = 0; k < n; k++)
        {
            if(grid[j][0] > max)
            {
                max = grid[j][0];
            }
        } Final = Final + max ;
    }
    cout<<Final<<endl;

    return 0;
}
