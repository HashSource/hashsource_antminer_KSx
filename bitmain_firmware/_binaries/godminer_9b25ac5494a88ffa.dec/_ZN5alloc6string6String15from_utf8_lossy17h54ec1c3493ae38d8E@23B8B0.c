void *__fastcall alloc::string::String::from_utf8_lossy(_DWORD *a1, int a2, signed int a3)
{
  __int64 v5; // kr00_8
  int v6; // r1
  int v7; // r0
  void *result; // r0
  int v9; // r7
  int v10; // r1
  int v11; // r8
  int v12; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r0
  __int64 v16; // kr08_8
  int v17; // r1
  int v18; // r1
  int v19; // r2
  __int64 v20; // [sp+8h] [bp-44h] BYREF
  size_t v21; // [sp+10h] [bp-3Ch] BYREF
  int v22; // [sp+14h] [bp-38h]
  int v23; // [sp+18h] [bp-34h]
  __int64 v24; // [sp+20h] [bp-2Ch] BYREF
  int v25; // [sp+28h] [bp-24h] BYREF
  int v26; // [sp+2Ch] [bp-20h]
  int v27; // [sp+30h] [bp-1Ch]
  int v28; // [sp+34h] [bp-18h]
  int v29; // [sp+38h] [bp-14h] BYREF
  int v30; // [sp+3Ch] [bp-10h]
  int v31; // [sp+40h] [bp-Ch]
  int v32; // [sp+44h] [bp-8h]

  v20 = core::str::lossy::Utf8Chunks::new(a2, a3);
  <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v25, &v20);
  if ( v25 )
  {
    v29 = v25;
    v30 = v26;
    v31 = v27;
    v32 = v28;
    v5 = core::str::lossy::Utf8Chunk::valid(&v29);
    core::str::lossy::Utf8Chunk::invalid(&v29);
    if ( v6 )
    {
      if ( a3 )
      {
        if ( a3 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v7 = _rust_alloc(a3);
        if ( !v7 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v7 = 1;
      }
      v9 = 0;
      v23 = 0;
      v22 = v7;
      v21 = a3;
      if ( HIDWORD(v5) > a3 )
      {
        sub_7D57C(&v21, 0, SHIDWORD(v5));
        v7 = v22;
        v9 = v23;
      }
      memcpy((void *)(v7 + v9), (const void *)v5, HIDWORD(v5));
      v10 = v9 + HIDWORD(v5);
      v23 = v9 + HIDWORD(v5);
      if ( v21 - (v9 + HIDWORD(v5)) <= 2 )
      {
        sub_7D57C(&v21, v10, 3);
        v10 = v23;
      }
      v11 = v22;
      v12 = v10 + 3;
      v13 = v22;
      *(_WORD *)(v22 + v10) = -16401;
      v23 = v10 + 3;
      *(_BYTE *)(v13 + v10 + 2) = -67;
      v24 = v20;
      while ( 1 )
      {
        <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v25, &v24);
        if ( !v25 )
          break;
        v29 = v25;
        v30 = v26;
        v31 = v27;
        v32 = v28;
        v16 = core::str::lossy::Utf8Chunk::valid(&v29);
        if ( v21 - v12 < HIDWORD(v16) )
        {
          sub_7D57C(&v21, v12, SHIDWORD(v16));
          v11 = v22;
          v12 = v23;
        }
        memcpy((void *)(v11 + v12), (const void *)v16, HIDWORD(v16));
        v12 += HIDWORD(v16);
        v23 = v12;
        core::str::lossy::Utf8Chunk::invalid(&v29);
        if ( v17 )
        {
          if ( v21 - v12 <= 2 )
          {
            sub_7D57C(&v21, v12, 3);
            v12 = v23;
          }
          v11 = v22;
          v14 = v22;
          *(_WORD *)(v22 + v12) = -16401;
          v15 = v14 + v12;
          v12 += 3;
          v23 = v12;
          *(_BYTE *)(v15 + 2) = -67;
        }
      }
      result = (void *)v21;
      v18 = v22;
      v19 = v23;
      *a1 = 1;
      a1[1] = result;
      a1[2] = v18;
      a1[3] = v19;
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
    a1[1] = &unk_2B1B68;
    a1[2] = 0;
    return &unk_2B1B68;
  }
  return result;
}
