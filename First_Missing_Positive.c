#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fre[n]={0};
    for (int i=0;i<n;i++){
        if(arr[i]>=1&&arr[i]<=n) fre[arr[i]-1]++;
    }
    for (int i=0;i<n;i++){
        if(fre[i]==0){
            printf("%d",i+1);
            return 0;
        }
    }
    
}