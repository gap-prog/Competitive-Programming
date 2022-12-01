# HackerRank Problem Link: https://www.hackerrank.com/challenges/class-1-dealing-with-complex-numbers/problem

class Complex(object):
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary
        self.a, self.b = self.real, self.imaginary
    def __add__(self, no):
        return Complex(self.real + no.real, self.imaginary + no.imaginary)
    def __sub__(self, no):
        return Complex(self.real - no.real, self.imaginary - no.imaginary)
    def __mul__(self, no):
        c, d = no.real, no.imaginary
        return Complex((self.a * c - self.b * d), (self.a * d + self.b * c))
    def __truediv__(self, no):
        c, d = no.real, no.imaginary
        denominator = c ** 2 + d ** 2
        return Complex(round((self.a * c + self.b * d) / denominator, 2), round((self.b * c - self.a * d) / denominator, 2))
    def mod(self):
        return Complex(math.sqrt(self.real ** 2 + self.imaginary ** 2), 0)
    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result


