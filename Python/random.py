
# Random file generator
import random
n = 100
fp = open("random_1000.txt","w")
fp.write(str(n)+" ")  
for i in range(1,n):
    x = random.random()
    fp.write(str(int(x*n))+" ")  
x = random.random()
fp.write(str(int(x*n))+" ")  
fp.close()
fp = open("random_1000.txt","r")
x=fp.read().split()
print(len(x))