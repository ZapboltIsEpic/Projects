from fractions import Fraction

total = 0

for i in range(1, 8):
    total += Fraction(1, (i * (i + 1)))

print(Fraction(total))