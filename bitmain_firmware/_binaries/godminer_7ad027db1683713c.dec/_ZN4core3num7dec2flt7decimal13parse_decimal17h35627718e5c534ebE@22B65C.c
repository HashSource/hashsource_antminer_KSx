unsigned int __fastcall core::num::dec2flt::decimal::parse_decimal(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r8
  unsigned int result; // r0
  unsigned int v8; // r3
  int v9; // r7
  int v10; // r1
  unsigned int v11; // r3
  int v12; // r4
  unsigned __int8 v13; // r5
  int v14; // r2
  int v15; // r5
  int v16; // r4
  unsigned int v17; // r5
  _BYTE *v18; // r1
  __int64 v19; // r4
  int v20; // r4
  unsigned __int8 v21; // r1
  int v22; // r1
  int v23; // r2
  int v24; // r6
  int v25; // r5
  int v26; // r2
  bool v27; // cc
  unsigned int v28; // r1
  int v29; // r0
  _BYTE *v30; // r2
  bool v31; // zf
  int v32; // r3
  int v33; // r7
  unsigned __int8 v34; // r6
  int v35; // r6
  unsigned int v36; // [sp+0h] [bp-4h]

  v6 = 0;
  memset((void *)a1, 0, 0x309u);
  result = 0;
  v8 = 0;
  v9 = a2;
  if ( !a3 )
    goto LABEL_33;
  v9 = a2 + a3;
  v10 = 0;
  v11 = a3;
  while ( 1 )
  {
    v12 = *(unsigned __int8 *)(a2 - v10);
    v13 = v12 - 48;
    if ( (_BYTE)v12 != 48 )
      break;
    --v10;
    --v11;
    if ( !(a3 + v10) )
    {
      result = 0;
      v8 = 0;
      goto LABEL_45;
    }
  }
  if ( v13 <= 9u )
  {
    v14 = 0;
    result = 0;
    do
    {
      if ( result >> 8 <= 2 )
      {
        *(_BYTE *)(a1 + result) = v13;
        result = *(_DWORD *)(a1 + 768);
      }
      *(_DWORD *)(a1 + 768) = ++result;
      if ( a3 + v10 - 1 == v14 )
      {
        v8 = 0;
        v9 = a2 - v10 + v14 + 1;
        goto LABEL_33;
      }
      v15 = a2 + v14++;
      v16 = *(unsigned __int8 *)(v15 - v10 + 1);
      v13 = v16 - 48;
    }
    while ( (unsigned __int8)(v16 - 48) <= 9u );
    v8 = v11 - v14;
    v9 = a2 - v10 + v14;
    if ( v16 == 46 )
      goto LABEL_15;
LABEL_33:
    if ( !result )
      goto LABEL_45;
    goto LABEL_34;
  }
  v9 = a2 - v10;
  v8 = a3 + v10;
  result = 0;
  if ( v12 != 46 )
    goto LABEL_33;
LABEL_15:
  v17 = v8 - 1;
  v18 = (_BYTE *)(v9 + 1);
  if ( result )
  {
    --v8;
  }
  else
  {
    if ( v8 == 1 )
    {
      v8 = 0;
      ++v9;
      goto LABEL_75;
    }
    v9 += v8--;
    while ( *v18 == 48 )
    {
      --v8;
      ++v18;
      if ( !v8 )
      {
LABEL_72:
        v8 = 0;
        goto LABEL_75;
      }
    }
  }
  v9 = (int)v18;
  v36 = v17;
  if ( v8 < 8 || (result + 8) >> 8 > 2 )
  {
LABEL_23:
    if ( !v8 )
    {
      v8 = 0;
      v17 = v36;
      goto LABEL_75;
    }
  }
  else
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)v9 - 0x3030303030303030LL;
      if ( (((*(_DWORD *)v9 + 1179010630)
           | (*(_DWORD *)v9 - 808464432)
           | ((unsigned __int64)(*(_QWORD *)v9 + 0x4646464646464646LL) >> 32)
           | HIDWORD(v19))
          & 0x80808080) != 0 )
        break;
      if ( result > 0x300 )
        core::slice::index::slice_start_index_len_fail(result, 768, (int)&off_2CEAE4);
      v8 -= 8;
      *(_QWORD *)(a1 + result) = v19;
      v9 += 8;
      v20 = *(_DWORD *)(a1 + 768);
      result = v20 + 8;
      *(_DWORD *)(a1 + 768) = v20 + 8;
      if ( v8 < 8 || (unsigned int)(v20 + 16) >= 0x300 )
        goto LABEL_23;
    }
  }
  v17 = v36;
  while ( 1 )
  {
    v21 = *(_BYTE *)v9 - 48;
    if ( v21 > 9u )
      break;
    if ( result >> 8 <= 2 )
      *(_BYTE *)(a1 + result) = v21;
    ++v9;
    if ( result >> 8 <= 2 )
      result = *(_DWORD *)(a1 + 768);
    --v8;
    *(_DWORD *)(a1 + 768) = ++result;
    if ( !v8 )
      goto LABEL_72;
  }
