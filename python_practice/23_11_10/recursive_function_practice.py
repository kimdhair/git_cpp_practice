def func(n):
    if n==1 or n==2:
        return 1
    return func(n-1)+func(n-2)

print(func(35))

memory = {1: 1, 2: 1}
count = 0
def fibo_memoization(n):
    global count
    count += 1
    if n in memory:
        number = memory[n]
    else:
       number = fibo_memoization(n-1) + fibo_memoization(n-2)
       memory[n] = number
    return number