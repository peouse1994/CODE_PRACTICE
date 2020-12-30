#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool isPalindrome(int x){
	if(x < 0) //if negative
		return false;
	// for 16bit integer	
	char * str = (char*)malloc(16*sizeof(char));
	sprintf(str,"%d",x);
	// store the total length of the data
	int len = strlen(str); 
	// compare the last with the 1st char
	// if equal the it is a palindrome
	int i,j;
	for(i=0,j=(len-1);i<=j;i++,j--)
	//if not equal at any point return false
		if (str[i] != str[j])
			return false;
	//if all matched then return true		
	return true;
}
int main()
{
	int data;
	while (1)
	{
		printf("Enter the number : ");
		scanf("%d",&data);
		printf("The result is %d\n", isPalindrome(data));
	}
	return 0;
}


