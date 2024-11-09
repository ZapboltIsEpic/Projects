from fractions import Fraction

total = 0

for i in range(8, 2024, 12):
    total += Fraction(1, (i * (i + 12)))

print(Fraction(total))