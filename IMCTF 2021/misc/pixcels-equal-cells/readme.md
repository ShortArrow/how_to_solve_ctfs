# Read me

## 問題名

pixcels equal cells

## 分野

misc?

## 難易度

easy

## 内容

フラグの画像がExcelに変換されて、セルとピクセルが１：１になっている問題。
セルの内容を基にしてピクセル操作で画像ファイルを生成すると解ける。

## 問題文

この世界には、どんなものでもExcelに変えてしまうという「神Excel師」なるものが存在するらしい。そいつは今夜、フラグが書かれた画像をExcelに変えてしまいやがった。なんてことだ！そこの君、なんとかして元に戻せないかな？

## How to build

1. inkscape を使って `flag.svg` を `300dpi` の画像 `flag.png` に変換
1. `gen-csv-from-png.py` を使って`flag.png` を `flag.csv` に変換
1. `flag.png` を削除
1. Excel を使って `flag.csv` を `flag.xlsx` に変換
1. 問題文にて公開するのは `flag.xlsx` のみとする

## フラグ

`imctf{google_pixel_six_pro}`

## テスト

フラグ画像の断片を使ってテストを実施。
`./src/.*_light\..*`というファイル名でテスト用データをまとめている。

![フラグ断片](src\flag_light.png)

## Write Up

1. 問題で`flag.xlsb`が配布されている。開いてみると、重い。１セルを見てみるとRGBコードらしきものがある。

    ![imgxl](./img/xl.png)

1. Excel形式をPython等で読み込むのは重いので、`*.csv`形式に変換して置く。
1. `./writeup/writeup.py` にcsvファイルを通すと画像が生成される。
1. 画像を見てみると、行書体でフラグが書かれている。

    ![flagimg](./img/flag.png)
