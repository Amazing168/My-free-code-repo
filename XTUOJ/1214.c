# include <stdio.h>

int main(){
	int K,cnt;
	int a,b,c,d,i,j,flag,flag1;
	scanf("%d",&K);
	while(K--){
		flag=1;
		flag1=1;
		scanf("%d+%d=%d",&a,&b,&c);
	//	printf("%ld %ld %ld\n",a,b,c);
		if(a+b==c){
			printf("0\n");
			flag=0;
		}
	
		if(flag==1){
			d=a;
			for(i=1;i<=9;i++){
				d*=10;
				if(d+b==c){
					printf("%d\n",i);
					flag=0;
					flag1=0;
					break;
				}
			}
		}
		
		 if(flag1){
		 
			for(j=1;j<=9;j++){
				b*=10;
				if(a+b==c){
					printf("-%d\n",j);
					break;
				}
			}
	}
		}

	return 0; 
}
