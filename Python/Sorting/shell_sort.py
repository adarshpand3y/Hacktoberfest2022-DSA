
def shell_sort(inp, n):
 
    h = n // 2
    while h > 0:
        for i in range(h, n):
            t = inp[i]
            j = i
            while j >= h and inp[j - h] > t:
                inp[j] = inp[j - h]
                j -= h
 
            inp[j] = t
        h = h // 2
 
 
inp = [34, 12, 20, 7, 13, 15, 2, 23]
n = len(inp)
print('Array before Sorting:')
print(inp)
shell_sort(inp, n)
print('Array after Sorting:')
print(inp)
