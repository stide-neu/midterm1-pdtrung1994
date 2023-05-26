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
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //TODO
}
void print_output()
{
    printf("n= %d \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void array_minmax()
{
    int min = a[0]; 
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if (a[i]<min) min = a[i];
        if (a[i]>max) max = a[i];
    }
    printf("Max = %d, Min = %d", max, min);
}
void array_mean()
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        // sum = sum + a[i];
        sum += a[i];
    }
    float mean = (float)sum/n; 
    printf("MEAN = %f", mean);
}
void second_smallest()
{
    int min = a[0];
    int min_2nd = 999999;
    for (int i=0; i<n; i++)
    {
        if (a[i]<min)
            min = a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]<min_2nd && a[i]!=min)
            min_2nd = a[i];
    }
    printf("Second Smallest = %d", min_2nd);
}
void longest_sub()
{
    int max_inc = 1;
    int inc = 1;
    int pos = 0;
    for (int i =1; i<n; i++)
    {
        if (a[i]>a[i-1]) inc++;
        else 
        {
            if (inc>max_inc)
            {
                max_inc = inc;
                pos = i-inc;
            }
            inc =1;
        }
    }
    //Kiem tra day tang dan cuoi cung
    if (inc>max_inc)
        {
            max_inc = inc;
            pos = n-inc;
        }
    for (int i = pos; i<pos+max_inc ; i++)
        printf("%d ", a[i]);
} 
int main()
{
    get_input();
    print_output();
    int task= -1;
    while (task != 0)
    {
        printf("\n Select task = ");
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
