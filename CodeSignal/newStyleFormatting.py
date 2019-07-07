# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/GADdmPKQivSzQGYLw

# https://www.programiz.com/python-programming/regex

import re

def newStyleFormatting(s):
    s = re.sub('%%', '{%}', s)
    s = re.sub('%[dfFgeEGnnxXodcbs]', '{}', s)
    return re.sub('{%}','%', s)

print(newStyleFormatting("%d%d%%-growth in products is expected quite soon"))