#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,len,j;
    char first[100]="",second[100]="";   //第一第二个字符串
    char change[100]="",result[100]="";  //处理过的字符串
    int permutation[]={2,1,5,4,3,7,6,10,9,8};
    gets(first);
    gets(second);
    len = strlen(first);
    //初始解码
    for(i=0;i<len;i++)
    {
        change[i]=first[i]-1;
    }
    //二次转换
    for(i=0;i<len;i++)
    {
        j=permutation[i]-1;
        result[i]=change[j];
    }

    if (strcmp(second,result) == 0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
