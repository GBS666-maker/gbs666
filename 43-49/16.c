#include <stdio.h>
// 函数：判断两位数是否能被3整除且至少一位是5
void findSpecialNum()
{
    printf("能被3整除且至少一位是5的两位数：\n");
    for(int num = 10; num <= 99; num++)
    {
        int ge = num % 10; // 个位
        int shi = num / 10; // 十位
        // 条件：能被3整除 + 个位是5 或 十位是5
        if(num % 3 == 0 && (ge == 5 || shi == 5))
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main()
{
    findSpecialNum(); // 调用函数
    return 0;
}