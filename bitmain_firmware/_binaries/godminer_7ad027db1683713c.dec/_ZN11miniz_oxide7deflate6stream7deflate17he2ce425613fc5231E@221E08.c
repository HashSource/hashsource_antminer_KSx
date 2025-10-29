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
  int v18; // r1
  unsigned int v19; // r2
  int v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // [sp+0h] [bp-2Ch]
  unsigned int v23; // [sp+4h] [bp-28h] BYREF
  int v24; // [sp+8h] [bp-24h]
  unsigned int v25; // [sp+Ch] [bp-20h]
  int v26; // [sp+10h] [bp-1Ch] BYREF
  unsigned int v27; // [sp+14h] [bp-18h]
  int v28; // [sp+18h] [bp-14h]
  int v29; // [sp+1Ch] [bp-10h]
  int v30; // [sp+20h] [bp-Ch]
  int v31; // [sp+24h] [bp-8h]
  unsigned int v32; // [sp+28h] [bp-4h]

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
      v30 = 1;
      v29 = 0;
      v28 = 0;
      v32 = v7;
      v31 = a5;
      v27 = a4;
      v26 = a3;
      miniz_oxide::deflate::core::compress_inner(&v23, a2, &v26, 4u);
      result = v23;
      if ( a4 < v23 )
        break;
      v18 = v25;
      if ( v7 < v25 )
        goto LABEL_35;
      v17 += v25;
      v16 += v23;
      v19 = 1;
      switch ( v24 )
      {
        case -2:
          goto LABEL_30;
        case -1:
          goto LABEL_31;
        case 1:
          goto LABEL_32;
      }
      a4 -= v23;
      a3 += v23;
      a5 += v25;
      v7 -= v25;
      if ( !v7 )
        goto LABEL_16;
    }
LABEL_34:
    core::slice::index::slice_start_index_len_fail(result, a4, (int)&off_2CE1B4);
  }
  v16 = 0;
  v21 = 0;
  if ( a7 - 2 < 3 )
    v21 = a7;
  v17 = 0;
  v22 = v21;
  do
  {
    v30 = 1;
    v29 = 0;
    v28 = 0;
    v32 = v7;
    v31 = a5;
    v27 = a4;
    v26 = a3;
    miniz_oxide::deflate::core::compress_inner(&v23, a2, &v26, v22);
    result = v23;
    if ( a4 < v23 )
      goto LABEL_34;
    v18 = v25;
    if ( v7 < v25 )
LABEL_35:
      core::slice::index::slice_start_index_len_fail(v18, v7, (int)&off_2CE1C4);
    v17 += v25;
    v16 += v23;
    v19 = 1;
    switch ( v24 )
    {
      case -2:
LABEL_30:
        v20 = -10000;
        goto LABEL_33;
      case -1:
LABEL_31:
        v20 = -2;
        goto LABEL_33;
      case 1:
LABEL_32:
        v20 = 1;
        v19 = 0;
        goto LABEL_33;
    }
    v7 -= v25;
    if ( !v7 )
    {
LABEL_16:
      v19 = 0;
      v20 = 0;
      goto LABEL_33;
    }
    a4 -= v23;
    a3 += v23;
    a5 += v25;
  }
  while ( a4 );
  v20 = -5;
  result = __clz(a7 | v17 | v16);
  if ( a7 | v17 | v16 )
    v20 = 0;
  v19 = result >> 5;
LABEL_33:
  a1[2] = v16;
  a1[3] = v17;
  *a1 = v19;
  a1[1] = v20;
  return result;
}
