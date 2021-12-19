# README

## 問題名

ready made default

## 分野

misc? osint?

## 難易度

baby

## 問題文

君は産業スパイとしての身分を隠し、ライバル会社のキーパーソンとの友人関係を構築。自宅へ招かれ、クリスマスの夕食を共にすることになった。相手が席を外したので、Wi-Fi ルーターのパスワードを調べることにした。SSID は `TP-Link_3F04_5G` だ。まったく、豪邸は敷地の外まで Wi-Fi が届かなくて厄介だな。

フラグ形式 `imctf{` + usename + `_` + password + `}`

## フラグ

`imctf{admin_admin}`

## Writeup

1. `TP-Link router password`などで検索すると、[Tp Link Router Default Passwords](https://www.routerpasswords.com/router-password/tp+link/)などが見つかる。
1. TP link 社のWi-fiルーターは、初期設定がすべて同じユーザー名「admin」＆パスワード「admin」だと分かる。

## 作問者コメント

「てか豪邸なのに TP-Link って、どゆこと？」