LABEL_75:
  *(_DWORD *)(a1 + 772) = v8 - v17;
  if ( !result )
    goto LABEL_45;
LABEL_34:
  if ( a3 < v8 )
    core::slice::index::slice_end_index_len_fail(a3 - v8, a3, (int)&off_2CEAF4);
  v22 = 0;
  if ( v8 != a3 )
  {
    v23 = v8 - a3;
    v24 = a2 - 1;
    v22 = 0;
    do
    {
      v25 = *(unsigned __int8 *)(v24 - v23);
      if ( v25 != 46 )
      {
        if ( v25 != 48 )
          break;
        ++v22;
      }
      ++v23;
    }
    while ( v23 );
  }
  v26 = *(_DWORD *)(a1 + 772);
  v6 = result - v22;
  v27 = result - v22 > 0x300;
  *(_DWORD *)(a1 + 768) = result - v22;
  result += v26;
  if ( v27 )
    v6 = 768;
  *(_DWORD *)(a1 + 772) = result;
  if ( v27 )
  {
    result = 1;
    *(_DWORD *)(a1 + 768) = v6;
    *(_BYTE *)(a1 + 776) = 1;
  }
LABEL_45:
  if ( !v8 )
    goto LABEL_65;
  result = *(_BYTE *)v9 & 0xDF;
  if ( result != 69 )
    goto LABEL_65;
  v28 = v8 - 1;
  if ( v8 != 1 )
  {
    v30 = (_BYTE *)(v9 + 1);
    v29 = *(unsigned __int8 *)(v9 + 1);
    v31 = v29 == 45;
    if ( v29 != 45 )
      v31 = v29 == 43;
    if ( v31 )
    {
      v28 = v8 - 2;
      if ( v8 == 2 )
      {
        v32 = 0;
LABEL_62:
        if ( v29 == 45 )
          v32 = -v32;
        goto LABEL_64;
      }
      v30 = (_BYTE *)(v9 + 2);
    }
    v32 = 0;
    v33 = 0;
    do
    {
      v34 = *v30 - 48;
      if ( v34 > 9u )
        break;
      ++v30;
      v35 = 10 * v33 + v34;
      if ( v33 < 0x10000 )
      {
        v32 = v35;
        v33 = v35;
      }
      --v28;
    }
    while ( v28 );
    goto LABEL_62;
  }
  v32 = 0;
LABEL_64:
  result = *(_DWORD *)(a1 + 772) + v32;
  *(_DWORD *)(a1 + 772) = result;
LABEL_65:
  if ( v6 <= 0x12 )
    return (unsigned int)memset((void *)(a1 + v6), 0, 19 - v6);
  return result;
}
