#include <stdio.h>
int main() 
{
	float currency;
	printf("enter the value of currency\n");
	scanf("%f",&currency);
int	hun_note=currency/100;
int	fif_note=(currency-hun_note*100)/50;
int	twe_note=(currency-(hun_note*100)-(fif_note*50))/20;
int	ten_note=(currency-(hun_note*100)-(fif_note*50)-(twe_note*20))/10;
int	fiv_coin=(currency-(hun_note*100)-(fif_note*50)-(twe_note*20)-(ten_note*10))/5;
int	two_coin=(currency-(hun_note*100)-(fif_note*50)-(twe_note*20)-(ten_note*10)-(fiv_coin*5))/2;
int	one_coin=(currency-(hun_note*100)-(fif_note*50)-(twe_note*20)-(ten_note*10)-(fiv_coin*5)-(two_coin*2));
float ptfiv_coin=(currency-(hun_note*100)-(fif_note*50)-(twe_note*20)-(ten_note*10)-(fiv_coin*5)-(two_coin*2)-(one_coin))/0.5;
	printf("hun_note=%d,fif_note=%d,twe_note=%d,ten_note=%d,fiv_coin=%d,two_coin=%d,one_coin=%d,ptfiv_coin=%f\n",hun_note,fif_note,twe_note,ten_note,fiv_coin,two_coin,one_coin,ptfiv_coin);
	return 0;
}
