num1 = int(input("1 -son"))
num2 = int(input("2 -son"))

if num1 > num2:
    num1,num2 = num2,num1

sum = 0
for i in range(num1,num2+1):
    sum = sum + i
print(f"{num1} ~ {num2} 까지 정수의 합: {sum}")
