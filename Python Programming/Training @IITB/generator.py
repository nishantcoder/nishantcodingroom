def doubler():
    num=10
    while True:
        yield num #will return each value one by one
        num*=2

double=doubler()
print(next(double))
