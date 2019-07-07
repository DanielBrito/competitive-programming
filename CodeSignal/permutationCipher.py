# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/YADembruQtLCmiBKB

def permutationCipher(password, key):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", key)
    return password.translate(table)

password = "iamthebest"
key = "zabcdefghijklmnopqrstuvwxy"
#     "abcdefghijklmnopqrstuvwxyz"

print(permutationCipher(password, key))