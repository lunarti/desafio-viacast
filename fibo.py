def fibonacci(n: int) -> int:

    fibo = lambda n: [listaux.append(sum(listaux)) or listaux.pop(0) 
                  for listaux in [[0,1]] for _ in range(n)]
    return fibo(n)[-1]
