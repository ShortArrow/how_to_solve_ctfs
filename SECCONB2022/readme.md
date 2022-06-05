# SECCON Beginners CTF 2022

## misc 

### phisher

問題文

ホモグラフ攻撃を体験してみましょう。
心配しないで！相手は人間ではありません。

```bash
nc phisher.quals.beginners.seccon.jp 44322
```

[phisher.tar.gz]()

1. 配布されている圧縮ファイルを解凍
2. 中身は問題サーバーで稼働しているコンテナのdockercomposeと判明
3. netcatのお相手を探すと、.pyと判明
4. pythonコードと問題文から、OCRを騙す問題と予想
5. 入力文字列をOCRしていることが分かる
6. フラグ取得するための要件が判明
    - OCR結果文字列が`www.example.com`と等しいこと
    - 入力文字列に`www.example.com`と同じASCII文字が含まれないこと
7. 使えそうな文字を探しまくる
8. `ωωω․ε×αмρIε․сοм`が該当した。
    - `www.example.com`->`ωωω․ε×αмρIε․сοм`


参考にしたサイト
- [ホモグラフ攻撃](<https://www.wikiwand.com/ja/%E3%83%9B%E3%83%A2%E3%82%B0%E3%83%A9%E3%83%95%E6%94%BB%E6%92%83>)
- [Unicodeの互換文字](<https://www.wikiwand.com/ja/Unicode%E3%81%AE%E4%BA%92%E6%8F%9B%E6%96%87%E5%AD%97>)
- [Unicode一覧 0000-0FFF](<https://www.wikiwand.com/ja/Unicode%E4%B8%80%E8%A6%A7_0000-0FFF>)
- [Google Fonts | Murecho](<https://fonts.google.com/specimen/Murecho#glyphs>)
