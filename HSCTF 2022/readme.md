# HSCTF 2022

## web

### web/gallery

hmmm
290 solves / 210 points
Look at these images I found!

<http://web1.hsctf.com:8003>

[gallery.zip](dist/gallery.zip)

---

`main.py`がFlaskのバックエンドapiになっている。

```py
if ".jpg" not in request.args["image"]:
  return "Invalid filename", 400
```

--> ここから、`image`に、`.jpg`という文字列が含まれる必要があることが分かる。


```py
return send_file("/flag.txt")
```

--> ここから、ルートディレクトリにフラグがあることが分かる。

---

以上の３つのヒントから、下記のURLを用意。

まずは単純に、`../../../flag.txt`を含ませる。

<http://web1.hsctf.com:8003/image?image=../../../flag.txt>

これだとURLとして機能しないため、URLエンコーディングを行う。

<http://web1.hsctf.com:8003/image?image=%2e%2e%2f%2e%2e%2f%2e%2e%2fflag.txt>

ここで、`.jpg`を含めるために、`%.jpg`をつける。

<http://web1.hsctf.com:8003/image?image=%.jpg%2e%2e%2f%2e%2e%2f%2e%2e%2fflag.txt>

出来上がったURLでアクセスしてみるとフラグが表示される。

### web/squeal

jalibreeze
256 solves / 242 points
Can you log into this super secret site as admin? It's okay to SQueaL

<http://web1.hsctf.com:8006/>

[squeal.zip](dist/squeal.zip)

---

```js
`SELECT * FROM users WHERE username = '${username}' AND password = '${password}';`
```

--> これがまず怪しい

[prepare better-sqlite3 ctf というキーワードで検索](https://www.google.com/search?q=prepare+better-sqlite3+ctf)すると、ほぼおなじソースコードで出題している過去のCTFがあったらしい。

- <https://ctftime.org/writeup/21984>
- <https://willgreen.tech/writeups/DiceCTF-2021-Writeups/>

SQLクエリが下記になるようにユーザー名とパスワードを入力すればいい。

```js
"SELECT * FROM users WHERE username = 'admin' or 1=1 -- ' AND password = '${password}';"
```

よってユーザー名は`admin' or 1=1 --`、パスワードはなんでもいい。
これでフラグが取れる。

