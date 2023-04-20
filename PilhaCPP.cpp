#include <stdio.h>
#include <stdlib.h>
int PRINTSsizeofs(){

int     var_int;
float   var_float;
char    var_char;
double  var_duble;

printf("\n");
printf("\n");
printf("\n");
printf("\n");


var_int = sizeof(int); //retorna 4 no gcc
printf("Decimal / Int = %d",var_int);printf("\n");

var_float = sizeof(float);
printf("Float = %f",var_float);printf("\n");

var_char = sizeof(char);
printf("Char = %c",var_char);
printf("\n");

var_duble = sizeof(double);
printf("Double = %f",var_duble);printf("\n");

return 0;
}

int main(){
	PRINTSsizeofs();
	PRINTSsizeofs();
	PRINTSsizeofs();
	PRINTSsizeofs();
	PRINTSsizeofs();
return 0;
}
