#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,len,j;
    char first[100]="",second[100]="";   //��һ�ڶ����ַ���
    char change[100]="",result[100]="";  //��������ַ���
    int permutation[]={2,1,5,4,3,7,6,10,9,8};
    gets(first);
    gets(second);
    len = strlen(first);
    //��ʼ����
    for(i=0;i<len;i++)
    {
        change[i]=first[i]-1;
    }
    //����ת��
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
