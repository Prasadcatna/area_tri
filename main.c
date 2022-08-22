#include<equi.h>
#include<iso.h>
#include<ra.h>
#include<sc.h>
#include<stdio.h>

int main(){
	int ch,a,b,c,h;
	printf("1. Find Area and peri of Equi\n2. Find Area and peri of Iso\n3. Find Area and peri of Right Angle\n4. Find Area and peri of Scalen\n");
	scanf("%d",&ch);
	if(ch == 1){
		printf("ENter a: ");
		scanf("%d",&a);
		printf("Area of Equi: %d",areaEqu(a));
		printf("Perimeter of Equi: %d",periEqu(a));

	}
	else if(ch == 2){
		printf("Enter a,b,h: ");
		scanf("%d%d%d",&a,&b,&h);
		printf("Area of Iso: %d",areaIso(b,h));
		printf("Perimeter of Iso: %d",periIso(a,b));

	}
	else if(ch == 3){
	
		printf("Enter a,b: ");
		scanf("%d%d%d",&a,&b);
		printf("Area of Right Angle: %d",areaRA(a,b));
		printf("Perimeter of Right Angle: %d",periRA(a,b));
	}
	else if(ch == 4){
	
		printf("Enter a,b,c,h: ");
		scanf("%d%d%d",&a,&b,&c,&h);
		printf("Area of Scalen: %d",areaSc(h,b));
		printf("Perimeter of Scalen: %d",periSc(a,b,c));
	}
	else
		printf("There is no choice\n");
	return 0;
}
