int __fastcall core::num::dec2flt::decimal::Decimal::right_shift(int result, char a2)
{
  unsigned int v2; // lr
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // kr10_4
  int v10; // r1
  unsigned int v11; // r6
  bool v12; // zf
  int v13; // r6
  unsigned int v14; // r5
  int v15; // r3
  unsigned int v16; // kr00_4
  int v17; // r1
  unsigned int v18; // r7
  int v19; // r1
  int v20; // r1
  int v21; // r9
  int v22; // r6
  int v23; // r11
  int v24; // r8
  unsigned int v25; // r1
  unsigned int v26; // lr
  int v27; // r7
  int v28; // r5
  unsigned int v29; // r6
  unsigned int v30; // r6
  unsigned int v31; // kr18_4
  int v32; // kr08_4
  int v33; // r5
  unsigned int v34; // r1

  v2 = *(_DWORD *)(result + 768);
  v3 = a2 & 0x3F;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( v2 != v4 )
  {
    if ( v4 == 768 )
      core::panicking::panic_bounds_check(768, 768, (int)&off_2E3AC4);
    v7 = *(unsigned __int8 *)(result + v4++);
    v9 = 10 * v5 + v7;
    v6 = (10LL * v5 + __PAIR64__(10 * v6, v7)) >> 32;
    v8 = v9;
    v10 = (v9 >> v3) | (v6 << (32 - v3));
    if ( v3 - 32 >= 0 )
      v10 = v6 >> (v3 - 32);
    v11 = v6 >> v3;
    if ( v3 - 32 >= 0 )
      v11 = 0;
    v12 = (v10 | v11) == 0;
    v5 = v9;
    if ( !v12 )
      goto LABEL_19;
  }
  if ( !(v5 | v6) )
    return result;
  v13 = v3 - 32;
  v14 = v6 >> v3;
  v15 = (v5 >> v3) | (v6 << (32 - v3));
  if ( v3 - 32 >= 0 )
  {
    v14 = 0;
    v15 = v6 >> v13;
  }
  if ( v15 | v14 )
  {
    v8 = v5;
    v4 = *(_DWORD *)(result + 768);
  }
  else
  {
    v4 = *(_DWORD *)(result + 768);
    v8 = v5;
    do
    {
      v16 = v8;
      v8 *= 10;
      ++v4;
      v6 = (10 * __PAIR64__(v6, v16)) >> 32;
      v17 = (v8 >> v3) | (v6 << (32 - v3));
      v18 = v6 >> v3;
      if ( v13 >= 0 )
      {
        v17 = v6 >> v13;
        v18 = 0;
      }
    }
    while ( !(v17 | v18) );
  }
LABEL_19:
  v19 = *(_DWORD *)(result + 772) - v4 + 1;
  *(_DWORD *)(result + 772) = v19;
  if ( v19 <= -2048 )
  {
    *(_BYTE *)(result + 776) = 0;
    *(_DWORD *)(result + 768) = 0;
    *(_DWORD *)(result + 772) = 0;
    return result;
  }
  v20 = -1;
  v21 = v3 - 32;
  v22 = -1 << v3;
  if ( v3 - 32 >= 0 )
  {
    v22 = 0;
    v20 = -1 << v21;
  }
  v23 = ~v20;
  v24 = ~v22;
  v25 = 0;
  if ( v4 < v2 )
  {
    v26 = 768 - v4;
    v25 = 0;
    if ( v4 > 0x300 )
      v26 = 0;
    do
    {
      if ( v26 == v25 )
        core::panicking::panic_bounds_check(v4 + v25, 768, (int)&off_2E3AD4);
      v27 = (v8 >> v3) | (v6 << (32 - v3));
      v28 = v8 & v24;
      if ( v21 >= 0 )
        v27 = v6 >> v21;
      v29 = *(unsigned __int8 *)(result + v4 + v25);
      *(_BYTE *)(result + v25++) = v27;
      v31 = 10 * v28 + v29;
      v6 = (10LL * (unsigned int)v28 + __PAIR64__(10 * (v6 & v23), v29)) >> 32;
      v30 = v31;
      v8 = v31;
    }
    while ( v4 + v25 < *(_DWORD *)(result + 768) );
    if ( __PAIR64__(v6, v31) )
      goto LABEL_34;
LABEL_42:
    *(_DWORD *)(result + 768) = v25;
    if ( !v25 )
      return result;
    goto LABEL_43;
  }
  v30 = v8;
  if ( !(v8 | v6) )
    goto LABEL_42;
  do
  {
LABEL_34:
    v33 = (v30 >> v3) | (v6 << (32 - v3));
    if ( v21 >= 0 )
      v33 = v6 >> v21;
    if ( v25 < 0x300 )
    {
      *(_BYTE *)(result + v25++) = v33;
    }
    else if ( (_BYTE)v33 )
    {
      *(_BYTE *)(result + 776) = 1;
    }
    v32 = v30 & v24;
    v30 = 10 * (v30 & v24);
    v6 = (10 * __PAIR64__(v6 & v23, v32)) >> 32;
  }
  while ( v30 | v6 );
  *(_DWORD *)(result + 768) = v25;
LABEL_43:
  v34 = v25 - 1;
  if ( v34 >> 8 > 2 )
    core::panicking::panic_bounds_check(v34, 768, (int)&off_2E3A84);
  do
  {
    if ( *(_BYTE *)(result + v34) )
      break;
    *(_DWORD *)(result + 768) = v34--;
  }
  while ( v34 != -1 );
  return result;
}
