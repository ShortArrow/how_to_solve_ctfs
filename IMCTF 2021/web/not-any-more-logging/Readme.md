# Not any more Logging

## Problem

私たちにはもはやログなど必要ない。そう、リリースしたのだから。

[http://104.196.236.136:33369/](http://104.196.236.136:33369/)

## Writeup

ブラウザで開き、ページ内をクリックすると `alert()` 関数でメッセージが表示される。しかし、これは無視でOK。

問題タイトルから、`log`関数に目を付け、ブラウザの開発者ツール内のコンソールで `console.log('hey')` とかしてみる。すると、

```js
> console.log('hey')
undefined
```

なぜだろう？と`console.log`を実行してみる。

```js
> console.log
() => {}
```

となる。ここで、何もしない無名関数が`console.log`に上書きされていることが分かる。

そこで、ブラウザのコンソールで下記を実行。

```js
if (!("console" in window) || !("firebug" in console))
{
  var i = document.createElement('iframe');
  i.style.display = 'none';
  document.body.appendChild(i);
  window.console = i.contentWindow.console;
}
```

これで`console.log`が復活する。

改めてページ内をクリックしてみると、コンソールにダミーフラグが出現する。

明らかに引っ掛け感のあるフラグ。

```bash
Console was cleared
imctf{is_this_flag?_final_answer?}
>
```

ここで、`Console was cleared`という部分に気が付き、`console.clear`が実行されていることに気が付く。

そこで、ブラウザのコンソールで下記を実行。

```js
concole.clear = () => {}
```

もう一度ページ内をクリックしてみると、コンソールにフラグが出現。

## 作問

このフォルダ内で、下記コマンドを実行。compose V2 が前提条件。

```bash
sudo docker compose up -d --build
```
