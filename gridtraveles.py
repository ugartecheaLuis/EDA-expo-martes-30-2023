def gridTravelerMemoized(m,n,memo={}):
    
    if((m,n) in memo):
        return memo[(m,n)]
    if(m == 1 and n == 1):
        return 1
    if(m == 0 or n == 0):
        return 0
    memo[(m,n)] = gridTravelerMemoized(m-1,n,memo) +  gridTravelerMemoized(m,n-1,memo)
    return memo[(m,n)]

print(gridTravelerMemoized(1,1))
print(gridTravelerMemoized(2,3))
print(gridTravelerMemoized(3,3))
print(gridTravelerMemoized(18,18))