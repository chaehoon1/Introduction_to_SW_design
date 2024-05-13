#Guess the number
import random
import time

delay=1

def printScript(msg):
    print(msg)
    time.sleep(delay)

printScript("Hello! Whant's your name?")
myName=input()
number=random.randint(1,30)
guessesTaken=1
loseNumber=0

printScript("Well,"+myName+".")
printScript("I'm thinking of a number between 1 to 30.")
printScript("Guess the number, I'll give you five chances.")

while guessesTaken<6:
      guess=int(input())
      if guess==number:
       print("Good job,"+myName+".")
       print("you guess my number!")
       loseNumber=loseNumber+1
       break
      if guess>number:
       print("Nope, my number was lower than "+str(guess)+".")
      if guess<number:
       print("Nope, my number Was higher than "+str(guess)+".")
      guessesTaken=guessesTaken+1 

if loseNumber==0:
   printScript("You used all chances...")
   printScript("You lose, lol.")


#number=10<<<<value로 저장
#guess=input()<<<str로 저장
