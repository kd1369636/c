11:05 2024/04/16#include<stdio.h>
main()
{
	int a = 5;//宣言の時に初期化することもできます
	float b;
	printf("a/2=%d \n", a / 2);//整数型同士の除算
	b = a / 2;
	printf("a/2=%f \n",b); //小数点以下を取り扱う場合
	printf("a/2=%f \n", a / 2.0);
}