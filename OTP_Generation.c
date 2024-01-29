#include<stdio.h>
void func(int n){
    if(n==0) return ;
    int r=n%10;
    func(n/10);
    if(r%2) printf("%d",r*r);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
}