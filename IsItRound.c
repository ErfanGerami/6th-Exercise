
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int Pal(int num){
	//printf("%d,,",num);
	int SavedNum=num;
	int numTemp=0;
	while(num!=0){
		numTemp*=10;
		numTemp+=num%10;
		num/=10;

	}
	if(SavedNum==numTemp){
		return 1;
	}
	return 0;
}

int IsThere4Digits(char st[]){
	int nums[11]={0};
	for(int i=0;i<8;i++){
		nums[st[i]-48]++;
		//printf("%d,",nums[st[i]-48]);
		if(nums[st[i]-48]>=4)
			return 1;
	}
	return 0;
}

int IsThere3RowDigits(char st[]){
	char BeforDigit='\0';
	int NumberOfRows=0;
	for(int i=0;i<8;i++){

		if(BeforDigit==st[i]){
			//printf(",%c,",st[i]);
			NumberOfRows++;

		}else{
			NumberOfRows=1;
			BeforDigit=st[i];
		}
		if(NumberOfRows==3){
			return 1;
		}
	}

	return 0;
}
int main(void){
	int n;
	scanf("%d\n",&n);
	char st[10];
	int counter=0;
//	gets(st);
	//printf("%d,",IsThere3RowDigits(st));
	//printf("%d\n",n);
	while(counter<n){
		//printf("%d,,",n);
		gets(st);
		//printf("%d,,",n);
		if(st[0]!='0' && (   IsThere3RowDigits(st)||IsThere4Digits(st) ||Pal(atoi(st))  ) ){
			printf("Ronde!\n");
		}else{
			printf("Rond Nist\n");
		}
		counter++;
	}



	return 0;
}
