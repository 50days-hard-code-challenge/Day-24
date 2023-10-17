def printNos(x: int) -> List[int]:
    # Write your code here
    if x==1:
        return [1]
    else:
        a=printNos(x-1)
        a.insert(0,x)
        return a
    pass
