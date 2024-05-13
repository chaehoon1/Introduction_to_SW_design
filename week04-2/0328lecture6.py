#Hangman Game
import random

def pickRandomWord(words) :
    index = random.randint(0, len(words)-1)
    return words[index]

def removeRedundantCharacter(word) :
    letters = []
    for letter in word :
        if letter not in letters :
            letters.append(letter)
    return letters

def displayLetters(word, guessses) :
    for character in word :
        if character in guesses :
            print(character, end="")
        else :
            print("_", end = "")

words = '''ant baboon badger bat bear beaver camel cat clam cougar coyote crew deer dog donkey duck eagle ferret fox frog goat goose hawk lion lizard llama mole monkey moose mouse mule newt otter owl panda parrot pigeon rabbit ram rat raven rhino salmon seal shark sheep skunk sloth snake spider stork swan tiger toad trout turkey turtle whale wolf wombat zebra'''
words = words.split()

playAgain = True
while playAgain :
    secretWord = pickRandomWord(words)
    print("you can guess my word")
    guesses = []
    letters = []
    count = 0

    for letter in list(secretWord) :
        if letter not in letters :
            letters.append(letter.lower())

    letters = removeRedundantCharacter(letters)
    
    while len(letters) > 0 :
        print("The secret word: ", end="")

        displayLetters(secretWord, guesses)

        print()
        guess = input()
        guess = guess.lower()

        if guess in guesses :
            print("You've already typed the letter: " + guess)
        elif guess in letters :
            guesses.append(guess)
            pos = letters.index(guess)
            del letters[pos]
            print("You found a letter in the word")
            count = count + 1
        else :
            print("You missed a letter in the word")
            count = count + 1

        if count == 6 and len(letters) != 0 :
            print("You used all chance...You lose!")
            break
    
    if len(letters) == 0 :
        print("You Win!")

    print("Do you want to play again? (yes or no)")
    answer = input()
    if answer == "yes" :
        playAgain = True
    else :
        playAgain = False
