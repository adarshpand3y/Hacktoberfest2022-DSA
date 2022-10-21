import random

pass1 = ['a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j',
         'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
         't', 'u', 'v', 'x', 'y', 'z', 'A', 'B', 'C',
         'D', 'E', 'F', 'G', 'H', 'I', 'K', 'L', 'M',
         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'W',
         'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6',
         '7', '8', '9', '0', '@', '#', '$', '_', '*',
         '.', '!', '(', ')', '%', '^', '/', '|', ' ']
password = " "
for x in range(16):
    password = password + random.choice(pass1)[0]

print('your new password is:\n', password)
