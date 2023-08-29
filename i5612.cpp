#include<stdio.h>
#include<string.h>

int main() {
	char str[10000];
	int len;
	gets(str);
	len = strlen(str);
	if(len>140)
		printf("MUTE");
	else
		printf("TWEET");
}
