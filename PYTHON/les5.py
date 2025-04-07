n = int(input("Number: "))
sum =  0

for i in range(1,n+1):
    sum+=i
    if n % 2 == 0:
        print(sum)