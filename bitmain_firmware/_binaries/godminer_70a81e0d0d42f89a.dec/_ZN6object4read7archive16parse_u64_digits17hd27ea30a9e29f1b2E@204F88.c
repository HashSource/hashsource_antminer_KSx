int __fastcall object::read::archive::parse_u64_digits(_BYTE *a1, int a2, unsigned int a3)
{
  int v4; // lr
  _BYTE *v5; // r12
  int result; // r0
  bool v7; // zf
  int v8; // r5
  unsigned int v9; // r6
  bool v10; // zf
  __int64 v11; // r2
  int v12; // t1
  unsigned int v13; // r5
  int v14; // r4
  __int64 v15; // r6
  int v16; // kr18_4
  bool v17; // cf
  int v18; // r5
  int v19; // r6
  bool v20; // zf
  __int64 v21; // r2
  int v22; // t1
  unsigned int v23; // r5
  int v24; // r4
  __int64 v25; // r6
  int v26; // kr38_4
  _DWORD v27[6]; // [sp+0h] [bp-18h] BYREF

  v4 = a2;
  v5 = a1;
  if ( a2 && *a1 == 32 )
    return 0;
  if ( a3 <= 0xA )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = v4 == 0;
      LODWORD(v11) = v8;
      if ( v4 )
      {
        v12 = (unsigned __int8)*v5++;
        v8 = v12;
      }
      HIDWORD(v11) = v9;
      result = 1;
      if ( v4 )
        v10 = v8 == 32;
      if ( v10 )
        break;
      v13 = v8 - 48;
      if ( v13 >= a3 )
        return 0;
      result = 0;
      v14 = (v9 * (unsigned __int64)a3) >> 32;
      v15 = v11 * a3;
      if ( !is_mul_ok(HIDWORD(v11), a3) )
        v14 = 1;
      if ( !(v14 | (((((unsigned int)v11 * (unsigned __int64)a3) >> 32) + HIDWORD(v11) * a3) >> 32)) )
      {
        --v4;
        v17 = __CFADD__(__CFADD__((_DWORD)v15, v13), HIDWORD(v15));
        v16 = v15 + v13;
        v9 = (v15 + (unsigned __int64)v13) >> 32;
        v8 = v16;
        result = 0;
        if ( !v17 )
          continue;
      }
      return result;
    }
  }
  else if ( a3 <= 0x24 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = v4 == 0;
      HIDWORD(v21) = v19;
      if ( v4 )
      {
        v22 = (unsigned __int8)*v5++;
        v19 = v22;
      }
      LODWORD(v21) = v18;
      result = 1;
      if ( v4 )
        v20 = v19 == 32;
      if ( v20 )
        break;
      v23 = v19 - 48;
      if ( (unsigned int)(v19 - 48) >= 0xA )
      {
        v23 = (v19 | 0x20) - 87;
        if ( (v19 | 0x20u) - 97 >= 0xFFFFFFF6 )
          v23 = -1;
        if ( v23 >= a3 )
          return 0;
      }
      result = 0;
      v24 = (HIDWORD(v21) * (unsigned __int64)a3) >> 32;
      v25 = v21 * a3;
      if ( !is_mul_ok(HIDWORD(v21), a3) )
        v24 = 1;
      if ( !(v24 | (((((unsigned int)v21 * (unsigned __int64)a3) >> 32) + HIDWORD(v21) * a3) >> 32)) )
      {
        --v4;
        v17 = __CFADD__(__CFADD__((_DWORD)v25, v23), HIDWORD(v25));
        v26 = v25 + v23;
        v19 = (v25 + (unsigned __int64)v23) >> 32;
        v18 = v26;
        result = 0;
        if ( !v17 )
          continue;
      }
      return result;
    }
  }
  else
  {
    v7 = a2 == 0;
    result = 1;
    if ( a2 )
      v7 = *v5 == 32;
    if ( !v7 )
    {
      v27[3] = 1;
      v27[2] = &off_2E2140;
      v27[5] = 0;
      v27[0] = 0;
      v27[4] = aRustc9eb3afe9e_0;
      core::panicking::panic_fmt((int)v27, (int)&off_2E2148);
    }
  }
  return result;
}
