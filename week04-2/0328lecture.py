#way to school
lines = ["한양대", "뚝섬", "성수", "건대입구", "구의", "신당", "상왕십리", "왕십리", "한양대"]

boardingStation = input("승차역을 입력하세요: ")
count = 0

for line in lines :
    if line == boardingStation :
        break
    count = count + 1

if count < (len(lines)/2) :
    lines.reverse()

onBoard = False
for line in lines :
    if line == boardingStation :
        onBoard = True
    if onBoard :
        print(line)
        if line == "한양대" :
            break
