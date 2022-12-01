
#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main(void){
	int num;
	int size;
	char name[1001];
	scanf("%d\n",&num);

	while(num--){
		//printf("%d,num);
		gets(name);
		size=strlen(name);
		for(int i=0;i<size;i++){

			if(i==0||isblank(name[i-1]))
				name[i]=toupper(name[i]);
			else
				name[i]=tolower(name[i]);
		}
		printf(strcat(name,"\n"));
	}


	return 0;
}
