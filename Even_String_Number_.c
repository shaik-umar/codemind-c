#include<stdio.h>
int main(){
    char s[1001];
    scanf("%s",s);  
    int fre[10]={0};
    for (int i=0;s[i]!=NULL;i++){
      if(s[i]>='0'&&s[i]<='9')  fre[s[i]-48]++;
    }
    int last;
    for(int i=0;i<10;i++){
        if(fre[i]&&i%2==0) {
            last=i;
            fre[i]=0;
            goto end;
        }
    }
     printf("-1"); return 0;
    end:;
    for (int i=9;i>=0;i--){
        if(fre[i]) printf("%d",i);
    }
    printf("%d",last);
    
}