#include<stdio.h>
#include<string.h>
int num1,x,n,i,a[16];
char time[16][10],time1[10],team[16][10],team1[10],sta[16][50],sta1[50];
int main()
{
    scanf("%d",&n);
    while(scanf("%s %s %d ",time1,team1,&num1)!=EOF)
    {
        gets(sta1);
        x=num1-1001;
        if('A'==sta1[0] && (a[x]==0 || strcmp(time1,time[x])<0))//��ac��ʱ��С�����ǵ�һ������ ����strcmp��ac�����ж�Ҳ��������
        {
            strcpy(time[x],time1);
            strcpy(team[x],team1);
            sta[x][0]='A';
            a[x]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if('A'!=sta[i][0])//Ҳ�ɸ�Ϊif(a[i]==0),Ҳ�Ǳ��δac����˼��
        {
            printf("%d\n",i+1001);
        }
        else
        {
            printf("%d ",i+1001);
            printf("%s ",time[i]);
            printf("%s\n",team[i]);
        }
    }
    return 0;
}
