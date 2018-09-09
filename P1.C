#include<stdio.h>

int main(){
	
char bits[256];
int estad=0, i=0;

scanf("%s", bits);

for(i=0; bits[i]!='\0'; i++)
{
	if(bits[i]=='0'&&estado==0){
		estad=0;}
		else if(bits[i]=='1'&&estad==0){
		estad=1;}
		else if(bits[i]=='1'&&estad==1){
		estad=0;}
		else if(bits[i]=='0'&&estad==1){
		estad=2;}
		else if(bits[i]=='0'&&estad==2){
		estad=1;}
		else if(bits[i]=='1'&&estad==2){
		estad=2;}
}
if(estad==0){
	printf("%s e multiplo de 3\n", bits);
}else{
	printf("%s nao e\n", bits);
}
return 0;
}