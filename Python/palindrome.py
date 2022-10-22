def check_palindrome(n):
    num=n
    reverse=0
    i=len(str(n))-1
    while(num>0):
        digit=num%10
        reverse+=digit*pow(10,i)
        i-=1
        num//=10
    if(n==reverse):
        print("yes!",n," is palindrome")
    else:
        print("no!",n," is not a palindrome")
