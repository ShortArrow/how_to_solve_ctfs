# Readme

## 問題名

made of honey

## 分野

misc

## 難易度

normal

## 内容

NTLMハッシュからパスワードを求める問題

## 問題文

100エーカーの森にもICT化の波は来ているらしい。ここ、はちみつ王国で怪しい影がうごめく。「よう！俺様テガー！今宵、クマ王子プー様はクリスマスパーティーにご出席らしい。やつのPCはお留守だ。今のうちにハチミツ金庫のパスワードを抜き取っちまおう。なんだこれ？」テガーはクリススー・エヴァンに見せてみた。「ああ、これは、プーが欲しがっているものだよ。これで新しいハチミツの産地を開拓するんだってね」

[テガーが見つけたもの](./where-is-hunny.txt)

## ヒント

1. format is `imctf{word1_word2_word3}`
1. all lower case alphabet

## フラグ

`imctf{google_pixel_six}`

## Writeup

john the ripper を利用して解きます。

```bash
 john --wordlist=/usr/share/wordlists/rockyou.txt ./where-is-hunny.txt --format=NT --fork=8 --pot=./pwned.pot
```

結果はこんな感じ。

```bash
Using default input encoding: UTF-8
Loaded 3 password hashes with no different salts (NT [MD4 256/256 AVX2 8x3])
Node numbers 1-8 of 8 (fork)
Press 'q' or Ctrl-C to abort, almost any other key for status
google           (word1)
pixel            (word2)
six              (word3)
4 0g 0:00:00:00 DONE (2021-12-09 20:23) 0g/s 3515Kp/s 3515Kc/s 10546KC/s !!)&)*..xCvBnM,
2 0g 0:00:00:00 DONE (2021-12-09 20:23) 0g/s 3515Kp/s 3515Kc/s 10546KC/s !!!lauren!!!..
3 1g 0:00:00:00 DONE (2021-12-09 20:23) 1.960g/s 3515Kp/s 3515Kc/s 7345KC/s !!11CarlyW..
5 0g 0:00:00:00 DONE (2021-12-09 20:23) 0g/s 3515Kp/s 3515Kc/s 10546KC/s !!!mafy13051969!!!.ie168
7 0g 0:00:00:00 DONE (2021-12-09 20:23) 0g/s 3515Kp/s 3515Kc/s 10546KC/s !!!romy!!!.a6_123
6 1g 0:00:00:00 DONE (2021-12-09 20:23) 1.960g/s 3515Kp/s 3515Kc/s 7031KC/s !!!lkav!!!.abygurl69
1 0g 0:00:00:00 DONE (2021-12-09 20:23) 0g/s 3515Kp/s 3515Kc/s 10546KC/s !!##@@..
8 1g 0:00:00:00 DONE (2021-12-09 20:23) 1.960g/s 3515Kp/s 3515Kc/s 7072KC/s !!!heather..*7¡Vamos!
Waiting for 7 children to terminate
Session completed
```
