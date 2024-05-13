#Hangman Game
import random

def getSecretWord(words) :
    index = random,randint(0, len(words)-1)
    return words[index]

words = '''여러가지 단어들'''
    
playAgain = True
while playAgain :
    secretWord = "Hello"
    print("you can guess my word")
    guesses = ""
    letters = []
    for letter in list(secretWord) :
        if letter not in letters :
            letters.append(letter.lower())
            
    while len(letters) > 0 :
        print("The secret word: ", end="")
        for letter in secretWord :
            if letter.lower() in guesses :
                prirnt(letter, end="")
            else :
                print("_", end="")
        print()
        guess = input()
        guess = guess.lower()
        if guess in guesses :
            print("You've typed the letter: " + guess)
        elif guess in letters :
            guesses = guesses + guess
            pos = letters.index(guess)
            del letters[pos]
            print("You found a letter in the word")
        else :
            print("You missed a letter in the word")

    print("Do you want to play again? (yes or no)")
    answer = input()
    if answer == "yes" :
        playAgain = True
    else :
        playAgain = False
