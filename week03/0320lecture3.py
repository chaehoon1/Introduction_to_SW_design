#Yes or No to Play Again(using break)
while True:
    print("some logic here...")
    while True :
        print("Do you want to play again? (yes or no)")
        answer = input()
        if answer == "yes" or answer == "no" :
            break
    if answer == "no" :
       break