//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>
#include<string.h> //str.h was used
int main()
//Please add a comment to each line with changes and indicate the changes
{
	char a[100],b; //int was used
	char c=0,i=0; //c=a makes no sense
	printf("Enter a string ");
	fgets(a, sizeof(a), stdin);//scanf("%ni",a); was used
	printf("Enter a character to count ");
        scanf("%c",&b); //%d was used
	printf("%c\n",b); //%d was used
	for(i=0;i<sizeof(a);i++)
		if(a[i]==b)
			c++; //c-- was used
	printf("\nThe number of occurrences of %c is %d",b,c); //%d & %c was interchanged
	return 0; //missing statement
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter a string hello
Enter a character to count l
Output 1
l

The number of occurrences of l is 2

Input 2
Enter a string Mississippi
Enter a character to count s
Output 2
s

The number of occurrences of s is 
*/
//Please add a comment to each line with changes and indicate the changes
