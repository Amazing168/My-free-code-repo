# include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
	return *(int*)a-*(int*)b;
}
int main(){
	int K,n,i,j,k,l,a[5],b;
	scanf("%d",&K);
	while(K--){
		scanf("%d",&n);
		scanf("%d",&a[0]);
		i=0;n--;
		for(l=0;l<4;l++) a[l]=0;
		while(n--){
			scanf("%d",&b);
		//		printf("%d\n",i);
			if(i<4){
				for(j=0;j<=i;j++){ //ע���жϽ������������ڵ�i��С. 
					if(a[j]==b) break;  
				}
				if(j>i){
					i++;a[i]=b;			//���治һ���������м���!! 
				}
			}	
		}
	//	printf("%d\n",i);
		if(i<3) printf("Yes\n");
		else if(i==3){ 
			qsort(a,4,sizeof(a[0]),cmp);
				if(a[0]+a[2]==a[2]+a[3]||a[0]+a[3]==a[1]+a[2])
					printf("Yes\n");
				else printf("No\n");
			}
		else printf("No\n");
	}	
	return 0;
} 
