/*RECURSIVE FORM
*****************/
#include<stdio.h>
int linear_search(int ar[], int size, int x, int n){
	if(n<size){
		if(x==ar[n]){
			return(n);
		}
	else{
			linear_search(ar, size, x, n++);
		}
	}
	else{
		return(-1);
	}
}

int main(){
	int n,i,x;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched : \n");
	scanf("%d", &x);
	int result = linear_search(ar,n,x,0);
	printf("%d",result);
	return(0);
}