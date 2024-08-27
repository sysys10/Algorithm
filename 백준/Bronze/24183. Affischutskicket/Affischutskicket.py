a, b, c = map(int, input().split())
q = a * 0.229 * 0.324
w = b * 0.297 * 0.42
e = c * 0.21 * 0.297

print("%.3f"%(2*q + 2*w + e))