import sys

path_enc = "dist/helmet.enc"
path_list = "dist/helmet.list"
print("""

▒█░░▒█ ▒█░▒█ ▒█▀▀▀█ ▒█▀▀▀█ ▒█▀▀▀ 　 ▀█▀ ▒█▀▀▀█ 　 ▀▀█▀▀ ▒█░▒█ ▀█▀ ▒█▀▀▀█ ▀█ 
▒█▒█▒█ ▒█▀▀█ ▒█░░▒█ ░▀▀▀▄▄ ▒█▀▀▀ 　 ▒█░ ░▀▀▀▄▄ 　 ░▒█░░ ▒█▀▀█ ▒█░ ░▀▀▀▄▄ █▀ 
▒█▄▀▄█ ▒█░▒█ ▒█▄▄▄█ ▒█▄▄▄█ ▒█▄▄▄ 　 ▄█▄ ▒█▄▄▄█ 　 ░▒█░░ ▒█░▒█ ▄█▄ ▒█▄▄▄█ ▄░\n\n

whose is this? please tell me!

""")
with open(path_enc) as f:
    while True:
        s_line = f.readline()
        print(s_line,end="")
        if not s_line:
            break
print("\n\n### change from here ###\n")
with open(path_list) as f:
    while True:
        s_line = f.readline()
        print(s_line,end="")
        if not s_line:
            break

print("""

That's all data. Please change to a step and check.

▒█░░▒█ ▒█░▒█ ▒█▀▀▀█ ▒█▀▀▀█ ▒█▀▀▀ 　 ▀█▀ ▒█▀▀▀█ 　 ▀▀█▀▀ ▒█░▒█ ▀█▀ ▒█▀▀▀█ ▀█ 
▒█▒█▒█ ▒█▀▀█ ▒█░░▒█ ░▀▀▀▄▄ ▒█▀▀▀ 　 ▒█░ ░▀▀▀▄▄ 　 ░▒█░░ ▒█▀▀█ ▒█░ ░▀▀▀▄▄ █▀ 
▒█▄▀▄█ ▒█░▒█ ▒█▄▄▄█ ▒█▄▄▄█ ▒█▄▄▄ 　 ▄█▄ ▒█▄▄▄█ 　 ░▒█░░ ▒█░▒█ ▄█▄ ▒█▄▄▄█ ▄░\n\n

Are you ok? ok! okey!

""")
exit()