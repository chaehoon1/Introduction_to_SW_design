#Ask to play again
yesNo = [yes, y, no, n]

while True :
    answer = ""
    while True :
        answer = input()
        if answer in yesNo :
            break
    if answer == "no" or answer == "n" :
        break

