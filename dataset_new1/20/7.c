#include<stdio.h>
main(){	
	 int n,l,r,i,t,a;
	 scanf("%d",&t);
	 while(t--){
	 		scanf("%d %d",&l,&r);
	 		a=l;
	 		i=1;
	 	while(i<r){
	 		a=a^(i+1);
	 		i++;
		}
					if((a%2)==0)
						printf("Even\n");
					else
						printf("Odd\n");
	}
}

