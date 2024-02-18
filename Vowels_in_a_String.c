#include<stdio.h>
int main(){
    char s[50], ch;
    scanf("%[^
]",s);
    scanf(" %c",&ch);
    int i,flag=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==ch)
        {
            flag=1;
            break;
            
        }
    }
    if(flag)
    {
        printf("True
%d",i);
    }
    else
    {
        printf("False");
    }
    
}