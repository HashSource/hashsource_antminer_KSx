int __fastcall core::num::flt2dec::digits_to_dec_str(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  int result; // r0
  int v8; // r4
  unsigned int v9; // r1
  bool v10; // cc
  unsigned int v11; // r2
  const char *v12; // r0
  char **v13; // r2

  if ( !a2 )
  {
    v12 = aAssertionFaile_39;
    v13 = &off_2E5DF4;
    goto LABEL_20;
  }
  if ( *a1 < 0x31u )
  {
    v12 = aAssertionFaile_41;
    v13 = &off_2E5E04;
LABEL_20:
    core::panicking::panic((int)v12, 33, (int)v13);
  }
  if ( a6 < 4 )
    core::panicking::panic((int)aAssertionFaile_42, 34, (int)&off_2E5E14);
  result = a5;
  v8 = (__int16)a3;
  if ( (__int16)a3 < 1 )
  {
    v10 = a4 > a2;
    *(_DWORD *)(a5 + 32) = a2;
    v11 = -(__int16)a3;
    if ( a4 > a2 )
      a2 = a4 - a2;
    *(_DWORD *)(a5 + 28) = a1;
    *(_DWORD *)(a5 + 4) = a0;
    *(_DWORD *)(a5 + 8) = 2;
    if ( v10 )
      v10 = a2 > v11;
    *(_WORD *)(a5 + 24) = 2;
    *(_DWORD *)(a5 + 16) = v11;
    *(_WORD *)(a5 + 12) = 0;
    *(_WORD *)a5 = 2;
    if ( v10 )
    {
      a4 = a2 + v8;
      goto LABEL_17;
    }
  }
  else
  {
    *(_DWORD *)(a5 + 4) = a1;
    *(_WORD *)a5 = 2;
    if ( a3 >= a2 )
    {
      *(_DWORD *)(a5 + 16) = a3 - a2;
      *(_WORD *)(a5 + 12) = 0;
      *(_DWORD *)(a5 + 8) = a2;
      if ( a4 )
      {
        *(_DWORD *)(a5 + 32) = 1;
        *(_WORD *)(a5 + 24) = 2;
        *(_DWORD *)(a5 + 28) = asc_2B5CA1;
        goto LABEL_17;
      }
    }
    else
    {
      v9 = a2 - a3;
      *(_DWORD *)(a5 + 28) = &a1[a3];
      *(_DWORD *)(a5 + 16) = asc_2B5CA1;
      *(_DWORD *)(a5 + 32) = v9;
      *(_WORD *)(a5 + 24) = 2;
      *(_WORD *)(a5 + 12) = 2;
      *(_DWORD *)(a5 + 8) = a3;
      *(_DWORD *)(a5 + 20) = 1;
      if ( v9 < a4 )
      {
        a4 -= v9;
LABEL_17:
        *(_DWORD *)(a5 + 40) = a4;
        *(_WORD *)(a5 + 36) = 0;
      }
    }
  }
  return result;
}
