// getchar関数を使用した連続1文字入力の定石パターン
// 教科書には無いが追加
#include <stdio.h>
main()
{
	int c; // getchar関数は「入力終了」の場合にEOF(-1)を戻り値として返すためint型を使用する
	// 連続1文字入力の定石パターン
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}