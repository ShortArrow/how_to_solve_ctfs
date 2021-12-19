# Readme

## 問題名

nin nin pdf

## 分野

misc

## 難易度

normal

## 内容

PowerPointでPDFを作る
表示枠淵のギリギリに背景同化色でテキストを配置

## 作問

PDF内にBase64で文字を配置

`can you see ? → aW1jdGZ7bmlucG91X2tha3VyZW1pX25vX2p5dXR1fQ== ←can you see ?`

## 問題文

「にんにん！拙者は忍者ハットリくん！今宵、秘密の暗号を雪の中に隠したぞ！」

[隠し場所](./ninnin.pdf)

## フラグ

`imctf{ninpou_kakuremi_no_jyutu}`

## ヒント

1. base64
1. PDF Stream Dumper
1. Span/Type/StructElem/ActualText()

## Writeup

pdf-parserでパースしてみます。

```bash
pdf-parser ./rev/nin-nin-pdf/ninnin.pdf -O -w -f > parse.txt
```

`parse.txt`を見ると、`/Span/Type/StructElem/ActualText()`という関数の中に、

```bash
\xfe\xff\x00c\x00a\x00n\x00 \x00y\x00o\x00u\x00 \x00s\x00e\x00e\x00 \x00?\x00 !\x92\x00 \x00a\x00W\x001\x00j\x00d\x00G\x00Z\x007\x00b\x00m\x00l\x00u\x00c\x00G\x009\x001\x00X\x002\x00t\x00h\x00a\x003\x00V\x00y\x00Z\x00W\x001\x00p\x00X\x002\x005\x00v\x00X\x002\x00p\x005\x00d\x00X\x00R\x001\x00f\x00Q\x00=\x00=\x00 !\x90\x00c\x00a\x00n\x00 \x00y\x00o\x00u\x00 \x00s\x00e\x00e\x00 \x00?
```

と書いてあります。

ひとまず、`\x00`という部分を消してみると、真ん中にbase64らしきものがあります。

```bash
\xfe\xffcan you see ? !\x92 aW1jdGZ7bmlucG91X2tha3VyZW1pX25vX2p5dXR1fQ== !\x90can you see ?
```

`aW1jdGZ7bmlucG91X2tha3VyZW1pX25vX2p5dXR1fQ==`をBase64で復号してみると、`imctf{ninpou_kakuremi_no_jyutu}`が得られます。
