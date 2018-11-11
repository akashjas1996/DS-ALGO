#include<stdio.h>
void leftRotation_byOne(int ar[], int n){
  int temp=ar[0];
  for(int i=0;i<n-1;i++){
    ar[i]=ar[i+1];
  }
  ar[n-1]=temp;
}
void left_rotation(int ar[], int d, int n){
  for(int i=0;i<d;i++){
    leftRotation_byOne(ar, n);
  }
}
int main(){
  int n,i,d;
  printf("Enter the number of elements : \n");
  scanf("%d",&n);
  int ar[n];
  for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  printf("Enter the rotation cycle length : \n");
  scanf("%d",&d);
  left_rotation(ar,d,n);
  for(i=0;i<n;i++){
    printf("%d, ",ar[i]);
  }
  return(0);
}
