#include <stdio.h> 
void func ( float a , float b ) // 错误1：func函数声明为void（无返回值），却在main中被赋值给z
int main() 
{ 
    float x , y ; 
    float z; 
    scanf("%f , % f", &x , &y); // 错误2：格式控制符多空格（%f , % f应改为%f,%f）
    z = func (x,y); // 错误1对应：void函数不能赋值给变量
    printf ("z=%fln",z); // 错误3：转义字符错误（%fln应改为%.2f\n）
    return 0; 
} 
void func (float a, float b)
{ 
    float c;
    c = a*a + b*b;
    return c; // 错误1对应：void函数不能有return c语句
}