int __fastcall core::num::bignum::tests::Big8x3::mul_pow2(int result, unsigned int a2)
{
  unsigned int v2; // r8
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r12
  unsigned int v6; // r7
  int v7; // r6
  int v8; // r2
  char v9; // lr
  int v10; // r2
  int v11; // r1
  unsigned int v12; // r12
  unsigned int v13; // r4
  int v14; // r2
  unsigned int v15; // r6

  if ( a2 > 0x17 )
    core::panicking::panic((int)aAssertionFaile_53, 28, (int)&off_2E6618);
  v2 = a2 >> 3;
  if ( *(_DWORD *)result )
  {
    v3 = *(_DWORD *)result - 1;
    v4 = v3;
    while ( v3 <= 2 )
    {
      v5 = v2 + v4;
      if ( v2 + v4 >= 3 )
        goto LABEL_23;
      v6 = result + 3 + v4;
      v7 = result + 3 + v2 + v4--;
      *(_BYTE *)(v7 + 1) = *(_BYTE *)(v6 + 1);
      if ( v4 == -1 )
        goto LABEL_7;
    }
LABEL_24:
    core::panicking::panic_bounds_check(v4, 3, (int)&off_2E6618);
  }
LABEL_7:
  if ( a2 >= 8 )
  {
    v8 = a2 >> 3;
    if ( v2 <= 1 )
      v8 = 1;
    *(_BYTE *)(result + 4) = 0;
    if ( a2 >= 0x10 )
    {
      *(_BYTE *)(result + 5) = 0;
      if ( v8 != 2 )
      {
        *(_BYTE *)(result + 6) = 0;
        if ( v8 != 3 )
          core::panicking::panic_bounds_check(3, 3, (int)&off_2E6618);
      }
    }
  }
  v9 = a2 & 7;
  v4 = *(_DWORD *)result + v2;
  if ( (a2 & 7) != 0 )
  {
    v5 = v4 - 1;
    if ( v4 - 1 > 2 )
LABEL_23:
      core::panicking::panic_bounds_check(v5, 3, (int)&off_2E6618);
    v10 = result + v5;
    v11 = -a2 & 7;
    v12 = *(_DWORD *)result + v2;
    v13 = *(unsigned __int8 *)(v10 + 4);
    if ( v13 >> v11 )
    {
      if ( v4 > 2 )
        goto LABEL_24;
      v12 = v4 + 1;
      *(_BYTE *)(result + v4 + 4) = v13 >> v11;
    }
    for ( ; v2 + 1 < v4; LOBYTE(v13) = v15 )
    {
      if ( v4 - 2 >= 3 )
        core::panicking::panic_bounds_check(-1, 3, (int)&off_2E6618);
      v14 = result + v4--;
      v15 = *(unsigned __int8 *)(v14 + 2);
      *(_BYTE *)(v14 + 3) = (v15 >> v11) | ((_BYTE)v13 << v9);
    }
    *(_DWORD *)result = v12;
    *(_BYTE *)(result + v2 + 4) = *(unsigned __int8 *)(result + v2 + 4) << v9;
  }
  else
  {
    *(_DWORD *)result = v4;
  }
  return result;
}
