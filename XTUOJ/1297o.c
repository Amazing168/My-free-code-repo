#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int less(const void* a, const void* b);
typedef struct st {
	int num;//学号
	int sum;//积分
}name; 
name stu[600];
int main()
{   
	int t;
	int c, cnt = 0;
	int xue;
	int r;
	int i = 0, j = 1;
	//输入题号 学号 排名
	while (scanf("%d %d %d", &t, &xue, &r) != EOF){
		if (r >= 1 && r <= 12) r = 32;//换算成积分
		else if (r >= 13 && r <= 24) r = 16;
		else if (r >= 25 && r <= 48) r = 8;
		else if (r >= 49 && r <= 96) r = 4;
		else if (r >= 97 && r <= 192) r = 2;
		else if (r > 192) r = 1;
		if (cnt == 0) {
			           stu[0].num = xue; 
					   stu[0].sum = r;
					   cnt++;
		}
		else {
			for (i = 0, j = 0; i < cnt; i++) {
				if (xue ==stu[i].num) {
					stu[i].sum += r;
					j = 1;
					break;
				}
			}
			if (j == 0) {
				stu[cnt].num = xue;
				stu[cnt].sum = r;
				cnt++;
			}
		}
	}
	qsort(stu, 600, sizeof(name), less);//排序
	c = stu[0].sum;
	stu[0].sum = 100;
	for (i = 1; i < cnt; i++) {
		stu[i].sum = (int)round((double)100 + log((double)1 + ((double)((double)stu[i].sum - (double)c) / (double)c))*(double)10);//计算成绩

	}
	qsort(stu, 600, sizeof(name), less);//排序
	for (i = 0; i < cnt; i++) printf("%d %d\n", stu[i].num, stu[i].sum);
	return 0;
}
int less(const void* a, const void* b)
{
	name* p1;
	name* p2;
	p1 = (name*)a;
	p2 = (name*)b;
	if (p1->sum != p2->sum)
		return p2->sum - p1->sum;
	else 
		return p1->num - p2->num;
}
