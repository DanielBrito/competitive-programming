# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/FmSEJMu8fbybQ7Ka4

import re

def getCommit(commit):
    return re.sub('[!+?0]', '', commit)

print(getCommit("0??+0+!!someCommIdhsSt"))