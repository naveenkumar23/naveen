
#include<stdio.h>
#include<string.h>

int main(void) {
	int i,n,j,t;
	char s[20];
	scanf("%s",s);
	n=strlen(s);
	i=0;j=n-1;
	while(i!=j)
		{
	t=s[i];
	s[i]=s[j];
	s[j]=t;
		j--;
		i++;
	}
	printf("%s",s);
	// your code goes here
	return 0;
}
