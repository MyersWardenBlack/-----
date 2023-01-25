//luogu 5461
//李静发的
//https://www.luogu.com.cn/problem/P5461
#include <cstdio>
using namespace std;

int a[1050][1050];                          //a[1024][1024] 也能通过
void cal(int x, int y, int n)
{
    if(n == 0)
    {
        a[x][y] = 1;
    }
    else
    {
        cal(x, y+(1<<n-1), n-1);                //分成四份之后每份的左上角
        cal(x+(1<<n-1), y, n-1);                // 1<<(n-1) 等于 1*2^(n-1)
        cal(x+(1<<n-1), y+(1<<n-1), n-1);   // 1<<n-1 一定要用括号包起来 否则就会被认为是 (y+1)*2^(n-1)
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



//网上找的
#include<iostream>
using namespace std;
int n,p=1,a[1050][1050];
void di(int x,int l,int q) //x为正方形边长，l、q分别为递归正方形的横纵坐标
{
    if(x==2) //递归边界
    {
        a[l][q]=0;
        return;
    }
    for(int i=l; i<=l+x/2-1; i++)
        for(int j=q; j<=q+x/2-1; j++)
            a[i][j]=0; //将左上方的正方形清零
    di(x/2,l+x/2,q);
    di(x/2,l+x/2,q+x/2);
    di(x/2,l,q+x/2); //此处是递归剩余的三个正方形
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        p*=2; //计算正方形的边长
    for(int i=1; i<=p; i++)
        for(int j=1; j<=p; j++)
            a[i][j]=1; //将a数组先赋值为1
    di(p,1,1); //开始递归
    for(int i=1; i<=p; i++)
    {
        for(int j=1; j<=p-1; j++)
            cout<<a[i][j]<<" ";
        cout<<a[i][p]<<endl; //输出，此处可以避免输出行尾空格
    }
    return 0;
}





