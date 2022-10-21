phone = input(" Phone:")
digit_mapping = {
    "1": "One",
    "2": "Two",
    "3": "Three",
    "4": " Four"
}
output =" "
for ch in phone:
    output +=digit_mapping.get(ch, "@") + " "
print(output)
# try out multiple permutations,its super fun!
