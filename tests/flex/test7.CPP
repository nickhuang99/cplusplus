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

