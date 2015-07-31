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

def print_slowly(color, text, end=False):
    print color
    for c in text:
        sys.stdout.write( '%s' % c )
        sys.stdout.flush()
        sleep(0.075)
    if end:
        print END
    else:
        print '\n'

print_slowly(GREEN, 'Who the fuck are you??', True)

name = raw_input()
print_slowly(GREEN, name + ', what a stupid name...', True)

print_slowly(GREEN, 'There are things about this world that none should see, hear or experience.. However, today you have to do these things...')
print_slowly(GREEN, 'Tell me {0}, are you a pussy?'.format(name))