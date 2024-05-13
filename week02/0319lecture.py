#Dragon realm
import random
import time

delay = 1

def printScript(msg):
    print(msg)
    time.sleep(delay)

printScript("you are in a land full of dragons. In front of you,")
printScript("you see two cave. In one cave, the dragon is frienfly")
printScript("and will share his dragon with you. The other dragon")
printScript("is greedy and hingry, and will eat you on sight.")
print()

playAgain=True
while playAgain:
    print("Which cave do you want to go into?(1 or 2)")
    cave=random.randint(1,2)
    chosen=""
    while chosen!="1" and chosen!="2":
        cave=str(cave)
        chosen=input()
    printScript("You approach the cave...")
    printScript("It is dark and spooky...")
    printScript("A large dragon jumps out in front of you! He opens his jaw and...")
    if cave==chosen:
        printScript("Gobbles you down in one bite!!")
        printScript("you died")
    else :
        printScript("Gives you his treasure!")
        printScript("you got rich")

    answer = input("Do you want to play again? (yes or no)")
    if answer=="yes" :
        playAgain = True
    else :
        playAgain = False
    
