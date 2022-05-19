# Puppetter

1. zipを解答するとevtxがたくさんある
1. そのままだと解析が大変なので、xmlにパース
1. [evtx_to_xml.ps1](Logs/evtx_to_xml.ps1)を使う
1. その中にPowershellのログがあり、怪しいので覗いてみる
1. `[a-z]\.ps1`で検索したら、怪しいスクリプトを２つ発見
1. 片方がAMSIに検知されているので注目
1. 怪しいバイト配列があるので解析
1. このとき、pwshを実行しようとすると、一行目の位置が検知されることがログから推測できる
1. 関連する行をコメントアウトしても検知されそう
1. 変数名で検索しながら必要なそうな部分だけ別ファイルに分離
1. 変数`$stage3`を出力できるように修正
1. これをANSIエンコーディングしてみる
1. [CyberChef](https://gchq.github.io/CyberChef/#recipe=From_Charcode('Line%20feed',10)&input=NzIKODQKNjYKMTIzCjk4CjUxCjExOQoxMDQKNTIKMTE0CjUxCjk1CjQ4CjEwMgo5NQoxMTYKMTA0CjUxCjEwMgo5NQoxMDYKMTE3CjExNQoxMTYKNDkKOTkKNTEKNDYKNDYKNDYKMTI1Cg)で解析してみる
1. フラグゲット

Note : Win32Apiが関係ないことに気が付くのが遅れて解けなかった
