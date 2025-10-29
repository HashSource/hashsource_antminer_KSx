void *__fastcall alloc::string::String::from_utf8_lossy(_DWORD *a1, int a2, size_t a3)
{
  __int64 v5; // kr00_8
  int v6; // r0
  void *result; // r0
  int v8; // r7
  int v9; // r1
  int v10; // r8
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  __int64 v15; // kr08_8
  int v16; // r1
  int v17; // r2
  __int64 v18; // [sp+8h] [bp-44h] BYREF
  char *v19; // [sp+10h] [bp-3Ch] BYREF
  int v20; // [sp+14h] [bp-38h]
  int v21; // [sp+18h] [bp-34h]
  __int64 v22; // [sp+20h] [bp-2Ch] BYREF
  int v23; // [sp+28h] [bp-24h] BYREF
  int v24; // [sp+2Ch] [bp-20h]
  int v25; // [sp+30h] [bp-1Ch]
  int v26; // [sp+34h] [bp-18h]
  int v27; // [sp+38h] [bp-14h] BYREF
  int v28; // [sp+3Ch] [bp-10h]
  int v29; // [sp+40h] [bp-Ch]
  int v30; // [sp+44h] [bp-8h]

  v18 = core::str::lossy::Utf8Chunks::new(a2, a3);
  <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v23, (int *)&v18);
  if ( v23 )
  {
    v27 = v23;
    v28 = v24;
    v29 = v25;
    v30 = v26;
    v5 = core::str::lossy::Utf8Chunk::valid((int)&v27);
    if ( (unsigned __int64)core::str::lossy::Utf8Chunk::invalid((int)&v27) >> 32 )
    {
      if ( a3 )
      {
        if ( (int)a3 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v6 = _rust_alloc(a3);
        if ( !v6 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v6 = 1;
      }
      v8 = 0;
      v21 = 0;
      v20 = v6;
      v19 = (char *)a3;
      if ( HIDWORD(v5) > a3 )
      {
        sub_7BC14((unsigned int *)&v19, 0, SHIDWORD(v5));
        v6 = v20;
        v8 = v21;
      }
      memcpy((void *)(v6 + v8), (const void *)v5, HIDWORD(v5));
      v9 = v8 + HIDWORD(v5);
      v21 = v8 + HIDWORD(v5);
      if ( (unsigned int)&v19[-v8 - HIDWORD(v5)] <= 2 )
      {
        sub_7BC14((unsigned int *)&v19, v9, 3);
        v9 = v21;
      }
      v10 = v20;
      v11 = v9 + 3;
      v12 = v20;
      *(_WORD *)(v20 + v9) = -16401;
      v21 = v9 + 3;
      *(_BYTE *)(v12 + v9 + 2) = -67;
      v22 = v18;
      while ( 1 )
      {
        <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v23, (int *)&v22);
        if ( !v23 )
          break;
        v27 = v23;
        v28 = v24;
        v29 = v25;
        v30 = v26;
        v15 = core::str::lossy::Utf8Chunk::valid((int)&v27);
        if ( (unsigned int)&v19[-v11] < HIDWORD(v15) )
        {
          sub_7BC14((unsigned int *)&v19, v11, SHIDWORD(v15));
          v10 = v20;
          v11 = v21;
        }
        memcpy((void *)(v10 + v11), (const void *)v15, HIDWORD(v15));
        v11 += HIDWORD(v15);
        v21 = v11;
        if ( (unsigned __int64)core::str::lossy::Utf8Chunk::invalid((int)&v27) >> 32 )
        {
          if ( (unsigned int)&v19[-v11] <= 2 )
          {
            sub_7BC14((unsigned int *)&v19, v11, 3);
            v11 = v21;
          }
          v10 = v20;
          v13 = v20;
          *(_WORD *)(v20 + v11) = -16401;
          v14 = v13 + v11;
          v11 += 3;
          v21 = v11;
          *(_BYTE *)(v14 + 2) = -67;
        }
      }
      result = v19;
      v16 = v20;
      v17 = v21;
      *a1 = 1;
      a1[1] = result;
      a1[2] = v16;
      a1[3] = v17;
    }
    else
    {
      a1[2] = HIDWORD(v5);
      *a1 = 0;
      a1[1] = v5;
      return 0;
    }
  }
  else
  {
    *a1 = 0;
    a1[1] = &unk_29D3B8;
    a1[2] = 0;
    return &unk_29D3B8;
  }
  return result;
}
