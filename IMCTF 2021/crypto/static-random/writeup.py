import random

def decoder(inputtext: str):
    random.seed("we wish a merry xmas")
    decoded: str = ""
    for item in inputtext:
        decoded += chr(ord(item) + random.randint(0, 10))
    return decoded

if __name__ == "__main__":
    with open("./message.txt", "r") as f:
        flag = decoder(f.read())
    print(flag)