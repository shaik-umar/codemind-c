#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int i=0;
    int j=strlen(s)-1;
    while(i<j){
        
        while(!(s[i]>='a'&&s[i]<='z')) i++;
        while(!(s[j]>='a'&&s[j]<='z')) j--;
        
        char r=s[i];
        s[i++]=s[j];
        s[j--]=r;
        
    }
    printf("%s",s);
    
}