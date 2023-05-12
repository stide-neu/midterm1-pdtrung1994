/******************************************************************************
Copy đoạn code vào file này
**Lưu ý không đổi tên file hoặc định dạng file
**Nộp thành công sẽ có tích xanh ở ngoài repository
*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;
int a[100];
void get_input()
{
    printf("n=");
    //TODO
}
void print_output()
{
    //TODO
}
void array_minmax()
{
    //TODO
}
void array_mean()
{
    //TODO
}
void second_smallest()
{
    //TODO
}
void longest_sub()
{
    //TODO
} 
int main()
{
    get_input();
    print_output();
    int task= -1;
    while (task != 0)
    {
        printf("Select task = ");
        scanf("%d",&task);
        switch(task)
        {
            case 1: 
                array_minmax();
                break;
            case 2: 
                array_mean();
                break;
            case 3: 
                second_smallest();
                break;
            case 4: 
                longest_sub();
                break;
            default: printf("No task selected");
        }
    }
    return 0;
}
