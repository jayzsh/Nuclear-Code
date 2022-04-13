def base_to_dec(num, base):
    num = str(num)
    length = len(num)
    dec = 0
    for i in range(length):
        dec = int(num[length - i - 1]) * (base ** i) + dec
    return dec

def dec_to_base(dec, base):
    base_num = ''
    while dec != 0:
        rem = dec % base
        base_num = str(rem) + base_num
        dec = int(dec / base)
    try:
        return int(base_num)
    except:
        return 0
    
def solution(n, b):
    cycle = []
    length = len(n)
    while True:
        digits = [d for d in n]
        digits.sort()
        x = ''
        y = ''
        for i in range(length):
            y = y + digits[i]
            x = digits[i] + x
        x = int(x)
        y = int(y)
        z = str(dec_to_base(base_to_dec(x, b) - base_to_dec(y, b), b))
        if z == '0': return 1
        if len(z) != length:
            for i in range(length - len(z)):
                z = '0' + z
        n = z
        if n not in cycle:
            cycle.append(n)
        else:
            return len(cycle) - cycle.index(n)
