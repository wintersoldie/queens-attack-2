#include<stdio.h>
#include<math.h>

int main (){
    int n,l=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<100;i++)
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
        for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(l<c){
            l=c;
        }
    }
    printf("%d",n-l);
    return 0;

}