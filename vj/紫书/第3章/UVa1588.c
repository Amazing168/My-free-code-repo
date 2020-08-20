# include <stdio.h>
# include <string.h>

int main(){
    char s1[111],s2[111];
    while(scanf("%s",s1)!=EOF){
        scanf("%s",s2);
        int l1=strlen(s1),l2=strlen(s2);
        int i,j,flag;
        for(i=0;i<l1;i++){
            flag =1;
            for(j=0;j<l2;j++){
                if(i+j>l1) break; //一定要及时跳出！！
                if(s1[i+j]=='2'&&s2[j]=='2'){flag =0;break;}
            }
            if(flag) break;
        }
        int ans1=l2+i;if(ans1<l1) ans1=l1;
        for(i=0;i<l2;i++){
            flag =1;
            for(j=0;j<l1;j++){
                if(i+j>l2) break;
                if(s2[i+j]=='2'&&s1[j]=='2'){flag =0;break;}
            }
            if(flag) break;
        }
        int ans2=l1+i; if(ans2<l2) ans2=l2;
        if(ans1<ans2) printf("%d\n",ans1);
        else printf("%d\n",ans2);
    }
    return 0;
}