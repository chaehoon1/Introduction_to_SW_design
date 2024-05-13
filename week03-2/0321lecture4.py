import random
import time

def printScript(msg) :
    print(msg)
    time.sleep(1)

printScript("You are in a land full of dragins. In front of you,")
printScript("you see two caves. In one cave, the dragon is friendly")
printScript("and will share his treasure with you. The other dragon")
printScript("is greedy and hungry, and will eat you on sight.")

def validInput(msg) :
    while msg != "yes" and msg != "no" and msg != "1" and msg != "2" :
        if msg == "Which cave do you want to go into? (1 or 2)" :
            printScript("Which cave do you want to go into? (1 or 2)")
            msg = input()
        else :
            printScript("Do you want to play Again? (yes or no)")
            msg = input()
    return msg

playAgain = True
while playAgain :
    cave = validInput("Which cave do you want to go into? (1 or 2)")
    printScript("You approach the cave...")
    printScript("It is dark and spooky... ")
    printScript("A large dragon jumps out in front of you! He opens his jaws and...")
    if cave == random.randint(1,2) :
        printScript("Gives you his treasure!")
        printScript("You got rich!")
    else :
        printScript("you died")
    yesno = validInput("Do you want to play Again? (yes or no)")
    if yesno == "no" :
        playAgain = False





