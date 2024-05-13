
#구구단 외기
print("Enter a number")
number=input()
count=1
while count<10 :
    print(number+"x"+str(count)+"="+str(int(number)*count))
    count=count+1

#평균 구하기
count=0
box=0
while True :
    number=input("Enter score : ")
    if number=="":
        break
    box=box+int(number)
    count=count+1
print("total: "+str(box))
print("average: "+str(box/count))

#구구단 퀴즈
import random
x=random.randint(2,9)
y=random.randint(2,9)
print(str(x)+"x"+str(y)+"=?")
number=input()
if int(number)==x*y :
    print("Correct!")
else:
    print("Wrong!")