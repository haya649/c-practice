## コンパイル成功時のみ実行するワンライナー

gcc -O2 -std=c11 a.c -lm && ./a.out

## デバック用

gcc -O2 -std=c11 -Wall -Wextra -Wshadow -Wconversion -fsanitize=address,undefined a.c -lm && ./a.out

## a

- 入力も文字列は最大10文字＋終端のnull文字('\0')を格納できるように、char s[11]に保存している
- 文字列の実際の長さを求めるために、終端の'\0'が現れるまでループを回す
- scanf("%10s, s); を使いバッファオーバーフローを防ぐ(今回は制約でs<=10となっているが一応つけておく)
