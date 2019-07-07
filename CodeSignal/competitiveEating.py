# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/BPFsda3ddPJruBX24

# https://www.programiz.com/python-programming/methods/string/format

def competitiveEating(t, width, precision):
    return '{:^{}.{}f}'.format(t, width, precision)

print(competitiveEating(3.1415, 10, 2))