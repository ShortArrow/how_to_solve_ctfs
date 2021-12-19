# Read me

## 問題名

skytree xmas nest

## 分野

misc

## 難易度

normal

## 内容

階層ごとにパスワードの断片が配置されており、パスワードを継ぎ足しながら圧縮ファイルをデコードしていく課題です。

## 問題

スカイツリーのエレベーターで上に登ったことはあるかい？ドキドキするよね。もう一回、あのドキドキを体験したくて、こんなものを作ってみたんだけど、どうかな？

[skytree.7z](./skytree.7z)

## フラグ

`imctf{xmas_colored_skytree_is_bright}`

## Write Up

`Create-Zip.ps1`によって生成された２つのファイル「`skytree.7z`」、「`pass.txt`」から、`./skytree-xmass.webp`を抽出します。その過程で大量の中間データを生成します。

オリジナルファイルの上書きを防ぐため、`./Reverse/`フォルダ内で動作させることを推奨します。

PowershellはWindows環境のデフォルト設定で、権限を与えないと起動できません。
前述の２つのPowershellスクリプトは、それぞれ同じ階層に配置されている`launch.cmd`により、自動的に権限付与して起動可能です。
権限付与のスコープはプロセス内に留まるため、他の設定は不要です。

`pass.txt`が最初のパスワードになっています。圧縮ファイルを解凍すると、テキストファイルが出てくるので、中身の文字列をパスワードに継ぎ足して解凍します。これを634回、繰り返します。

`Decompress-Zip.ps1`でデコードが出来ます。他のファイルに影響が出ないように`./Reverse/`内での実行をオススメします。

その後、exiv2などでexif情報からフラグを取り出します。

```bash
sudo apt install exiv2 -y
exiv2 -pa -g desc ./skytree-xmass.webp
```
