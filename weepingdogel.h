/*
笨狗偷懒专用头文件

By WeepingDogel
*/
#include<stdio.h>
#include<math.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
//上面这个是获取数组长度
#define PrintLOGO(){printf("\033[33;5;1m╔╗╔╗╔╗───────────────╔═══╗────────╔╗\n║║║║║║───────────────╚╗╔╗║────────║║\n║║║║║╠══╦══╦══╦╦═╗╔══╗║║║╠══╦══╦══╣║\n║╚╝╚╝║║═╣║═╣╔╗╠╣╔╗╣╔╗║║║║║╔╗║╔╗║║═╣║\n╚╗╔╗╔╣║═╣║═╣╚╝║║║║║╚╝╠╝╚╝║╚╝║╚╝║║═╣╚╗\n─╚╝╚╝╚══╩══╣╔═╩╩╝╚╩═╗╠═══╩══╩═╗╠══╩═╝\n───────────║║─────╔═╝║──────╔═╝║\n───────────╚╝─────╚══╝──────╚══╝\033[0m\n");}
//打印闪烁 LOGO
void bbsort(int arr[],int len)
{
    printf("\nBubble sorting in progress....... \n");
    //冒泡排序，现调现用
    int i,j,temp;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] =temp;
            }
            printf("Sorting.... {\033[31;1m%d\033[0m} & {\033[31;1m%d\033[0m}\n",arr[j], arr[j+1]);
        }
    }
    printf("Done!\n");
}
void PrintArray(int arr[], int len)
{
    //打印整型数组
    int i;
    printf("The array is:\n\n");
    for(i = 0; i < len; i++)
    {
        printf("\033[33;1m%d \033[0m",arr[i]);
    }
}
void PrintNarcissusNumber()
{
    //取水仙花数
    int a,b,c,n = 0;
    printf("水仙花数有:\n");
    for(n=100;n <= 999; n++)
    {
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        if (pow(a,3)+pow(b,3)+pow(c,3) == n)
        {
            printf("%d\n",n);
        }
    }
}
