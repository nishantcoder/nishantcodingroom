def doubler():
    num=4
    while True:
        yield num
        num*=4


double=doubler()
print(next(double))
