int __fastcall sub_1FEE88(_DWORD *a1, unsigned __int64 a2)
{
  unsigned int v3; // lr
  int v4; // r10
  unsigned int v5; // r11
  unsigned int v6; // r1
  unsigned int v7; // r12
  unsigned int v8; // r4
  unsigned int v9; // r7
  unsigned int v10; // r5
  int v11; // r1
  int v12; // r12
  int v13; // r1
  int v14; // lr
  unsigned int v15; // r1

  v3 = a1[18];
  if ( !v3 )
    return 0;
  v4 = a1[17];
  v5 = 0;
  v6 = a1[18];
  v7 = v6;
  do
  {
    while ( 1 )
    {
      v8 = v5 + (v6 >> 1);
      v9 = *(_DWORD *)(v4 + 24 * v8);
      v10 = *(_DWORD *)(v4 + 24 * v8 + 4);
      v11 = v9 ^ a2 | v10 ^ HIDWORD(a2);
      if ( a2 != __PAIR64__(v10, v9) )
        v11 = 1;
      if ( __PAIR64__(v10, v9) < a2 )
        v11 = -1;
      if ( v11 != 1 )
        break;
      v7 = v8;
      v6 = v8 - v5;
      if ( v8 <= v5 )
        goto LABEL_11;
    }
    if ( (unsigned __int8)v11 != 255 )
      goto LABEL_13;
    v5 = v8 + 1;
    v6 = v7 - (v8 + 1);
  }
  while ( v7 > v8 + 1 );
LABEL_11:
  if ( !v5 )
    return 0;
  v8 = v5 - 1;
LABEL_13:
  v12 = 0;
  if ( v8 < v3 )
  {
    v13 = v4 + 24 * v8;
    if ( a2 >= *(_QWORD *)v13 && *(_QWORD *)(v13 + 8) + *(_QWORD *)v13 >= a2 )
    {
      v14 = a1[8];
      if ( v14 )
      {
        v15 = *(_DWORD *)(v13 + 16);
        v12 = 0;
        if ( !__CFADD__(__CFADD__(a1[10], v15), a1[11]) )
          return <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                   v14,
                   a1[9],
                   a1[10] + v15,
                   (*((_QWORD *)a1 + 5) + (unsigned __int64)v15) >> 32,
                   a1[12],
                   a1[13],
                   0);
      }
    }
  }
  return v12;
}
