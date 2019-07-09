# https://app.codesignal.com/challenge/zBehEvucW49je7bxr

def lateRide(n):
    return sum(map(int, str((n//60)*100+(n%60))))

print(lateRide(808))