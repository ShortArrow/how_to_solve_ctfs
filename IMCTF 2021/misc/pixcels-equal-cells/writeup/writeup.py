from PIL import Image
from csv import reader

inputFilename: str = "./dist/flag.csv"
outputFilename: str = "./writeup/flag.png"

with open(inputFilename, "r") as csv_file:
    csv_reader = reader(csv_file)
    list_of_rows = list(csv_reader)

size = [len(list_of_rows[0]), len(list_of_rows)]
outputImage: Image = Image.new("RGB", size)

with open(outputFilename, mode="w") as f:
    for x in range(size[0]):
        for y in range(size[1]):
            cell = list_of_rows[y][x].zfill(6)
            r: int = int(cell[:2], 16)
            g: int = int(cell[2:4], 16)
            b: int = int(cell[4:], 16)
            outputImage.putpixel((x, y), (r, g, b))
outputImage.save(outputFilename)

print("finish writeout to " + outputFilename)
