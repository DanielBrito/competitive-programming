# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/joYKtZyJDDsFQBLHP

def convertTabs(code, x):
    return code.replace('\t', ' ' * x)

print(convertTabs('\treturn False', 5))