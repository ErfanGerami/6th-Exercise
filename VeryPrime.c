
#include <stdio.h>
#include <math.h>


int Primes[]={2,3,5,7};
int IsInPrimes(int ragham){
	for (int i=0;i<4;i++){
		if(ragham==Primes[i])
			return 1;

	}
	return 0;
}

int IsAllPrime(int num){

	while(num!=0){
		if(!IsInPrimes(num%10)){
			//printf("%d,",num);
			return 0;
		}
		num/=10;

	}
	return 1;

}


int IsPrime(int num){

	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(IsAllPrime(i) && IsPrime(i))
			printf("%d ",i);

	}

}
