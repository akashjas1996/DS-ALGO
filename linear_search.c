
/*Linear search is very common algorithm to find an element from n sized array.
The complexity of this algorithm is O(n).

Total number of variables used :
n - (int) number of elements
i - (int) execution of loops
x - (int) Get the element to be found
ar[n] - (int array) to store the input elements
flag - (int) to check whether the number is present or not.


Total number of loops used :
1st loop - To get the input elements and store them in an array.
2nd loop - To compare each element with the searched element.*/


#include<stdio.h>
int main(){
	int i,n,x,flag=0;
	printf("Enter the size of the elements : \n");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched : \n");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(ar[i]==x){
			printf("Element found at - %d position",i);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Element not present in the array.\n");
	}
	return(0);
}
