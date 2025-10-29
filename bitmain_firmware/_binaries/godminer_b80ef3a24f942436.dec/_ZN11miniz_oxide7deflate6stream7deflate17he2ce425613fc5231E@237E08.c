unsigned int __fastcall miniz_oxide::deflate::stream::deflate(
        _DWORD *a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r6
  int v11; // r1
  unsigned int result; // r0
  _BOOL4 v13; // r2
  int v16; // r10
  int v17; // r11
  unsigned int v18; // r2
  int v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // [sp+0h] [bp-2Ch]
  unsigned int v22; // [sp+4h] [bp-28h] BYREF
  int v23; // [sp+8h] [bp-24h]
  unsigned int v24; // [sp+Ch] [bp-20h]
  int v25; // [sp+10h] [bp-1Ch] BYREF
  unsigned int v26; // [sp+14h] [bp-18h]
  int v27; // [sp+18h] [bp-14h]
  int v28; // [sp+1Ch] [bp-10h]
  int v29; // [sp+20h] [bp-Ch]
  int v30; // [sp+24h] [bp-8h]
  unsigned int v31; // [sp+28h] [bp-4h]

  v7 = a6;
  if ( !a6 )
  {
    result = 0;
    v11 = -5;
    a1[2] = 0;
    v13 = 1;
LABEL_7:
    a1[3] = 0;
    *a1 = v13;
    a1[1] = v11;
    return result;
  }
  if ( *(int *)((char *)&dword_10040 + a2) == 1 )
  {
    v11 = -5;
    if ( a7 == 4 )
      v11 = 1;
    result = 0;
    v13 = a7 != 4;
    a1[2] = 0;
    goto LABEL_7;
  }
  if ( a7 == 4 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v29 = 1;
      v28 = 0;
      v27 = 0;
      v31 = v7;
      v30 = a5;
      v26 = a4;
      v25 = a3;
      miniz_oxide::deflate::core::compress_inner(&v22, a2, &v25, 4u);
      result = v22;
      if ( a4 < v22 )
        break;
      if ( v7 < v24 )
        goto LABEL_35;
      v17 += v24;
      v16 += v22;
      v18 = 1;
      switch ( v23 )
      {
        case -2:
          goto LABEL_30;
        case -1:
          goto LABEL_31;
        case 1:
          goto LABEL_32;
      }
      a4 -= v22;
      a3 += v22;
      a5 += v24;
      v7 -= v24;
      if ( !v7 )
        goto LABEL_16;
    }
LABEL_34:
    core::slice::index::slice_start_index_len_fail();
  }
  v16 = 0;
  v20 = 0;
  if ( a7 - 2 < 3 )
    v20 = a7;
  v17 = 0;
  v21 = v20;
  do
  {
    v29 = 1;
    v28 = 0;
    v27 = 0;
    v31 = v7;
    v30 = a5;
    v26 = a4;
    v25 = a3;
    miniz_oxide::deflate::core::compress_inner(&v22, a2, &v25, v21);
    result = v22;
    if ( a4 < v22 )
      goto LABEL_34;
    if ( v7 < v24 )
LABEL_35:
      core::slice::index::slice_start_index_len_fail();
    v17 += v24;
    v16 += v22;
    v18 = 1;
    switch ( v23 )
    {
      case -2:
LABEL_30:
        v19 = -10000;
        goto LABEL_33;
      case -1:
LABEL_31:
        v19 = -2;
        goto LABEL_33;
      case 1:
LABEL_32:
        v19 = 1;
        v18 = 0;
        goto LABEL_33;
    }
    v7 -= v24;
    if ( !v7 )
    {
LABEL_16:
      v18 = 0;
      v19 = 0;
      goto LABEL_33;
    }
    a4 -= v22;
    a3 += v22;
    a5 += v24;
  }
  while ( a4 );
  v19 = -5;
  result = __clz(a7 | v17 | v16);
  if ( a7 | v17 | v16 )
    v19 = 0;
  v18 = result >> 5;
LABEL_33:
  a1[2] = v16;
  a1[3] = v17;
  *a1 = v18;
  a1[1] = v19;
  return result;
}
