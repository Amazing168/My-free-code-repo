	#include<stdio.h>
	
	int main(){
	    int K,i,z,t,x1,y1,x2,y2,x3,y3,x4,y4;
	    scanf("%d",&K);
	    for (i=0;i<K;i++){
	        scanf("%d%d%d%d%d%d%d%d" ,&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	        if(x1>x2){
	            z=x1;
	            x1=x2;
	            x2=z;
	            
	        }   
			if(y1>y2){
				t=y1;
	            y1=y2;
	            y2=t;
			} 
	        if(x3>x4){
	            z=x3;
	            x3=x4;
	            x4=z;
	            
	        }  
	        if(y3>y4){
	        	t=y3;
	        	y3=y4;
	        	y4=t;
			}
		//	printf("%d %d %d %d",x1,x2,x3,x4);  
	    if(x2<=x3||x1>=x4||y3>=y2||y4<=y1){
	        printf("No\n");
	        continue;
	    }
	    else{
	        printf("Yes\n");
	        continue;
	        
	    }
	    }
	    
	    return 0;
	} 
		 
