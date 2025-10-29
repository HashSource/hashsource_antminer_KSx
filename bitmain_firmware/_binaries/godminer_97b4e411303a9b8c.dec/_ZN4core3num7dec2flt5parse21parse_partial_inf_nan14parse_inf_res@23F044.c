int __fastcall core::num::dec2flt::parse::parse_partial_inf_nan::parse_inf_rest(_BYTE *a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r2
  bool v4; // cf
  char v5; // r1
  char v6; // r3

  v2 = 3;
  if ( a2 >= 8 )
  {
    v3 = a2 - 3;
    v4 = a2 - 3 >= 5;
    v5 = a1[3] ^ 0x69;
    if ( v4 )
      v3 = 5;
    if ( v3 != 1 )
    {
      v5 |= a1[4] ^ 0x6E;
      if ( v3 != 2 )
      {
        v5 |= a1[5] ^ 0x69;
        if ( v3 != 3 )
        {
          v6 = a1[6];
          if ( v3 != 4 )
            LOBYTE(a1) = a1[7];
          v5 |= v6 ^ 0x74;
          if ( v3 != 4 )
            v5 |= (unsigned __int8)a1 ^ 0x79;
        }
      }
    }
    v2 = 3;
    if ( (v5 & 0xDF) == 0 )
      return 8;
  }
  return v2;
}
