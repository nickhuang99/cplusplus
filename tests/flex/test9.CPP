// a comment of c++
/* start c-comment
next line of c-comment
another line of c-comment
end of c-comment */

something else
/* c-comment after // c++ comment within c-comment */
mega-kludge
this is a raw-string R"delimit(I am inside raw-string a comment perhaps/*
a while space line next
here is inside 
int *ptr=nullptr;
bool f=false
	f=true;
a while space line end
c-comment */)delimit";


some other garbage
this is a raw-string R"delimit1(I am inside raw-string a comment perhaps/*
a while space line next

a while space line end
c-comment */)delimit1";
"another ordiunary string literal"
some other garbage
dome	sdf"this is a ordinary string literal" outsie string literal
L"this is wide string literal"
qwu"u16 string literal"
wwu8"u8 string literal"
eeU"u32 string literal"
qu 8"is this an ordinary string literal?"
L"这是wide中文"
""
R"thisisalongdelimiteranditshouldbeokwhowaboutmoretha("
0b0
0b1
0B0
0B1
0b0'0
0B1'1

0B1'11'0101'0
0B1'1'0101'000'111'01'

0b1'1'04101'000'111'01'
)thisisalongdelimiteranditshouldbeokwhowaboutmoretha""
int d = 42;
int o = 052;
int x = 0x2a;
int X = 0X2A;
int b = 0b101010; // C++14

unsigned long long l1 = 18446744073709550592ull; // C++11
unsigned long long l2 = 18'446'744'073'709'550'592llu; // C++14
unsigned long long l3 = 1844'6744'0737'0955'0592uLL; // C++14
unsigned long long l4 = 184467'440737'0'95505'92LLU; // C++14


auto x = 0xE+2.0;   // error
auto y = 0xa+2.0;   // OK
auto z = 0xE +2.0;  // OK
auto q = (0xE)+2.0; // OK


std::cout << 123    << '\n'
          << 0123   << '\n'
          << 0x123  << '\n'
          << 0b10   << '\n'
          << 12345678901234567890ull << '\n'
          << 12345678901234567890u   << '\n'; // the type is unsigned long long even
                                              // without a long long suffix

//   std::cout << -9223372036854775808 << '\n'; // error: the value
                // 9223372036854775808 cannot fit in signed long long, which is the
                // biggest type allowed for unsuffixed decimal integer literal
     std::cout << -9223372036854775808u << '\n'; // unary minus applied to unsigned
                // value subtracts it from 2^64, this gives 9223372036854775808
     std::cout << -9223372036854775807 - 1 << '\n'; // correct way to calculate
                                                    // the value -9223372036854775808

#if __cpp_size_t_suffix >= 202011L // C++23
     static_assert(std::is_same_v<decltype(0UZ), std::size_t>);
     static_assert(std::is_same_v<decltype(0Z), std::make_signed_t<std::size_t>>);
#endif
 dump("a", 'a');
    dump("🍌", '🍌'); // implementation-defined
    print("\n");

    // ordinary multi-character literal
    dump("ab", 'ab'); // implementation-defined
    print("\n");

    // UTF-16 character literals
    char16_t uc1 = u'a'; dump("a", uc1);
    char16_t uc2 = u'¢'; dump("¢", uc2);
    char16_t uc3 = u'猫'; dump("猫", uc3);
//  char16_t uc4 = u'🍌'; dump("🍌", uc4); // error: 🍌 maps to two UTF-16 code units
    print("\n");

    // UTF-32 character literals
    char32_t Uc1 = U'a'; dump("a", Uc1);
    char32_t Uc2 = U'¢'; dump("¢", Uc2);
    char32_t Uc3 = U'猫'; dump("猫", Uc3);
    char32_t Uc4 = U'🍌'; dump("🍌", Uc4);
    print("\n");

    // wide character literals
    wchar_t wc1 = L'a'; dump("a", wc1);
    wchar_t wc2 = L'¢'; dump("¢", wc2);
    wchar_t wc3 = L'猫'; dump("猫", wc3);
    wchar_t wc4 = L'🍌'; dump("🍌", wc4);
'\j'

    '\uAAAA'
    L'\UABCDEF01'
	'\UABCDEF01\\\'abcd12345'

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

