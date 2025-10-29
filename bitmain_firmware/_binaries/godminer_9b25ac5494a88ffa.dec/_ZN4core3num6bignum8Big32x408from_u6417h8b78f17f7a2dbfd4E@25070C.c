void *__fastcall core::num::bignum::Big32x40::from_u64(int a1, __int64 a2)
{
  int v3; // r1

  if ( a2 )
  {
    if ( HIDWORD(a2) )
    {
      v3 = 2;
    }
    else
    {
      HIDWORD(a2) = 0;
      v3 = 1;
    }
  }
  else
  {
    a2 = 0;
    v3 = 0;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 160) = v3;
  return memset((void *)(a1 + 8), 0, 0x98u);
}
