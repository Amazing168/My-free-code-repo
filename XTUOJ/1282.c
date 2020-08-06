# include <stdio.h>

__int64 gcd(__int64 a,__int64 b){
	__int64 t;
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	__int64 T,i,j,k,a,b,c,d,e,f,ans,gd,fz,fm;
	scanf("%I64d",&T);
	while(T--){
		ans=e=f=1;
		scanf("%I64d %I64d",&a,&b);
		if(a==b){
			printf("1/%I64d\n",a);
		}
		else{
			fm=a*(a+1);
			fz=a+a+1;
		//	printf("%d/%d \n",fz,fm);
			for(i=a+2;i<=b;i++){
				fz*=i;
				fz+=fm;
				fm*=i;
				gd=gcd(fz,fm);
				fz/=gd;
				fm/=gd;
			//	printf("%d/%d \n",fz,fm);
			//	printf("%d/%d \n",fz/gd,fm/gd);
			}
			gd=gcd(fz,fm);
			if(fz%fm)printf("%I64d/%I64d\n",fz/gd,fm/gd);
			else printf("%I64d\n",fz/fm);
		}	
	}
	return 0;
} 
