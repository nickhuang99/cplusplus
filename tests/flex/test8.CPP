double d = 0x1.4p3; // hex fraction 1.4 (decimal 1.25) scaled by 2^3, that is 10.0

int main()
{
  std::cout << 58.         << '\n'
            << 4e2         << '\n'
            << 123.456e-67 << '\n'
            << .1E4f       << '\n'
            << 0x10.1p0    << '\n'
            << 0x1e5       << '\n'; // integer literal, not floating-point literal
}

58
400
1.23456e-65
1000
16.0625
485

123e4 is 123×104.


1) digit-sequence representing a whole number without a decimal separator, in this case the exponent is not optional: 1e10, 1e-5L
2) digit-sequence representing a whole number with a decimal separator, in this case the exponent is optional: 1., 1.e-2
3) digit-sequence representing a fractional number. The exponent is optional: 3.14, .1f, 0.1e-1L
4) Hexadecimal digit-sequence representing a whole number without a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x1ffp10, 0X0p-1
5) Hexadecimal digit-sequence representing a whole number with a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x1.p0, 0xf.p-1
6) Hexadecimal digit-sequence representing a fractional number with a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x0.123p-1, 0xa.bp10l

