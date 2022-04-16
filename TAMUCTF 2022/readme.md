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

### Taxes

100
Author: Addison

Thank you for completing your 2021 taxes with Another Data Harvester!

We've sent you your 2021 tax return. For your safety and privacy, we've delivered the document as encrypted with your Social Security Number, with no dashes.

We hope you have a pleasant 2022. Make sure to file with us next year so we can harvest your data further help you with your taxes again!

Note: The Social Security Number in question is a United States Social Security Number.

[taxes.zip](taxes.zip)

#### solve

1. `wget https://github.com/magnumripper/JohnTheRipper/archive/bleeding-jumbo.zip`
1. `unzip ./bleeding-jumbo.zip`
1. `perl  john-bleeding-jumbo/run/pdf2john.pl 2021-return-enc.pdf > pdf.hash`
1. `cat pdf.hash` ->>
1. deleted file location and colon `$pdf$2*3*128*-4*1*16*b723cc6032e756aa478f5001ec79c0e5*32*5c89613c1881c3f9e51c407e042355d90122456a91bae5134273a6db134c87c4*32*9b08f608843a9a833ff15833e443ce5cb230bd0f49b7d6fa0612328f661dc7ba`
1. `hashcat -m 10500 -a 3 -w 4 -D 1 -S pdf.hash -1 ?d ?1?1?1?1?1?1?1?1?1`
