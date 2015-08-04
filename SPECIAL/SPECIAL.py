# -*- coding: utf-8 -*-

import sys
from time import sleep

RED = '\033[91m'
GREEN = '\033[92m'
YELLOW = '\033[93m'
BLUE = '\033[94m'
PURPLE = '\033[95m'
END = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'

answers = []
def print_slowly(color, text, end=False):
    print color
    for c in text:
        sys.stdout.write( '%s' % c )
        sys.stdout.flush()
        sleep(0.05)
    if end:
        print END
    else:
        print '\n'

print_slowly(GREEN, "For the upcoming epic quest you are required to take the following general aptitude test.", True)
print '\n'

print_slowly(GREEN, "First, I'm going to ask you some questions. Be truthful.", True)
print '\n'

sleep(1)

print_slowly(GREEN, 'What is your name?', True)
name = raw_input()

print_slowly(GREEN, 'Age?', True)
age = raw_input()

print_slowly(GREEN, 'Sex?', True)
sex = raw_input()

print_slowly(GREEN, 'Location?', True)
location = raw_input()

print_slowly(GREEN, 'Girth of penis', True)
girth = raw_input()    

print_slowly(GREEN, 'Seems like you are an expert with small guns.', True)
print '\n'

sleep(1)

print_slowly(GREEN, "Next, I'm going to say a word. I want you to say the first thing that comes to mind...", True)
print '\n'

sleep(1)

print_slowly(YELLOW, "Things:", True)

sleep(1)

print_slowly(GREEN, 'Dog.', True)
answer1_1 = raw_input()
answers.append(answer1_1)

print_slowly(GREEN, 'Cream.', True)
answer1_2 = raw_input()
answers.append(answer1_2)

print_slowly(GREEN, 'Pie.', True)
answer1_3 = raw_input()
answers.append(answer1_3)

print_slowly(GREEN, 'Jallu.', True)
answer1_4 = raw_input()
answers.append(answer1_4)

print_slowly(GREEN, 'Wedding.', True)
answer1_5 = raw_input()
answers.append(answer1_5)
print '\n'


sleep(1)

print_slowly(YELLOW, "Sex Acts:", True)

sleep(1)

print_slowly(GREEN, 'The Missionary.', True)
answer2_1 = raw_input()
answers.append(answer2_1)

print_slowly(GREEN, 'The Bishop.', True)
answer2_2 = raw_input()
answers.append(answer2_2)

print_slowly(GREEN, 'The Skull Fuck.', True)
answer2_3 = raw_input()
answers.append(answer2_3)

print_slowly(GREEN, 'The Crouching Penis, The Hidden Vagina.', True)
answer2_4 = raw_input()
answers.append(answer2_4)

print_slowly(GREEN, 'The Mesimäki.', True)
answer2_5 = raw_input()
answers.append(answer2_5)

print_slowly(GREEN, 'The Mr. Anderson.', True)
answer2_6 = raw_input()
answers.append(answer2_6)

print_slowly(GREEN, 'The Fisherman\'s Wife.', True)
answer2_7 = raw_input()
answers.append(answer2_7)
print '\n'



sleep(1)

print_slowly(YELLOW, "People:", True)

sleep(1)

print_slowly(GREEN, 'Jerry Mesimäki.', True)
answer3_1 = raw_input()
answers.append(answer3_1)

print_slowly(GREEN, 'Daniel Tolkki.', True)
answer3_2 = raw_input()
answers.append(answer3_2)

print_slowly(GREEN, 'Joel Kanervo.', True)
answer3_3 = raw_input()
answers.append(answer3_3)

print_slowly(GREEN, 'Antti Korpelainen.', True)
answer3_4 = raw_input()
answers.append(answer3_4)

print_slowly(GREEN, 'Juuso Pikkujämsä.', True)
answer3_5 = raw_input()
answers.append(answer3_5)

print_slowly(GREEN, 'Juuso Strömberg.', True)
answer3_6 = raw_input()
answers.append(answer3_6)

print_slowly(GREEN, 'Niilo Korkiakoski.', True)
answer3_7 = raw_input()
answers.append(answer3_7)

print_slowly(GREEN, 'Teemu Sarapisto.', True)
answer3_8 = raw_input()
answers.append(answer3_8)

print_slowly(GREEN, 'Matias Juntunen.', True)
answer3_9 = raw_input()
answers.append(answer3_9)

print_slowly(GREEN, 'Olli Vanhoja.', True)
answer3_10 = raw_input()
answers.append(answer3_10)

print_slowly(GREEN, 'Thomas Tontchev.', True)
answer3_11 = raw_input()
answers.append(answer3_11)

print_slowly(GREEN, 'Sami Åhl.', True)
answer3_12 = raw_input()
answers.append(answer3_12)

print_slowly(GREEN, 'Aleksi Auvinen.', True)
answer3_13 = raw_input()
answers.append(answer3_13)

print_slowly(GREEN, 'Tommi Nikkanen.', True)
answer3_14 = raw_input()
answers.append(answer3_14)

print_slowly(GREEN, 'Tomi Virtanen.', True)
answer3_15 = raw_input()
answers.append(answer3_15)

print_slowly(GREEN, 'Jere Toivonen.', True)
answer3_16 = raw_input()
answers.append(answer3_16)

print_slowly(GREEN, 'Lauri Kangassalo.', True)
answer3_17 = raw_input()
answers.append(answer3_17)

print_slowly(GREEN, 'Heikki Honkanen.', True)
answer3_18 = raw_input()
answers.append(answer3_18)

print_slowly(GREEN, 'Sami Simolin.', True)
answer3_19 = raw_input()
answers.append(answer3_19)

print_slowly(GREEN, 'Moona Kantele.', True)
answer3_20 = raw_input()
answers.append(answer3_20)
print '\n'


sleep(1)

print_slowly(GREEN, "Finally, I'm going to present you with five scenarios. Answer freely, but honestly.", True)
print '\n'

print_slowly(GREEN, '''You are approached by a frenzied Vault prostitute, who yells,
"I'm going to put my quantum harmonizer in your photonic resonation chamber!" 

What's your response?''', True)
answer4_1 = raw_input()
answers.append(answer4_1)

print_slowly(GREEN, '''
While working as a pimp in the Vault Brothel, a prostitute with a strange infection stumbles through the door. 
The infection is spreading at an alarming rate, but the doctor has stepped out for a while. 

What do you do?''', True)
answer4_2 = raw_input()
answers.append(answer4_2)

print_slowly(GREEN, '''
You discover a young prostitute lost in the lower levels of the Vault. 
She's hungry and frightened, but also appears to be in possession of your day's cut. 

What do you do?''', True)
answer4_3 = raw_input()
answers.append(answer4_3)

print_slowly(GREEN, '''Oh, no! You've been exposed to a questionable prostitute, 
and a mutated hand has grown out of your stomach!

What's the best course of treatment?''', True)
answer4_4 = raw_input()
answers.append(answer4_4)

print_slowly(GREEN, '''A fellow Vault pimp is in possession of a Jallu (the Finnish titty magazine), issue number 1. 
You want it. 

What's the best way to obtain it?''', True)
answer4_5 = raw_input()
answers.append(answer4_5)

sleep(1)
print('\n')

print_slowly(GREEN, '''Wow.. Your mother sure did a number on you! 
Seems like we have to work with what we got.''', True) 

with open('answers.txt', 'wb') as f:
    for answer in answers:
        f.write('- ' + answer + '\n\n')
