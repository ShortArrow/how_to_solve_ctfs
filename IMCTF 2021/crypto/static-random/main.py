import random


def encoder(inputtext: str):
    random.seed("we wish a merry xmas")
    encoded: str = ""
    for item in inputtext:
        encoded += chr(ord(item) - random.randint(0, 10))
    return encoded


if __name__ == "__main__":
    with open(".env", "r") as f:
        flag = f.read()
    with open("message.txt", "w") as f:
        f.write(encoder(flag))
