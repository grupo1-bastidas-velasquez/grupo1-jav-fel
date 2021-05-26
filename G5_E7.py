d = 1500
x = []
q, r, t, k, n, l = 1, 0, 1, 1, 3, 3

while len(x) < d:
    if 4*q + r - t < n * t:
        x.append(n)
        q, r, t, k, n, l = (
            10*q, 10*(r-n*t), t, k,
            (10*(3*q+r))//t-10*n,l)
    else:
        q, r, t, k, n, l = (
            q*k, (2*q+r)*l, t*l, k+1,
            (q*(7*k+2) + r*l)//(t*l), l+2)

s = [str(j) for j in x ]

A = s[0] + '.' + ''.join(s[1:])

print(A)
