#include <stdio.h> 
#include <string.h> 

void palindrome(char str[]){
	int left=0;
	int right=strlen(str)-1;


	while(right>left){
		if(str[left++]!=str[right++]){
		printf("% struct  
		{
			
		};string is not palindrome",str);
		}
	}
}

int main() 
{ 
    isPalindrome("abba"); 
    isPalindrome("abbccbba"); 
    isPalindrome("geeks"); 
    return 0; 
}