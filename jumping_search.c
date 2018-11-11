#include<stdio.h>
int main(){
  int x,j,step_size=25,flag=0;
  int ar[]={1,3,4,7,9,12,23,45,76,82,95,100,102,105,108,110,111,115,119,121,125};
  printf("Enter the element to be searched : \n");
  scanf("%d",&x);
  int n=sizeof(ar)/sizeof(int);
  for(int i=0;i<n;i=i+step_size){
    if(x<ar[i]){
      for(j=i-step_size;j<=i;j++){
        if(ar[j]==x){
          flag=1;
          printf("ar[%d]=%d\n",j,ar[j]);
        }
      }
    }
  }
  if(flag==0){
    printf("Element not found.\n");
  }
  return(0);
}
