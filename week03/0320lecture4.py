#combination
import random

while True:
    print("Let's flip the Coin!")
    coin = random.randint(1,2)
    if coin == 1:
        print("(백원)")
    else:
        print("(100)")
    while True :
        print("Do you want to play again? (yes or no)")
        answer = input()
        if answer == "yes" or answer == "no" :
            break
    if answer == "no" :
        break
