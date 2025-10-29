int __fastcall alloc::str::<impl str>::to_uppercase(unsigned int *a1, int a2, size_t size)
{
  unsigned int v6; // r6
  int result; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r5
  char v11; // r4
  _BYTE *v12; // r7
  char v13; // r5
  unsigned int v14; // r4
  char v15; // r5
  unsigned int v16; // r4
  unsigned int v17; // r1
  bool v18; // cf
  unsigned int v19; // r1
  char v20; // r4
  char v21; // r2
  unsigned int v22; // r1
  bool v23; // cc
  char *v24; // r5
  int v25; // t1
  unsigned int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r3
  unsigned int v30; // r6
  unsigned int v31; // r7
  unsigned int v32; // [sp+0h] [bp-Ch] BYREF
  unsigned int v33; // [sp+4h] [bp-8h]
  unsigned int v34; // [sp+8h] [bp-4h]

  v6 = 0;
  if ( size )
  {
    if ( (int)size <= -1 )
      alloc::raw_vec::capacity_overflow();
    result = _rust_alloc(size);
    if ( !result )
      alloc::alloc::handle_alloc_error();
    if ( size >= 8 )
    {
      v6 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(a2 + 4 + v6);
        v9 = *(_DWORD *)(a2 + v6);
        if ( ((v8 | v9) & 0x80808080) != 0 )
          break;
        v10 = HIBYTE(v8);
        if ( HIBYTE(v8) - 97 < 0x1Au )
          v10 = HIBYTE(v8) ^ 0x20;
        v11 = *(_DWORD *)(a2 + v6);
        if ( (unsigned int)(unsigned __int8)v9 - 97 < 0x1A )
          v11 = v9 ^ 0x20;
        *(_BYTE *)(result + v6) = v11;
        v12 = (_BYTE *)(result + v6);
        *(_BYTE *)(result + v6 + 7) = v10;
        v13 = BYTE2(v8);
        v14 = (unsigned __int8)__ROR4__(v8, 8) - 97;
        if ( (unsigned int)(unsigned __int8)__ROR4__(v8, 16) - 97 < 0x1A )
          v13 = BYTE2(v8) ^ 0x20;
        v12[6] = v13;
        v15 = BYTE1(v8);
        if ( v14 < 0x1A )
          v15 = BYTE1(v8) ^ 0x20;
        if ( (unsigned int)(unsigned __int8)v8 - 97 < 0x1A )
          LOBYTE(v8) = v8 ^ 0x20;
        v12[4] = v8;
        v16 = HIBYTE(v9);
        v17 = (unsigned __int8)__ROR4__(v9, 16) - 97;
        if ( HIBYTE(v9) - 97 < 0x1Au )
          v16 = HIBYTE(v9) ^ 0x20;
        v18 = v17 >= 0x1A;
        v12[5] = v15;
        v19 = (unsigned __int8)__ROR4__(v9, 8) - 97;
        v12[3] = v16;
        v20 = BYTE2(v9);
        if ( !v18 )
          v20 = BYTE2(v9) ^ 0x20;
        v12[2] = v20;
        v21 = BYTE1(v9);
        if ( v19 < 0x1A )
          v21 = BYTE1(v9) ^ 0x20;
        v22 = v6 + 8;
        v12[1] = v21;
        v23 = v6 + 16 > size;
        v6 += 8;
        if ( v23 )
        {
          v6 = v22;
          break;
        }
      }
    }
    *a1 = size;
    a1[1] = result;
    a1[2] = v6;
    if ( v6 != size )
    {
      result = a2 + v6;
      v24 = (char *)(a2 + v6);
      do
      {
        v25 = *v24++;
        v26 = (unsigned __int8)v25;
        if ( v25 <= -1 )
        {
          v27 = v26 & 0x1F;
          v28 = *(_BYTE *)(result + 1) & 0x3F;
          if ( v26 <= 0xDF )
          {
            v26 = v28 | (v27 << 6);
            v24 = (char *)(result + 2);
          }
          else
          {
            v29 = *(_BYTE *)(result + 2) & 0x3F | (v28 << 6);
            if ( v26 < 0xF0 )
            {
              v26 = v29 | (v27 << 12);
              v24 = (char *)(result + 3);
            }
            else
            {
              v26 = *(_BYTE *)(result + 3) & 0x3F | (v29 << 6) | ((v26 & 7) << 18);
              if ( v26 == 1114112 )
                return result;
              v24 = (char *)(result + 4);
            }
          }
        }
        core::unicode::unicode_data::conversions::to_upper(&v32, v26);
        v30 = v33;
        if ( v33 )
        {
          v31 = v34;
          if ( v34 )
          {
            sub_229F40(a1, v32);
            sub_229F40(a1, v30);
            v30 = v31;
          }
          else
          {
            sub_229F40(a1, v32);
          }
        }
        else
        {
          v30 = v32;
        }
        sub_229F40(a1, v30);
        result = (int)v24;
      }
      while ( v24 != (char *)(a2 + size) );
    }
  }
  else
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return 1;
  }
  return result;
}
