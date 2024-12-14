#include<stdio.h>
#include<math.h>
int main(){
	int denta,a,b,c;
	printf("moi ban nhap a la: ");
	scanf("%d",&a);
		printf("moi ban nhap b la: ");
	scanf("%d",&b);
		printf("moi ban nhap c la: ");
	scanf("%d",&c);
	denta= b^2-4*a*c;
	if(denta<0){
		printf("phuong trinh vo nghiem");
	}else if(denta==0){
		printf("phuong trinh có nghiem kep X1 = X2 = %d ",-b/2*a);
	}else{
		printf("phuong trinh co 2 nghiem phan biet X1=%.1f X2=%.1f",(-b+sqrt(denta))/2*a,(-b-sqrt(denta))/2*a);
	}
	return 0;
}

