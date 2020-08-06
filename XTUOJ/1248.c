#  include<stdio.h>
#  include<stdlib.h>

int cmp(void const *a,void const *b ){
	return *(int *)a-*(int *)b;
}
int xt(int a0,int a1,int a2){
	if(a0==a1&&a1==a2) return 3;
	else if(a0==a1||a0==a2||a1==a2) return 2; 
	else  return 0;
}
int judge(int a,int b) { //比较两数大小的函数 
	if(a==1||b==1){
		if(a==1&&b==1) return 3;
		else if(a==1) return 1;
		else return 2;
	}
	else if(a>b) return 1;
	else if(a<b) return 2;
	else return 3;
}
int main(){
	int K,i,j,k,flag,sum1,sum2,co1,co2,a[3],b[3];
	scanf("%d",&K);
	while(K--){
		for(i=0,sum1=0;i<3;i++) scanf("%d",&a[i]);
		for(i=0,sum2=0;i<3;i++) scanf("%d",&b[i]);
		co1=xt(a[0],a[1],a[2]);                    //看相同的有几个 
		co2=xt(b[0],b[1],b[2]);
		if(co1>co2) printf("Alice\n");
		else if (co1<co2) printf("Bob\n");
		else {                                     //比较相等的情况。 
			if(co1==3) flag=judge(a[0],b[0]) ;
			else if(co1==2){                       //比较对子的情况 
				qsort(a,3,sizeof(a[0]),cmp);       //排序比中间 
				qsort(b,3,sizeof(b[0]),cmp);
				if(a[1]==b[1]){                    //相同比不同的那个数 
					if(a[1]==a[0]) j=a[2];
					else j=a[0];
					if(b[1]==b[0]) k=b[2];
					else k=b[0];
					flag=judge(j,k); 
				}
				else flag=judge(a[1],b[1]);      //不相同比较对子的数字 
			}   
			else if(co1==0){                     //最后比较和 
				sum1=a[0]+a[1]+a[2];
				sum2=b[0]+b[1]+b[2]; 
				if(sum1>sum2) flag=1;
				else if(sum1<sum2) flag=2;
				else if(sum1==sum2)flag=3; 
			}
			if(flag==1) printf("Alice\n");
			else if(flag==2) printf("Bob\n");
			else if (flag==3)printf("Draw\n");
		} 
	}
	return 0; 
} 
