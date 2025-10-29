int __fastcall core::slice::memchr::memrchr(unsigned __int8 a1, int a2, unsigned int a3)
{
  unsigned int v4; // lr
  unsigned int v5; // r4
  unsigned int v6; // r0
  int v7; // r12
  int v8; // r4
  int v10; // r4
  int v11; // r5
  unsigned int v12; // r3
  int v13; // r0
  int v14; // r6
  unsigned int v15; // r7
  int v16; // r0
  int v17; // r1
  int v18; // r2

  v4 = ((a2 + 3) & 0xFFFFFFFC) - a2;
  v5 = (a3 - v4) & 7;
  if ( a3 < v4 )
    v5 = 0;
  v6 = a3 - v5;
  if ( v4 >= a3 )
    v4 = a3;
  if ( a3 < v5 )
    core::slice::index::slice_start_index_len_fail();
  v7 = a1;
  if ( !v5 )
    goto LABEL_29;
  v8 = a2 + v6;
  if ( *(unsigned __int8 *)(a2 + a3 - 1) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 1 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 2) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 2 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 3) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 3 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 4) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 4 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 5) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 5 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 6) == a1 )
    return 1;
  if ( v8 == a2 + a3 - 6 )
    goto LABEL_29;
  if ( *(unsigned __int8 *)(a2 + a3 - 7) == a1 )
    return 1;
  if ( v8 != a2 + a3 - 7 )
    return 1;
LABEL_29:
  v10 = 16843009 * a1;
  v11 = a2 - 8;
  do
  {
    v12 = v6;
    if ( v6 <= v4 )
      break;
    if ( (~(*(_DWORD *)(v11 + v6) ^ v10) & 0x80808080 & ((*(_DWORD *)(v11 + v6) ^ v10) - 16843009)) != 0 )
      break;
    v13 = *(_DWORD *)(v11 + v6 + 4) ^ v10;
    v14 = v13 - 16843009;
    v15 = ~v13 & 0x80808080;
    v6 = v12 - 8;
  }
  while ( (v15 & v14) == 0 );
  if ( v12 > a3 )
    core::slice::index::slice_end_index_len_fail();
  v16 = -v12;
  v17 = a2 - 1;
  while ( v16 )
  {
    v18 = *(unsigned __int8 *)(v17 - v16++);
    if ( v18 == v7 )
      return 1;
  }
  return 0;
}
