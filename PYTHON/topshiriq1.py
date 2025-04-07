coffee = 5
while True:
    if coffee == 0:
        print("커피가 매진되었습니다.")
        break
    money = int(input("돈을 넣어 주세요: \n>>>"))
    if money == 300:
        print("커피 한 잔 바드세요")
        coffee-=1
    if money > 300:
        print("커피 한 잔 바드세요")
        print("거스름돈 {} 원 받으세요".format(money - 300))
        coffee-=1
    if money < 300:
        print("커피 가격은 300 원입니다")
        print("투입된 돈 {} 원 받으세요".format(money))