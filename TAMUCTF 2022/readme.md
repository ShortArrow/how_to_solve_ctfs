# TAMU CTF 2022

## forensics

### Plain

100
Author: SwitchBlade

Someone logged into my computer and stole my flag. Can you get it back for me?

[plain.zip](plain.zip)

#### solve

1. open `plain.pcap` with wireshark
1. filter with `telnet.data ~  ".*=="`
1. found `Z2lnZW17ZDBudF91czNfdDNsbmV0X2V2M3J9Cg==`
1. decode base64

### What's the Difference

Author: SwitchBlade

I made a mistake while making a writeup for a challenge from MetaCTF 2021. Can you find it?

[whats-the-difference.zip](whats-the-difference.zip)

#### solve

1. unzip
1. cd
1. git show

