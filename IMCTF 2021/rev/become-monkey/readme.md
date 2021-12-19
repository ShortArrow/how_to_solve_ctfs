# Readme

## 問題名

become chaos monkey

## 分野

rev

## 難易度

normal

## 内容

Windowsアプリで、例外処理を見つける問題

## 問題文

カオスエンジニアリングを実践しましょう。さあ、今から Failure Injection Testing を始めます。皆さんにはこれからおサルさんになってもらいます。え？何ですか？「Chaos Monkey」っていうツールがあるんですか？知りません。とりあえず今すぐできることをやってください。

[障害テストの対象](./dist/become-monkey.zip)

## フラグ

`imctf{K3nn3+h_Ha13_i5_a_5up3r_H3r0_G0ri11a_Man}`

## ヒント

1. You don't need Brute-force
1. [Standard exceptions](https://docs.microsoft.com/ja-jp/dotnet/api/system.exception?view=net-6.0#choosing-standard-exceptions)

## Writeup

1. アプリを起動してみると掛け算と割り算が出来る計算アプリであることが分かる。
1. 試しに計算してみると普通にできる。
1. 定番の`1÷0`とかしてみる
1. フラグの欠片１つ目ゲット
1. アルファベット突っ込んだらどうなる？
1. `a×b`とかやってみる
1. フラグの欠片２つ目ゲット
1. `999999999999999999999×99999999999999999`とか適当に大きくしてみる
1. 最後のフラグの欠片をゲット
1. それぞれBase64で復号

## 注意

[.NET 6](https://dotnet.microsoft.com/en-us/download)がインストールされているWindows11が推奨解答環境です。
