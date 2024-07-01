#include <stdio.h>
void Str_Reverse(char* s1, char* s2); /* プロトタイプ宣言 */
main()
{
	char str1[256], str2[256];
	printf("文字列?:");
	gets(str1);
	Str_Reverse(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
// 文字列を逆順にコピーする
// 戻り値 : なし
// 引 数 : char *s1 ・コピー元
// char *s2 ・コピー先(逆順に設定)
void Str_Reverse(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}