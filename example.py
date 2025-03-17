try:
    a = int(input("첫번째 정수를 입력해 주세요: "))  
    b = int(input("두번째 정수를 입력해 주세요: ")) 
    natija = a + b
    print(f"{a} + {b} = {natija}")  
except ValueError:
    print("Iltimos, faqat son kiriting!")  
