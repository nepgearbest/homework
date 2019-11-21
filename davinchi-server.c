#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
typedef struct card
{
    char owner[20];
    int a[2][7];
    int ownerpid;
}card;
typedef struct Cardpool
{
    int total[24];
    int cardleft;
}cardpool;

int *randset3()//初始化3个人的手牌,返回值为2x12的数组
{
    srand(time(NULL));
    rand()%            
}
int *cardchoose(int borw);//从剩余牌池里抽取一张牌(指定黑白色)，返回类型为1,0&&牌号
//接受一个玩家的指明，判断是否正确，更新手牌正确则不显示，错误则可视化选项置零
int main(int argc, char const *argv[])
{
    return 0;
}//检测游戏是否结束，并实时更新手牌1状况
