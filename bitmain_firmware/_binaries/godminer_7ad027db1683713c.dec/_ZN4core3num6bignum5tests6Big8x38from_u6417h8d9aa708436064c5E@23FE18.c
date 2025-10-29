int __fastcall core::num::bignum::tests::Big8x3::from_u64(int result, unsigned __int64 a2)
{
  int v3; // r4
  char v4; // r12
  int v5; // lr

  if ( a2 )
  {
    v3 = (__int64)a2 >> 8;
    v4 = 0;
    if ( a2 >> 8 )
    {
      v5 = (__int64)a2 >> 16;
      if ( a2 >> 16 )
      {
        if ( a2 >= 0x1000000 )
          core::panicking::panic_bounds_check(3, 3, (int)&off_2CF618);
        HIDWORD(a2) = 3;
        v4 = v5;
      }
      else
      {
        HIDWORD(a2) = 2;
      }
    }
    else
    {
      HIDWORD(a2) = 1;
      LOBYTE(v3) = 0;
    }
  }
  else
  {
    LOBYTE(a2) = 0;
    LOBYTE(v3) = 0;
    v4 = 0;
    HIDWORD(a2) = 0;
  }
  *(_BYTE *)(result + 6) = v4;
  *(_BYTE *)(result + 5) = v3;
  *(_BYTE *)(result + 4) = a2;
  *(_DWORD *)result = HIDWORD(a2);
  return result;
}
