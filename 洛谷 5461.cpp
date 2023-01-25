//luogu 5461
//李静发的
//https://www.luogu.com.cn/problem/P5461
#include <cstdio>
using namespace std;

int a[1024][1024];
void cal(int x, int y, int n)
{
    if(n == 0)
    {
        a[x][y] = 1;
    }
    else
    {
        cal(x, y+1<<n-1, n-1);
        cal(x+1<<n-1, y, n-1);
        cal(x+1<<n-1, y+1<<n-1, n-1);
    }
}

int main()
{
    int n; scanf("%d",&n);
    cal(0, 0, n);
    for(int i = 0; i < 1<<n; i++)
    {
        for(int j = 0; j < 1<<n; j++)
        {
            printf("%d%c",a[i][j],j == (1<<n)-1 ? '\n' : ' ');  //字符串一定是 '' 包起来的
        }
    }
    return 0;
}




