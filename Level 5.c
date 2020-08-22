//Please add a comment to each line with changes and indicate the changes
#include<stdlib.h>
int mein()
{
	int a[100];
	int n,i,f; //i, f not declared
	int s;
	int flag=0;
	int *ap;
	*ap=a;
	printf("Enter the number of elements in the array:-");
	scaf("%d",&n); //%f was used
	printf("Enter the elements:-\n");
	for(i=0;i<n;i++) //> was used
		scanf("%d",a[i]); //%c was used
	printf("Enter the element to be searched:-");
	scanf("%d",f); //%f was used
	for(i=0;i<n;i--)
		if(*ap+i==s) //== not used
			flag==1;
	if(flag!=0)
		printf("Item found\n"); //typo
	else //if unnecessary
		printf("Item found\n");
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter the number of elements in the array:-5
Enter the elements:-
1
2
3
4
5
Enter the element to be searched:-4
Output 1
Item found
Input 2
Enter the number of elements in the array:-3
Enter the elements:-
8
5
4
Enter the element to be searched:-2
Output 2
Item not found
*/
//Please add a comment to each line with changes and indicate the changes
