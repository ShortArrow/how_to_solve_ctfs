import re
in_f1 = open("dist/helmet.enc", "r")
in_f2 = open("dist/helmet.list", "r")
out_f = open("writeup_tools/helmet.step", "w")
enc_list = in_f1.readlines()
num_list = str.split(in_f2.readline(),sep="#")[1:]
dec_list = []
for item in enc_list:
    while ('<></>' in item):
        item = item.replace('<></>',"#"+num_list.pop(0),1)
    dec_list.append(item)
out_f.writelines(dec_list)
out_f.close()
in_f1.close()
in_f2.close()