#include<stdio.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int fre[26]={0};
    for(int i=0;s[i]!=NULL;i++){
        fre[s[i]-'a']++;
    }
    
    for (int i=0;i<26;i++){
        if(fre[i]>1){ 
        printf("False");
        return 0;
        }
    }
    printf("True");
}