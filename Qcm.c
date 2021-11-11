#include<stdio.h>
#include<stdbool.h>
int main(){
	//e= essaye || r = nombre des qst i= les points 
	int r=1,
	a,
	e=1,
	i=0;
	bool k= false;

	printf("Bienvenu !\ns'il vous plais r�pendez au questions suivants\n");
	
	
	
	
	//methode 1:
	while(r<4){


	switch(r){
		case 1:
			{ r++;
			do{
				printf("QST 1: 1+1 = \n 2 or 3\n");
				scanf("%d",&a);
				if(a==2){
					i+=3;
					k=true;
					printf("true you  have %d points for this question \n",i);
				
				}
				else{
					printf ("false\n you have %d points\n",i);
					--i;
					e++;
				}
			}
			while( e <= 3 && k== false );
					e=1;
					k = false;
					break;
			}
			case 2:
				{r++;
					do{
			
				printf("QST 2: 2+1 = \n 2 or 3\n");
				scanf("%d",&a);
				if(a==3){
					i+=3;
					k=true;
					printf("true you  have %d points for this question \n",i);}
				else{
						printf ("false\n you have %d points\n",i);
						i--;
						e++;
					
					}
					}while(k==false && e<=3 );
					e=1;
					printf("%d",i);
						k = false;
					break;
				}
			case 3:{r++;
					do{
			
				printf("QST 3: 6+7 = \n 0 or 13\n");
				scanf("%d",&a);
				if(a==13){
					k=true;
					i+=3;
					printf("true you  have %d points for this question \n",i);}
					else{
						printf ("false\n you have %d points\n",i);
						i--;
						e++;
					
					}}while(k==false && e<=3 );
					
					printf("%d",i);
					k = false;
					break;
					
			}
			printf("%d",i);
			
				
	}}	
 printf(" Votre score %d",i);
	
	
}
