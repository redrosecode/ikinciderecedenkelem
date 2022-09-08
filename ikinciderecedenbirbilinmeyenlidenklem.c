#include<stdio.h>
#include<math.h>
float a,b,c,d,x1,x2;
main(){
	printf("ikinci derece bir bilinmeyenli denklemde delta ile bilinmeyenin kokunu buluyoruz\n");
	printf("ussu iki olan bilinmeyenin katsayisini giriniz:");
	scanf("%f",&a);
	printf("ussu bir olan bilinmeyenin kat sayisini giriniz:");
	scanf("%f",&b);
	printf("ussu sifir olan bilinmeyenin kat sayisini giriniz:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d==0){
		x1=(-b-sqrt(d))/2*a;
		printf("%f",x1);
	}
	else{
		if(d>0){
			x1=(-b-sqrt(d))/2*a;
			x2=(-b+sqrt(d))/2*a;
			printf("x1:%f\n x2:%f",x1,x2);
		}
		else
		printf("reel kok yok");
	}
	getch();
}
