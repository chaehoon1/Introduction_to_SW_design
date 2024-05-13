#way to school
lines = ["신당", "상왕십리", "왕십리", "한양대", "뚝섬", "성수", "건대입구", "구의"]

onBoard = False
station = input("승차역: ")
i_dest = lines.index("한양대")
i_station = lines.index(station)

if i_station > i_dest :
    lines.reverse()
    
for line in lines :
    if line == station :
        onBoard = True
    if onBoard :
        print(line)
    if line == "한양대" :
        break
