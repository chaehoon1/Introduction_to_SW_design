#Picking a Random Word
import random

def pickRandomWord(words) :
    index = random.randint(0, len(words)-1)
    return words[index]

words = '''ant baboon badger bat bear beaver camel cat clam cougar coyote crew deer dog donkey duck eagle ferret fox frog goat goose hawk lion lizard llama mole monkey moose mouse mule newt otter owl panda parrot pigeon rabbit ram rat raven rhino salmon seal shark sheep skunk sloth snake spider stork swan tiger toad trout turkey turtle whale wolf wombat zebra'''
words = words.split()

word = pickRandomWord(words)
print(word)
