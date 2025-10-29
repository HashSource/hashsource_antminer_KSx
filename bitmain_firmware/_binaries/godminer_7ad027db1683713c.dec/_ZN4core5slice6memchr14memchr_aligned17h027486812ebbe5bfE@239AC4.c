int __fastcall core::slice::memchr::memchr_aligned(unsigned __int8 a1, int a2, unsigned int a3)
{
  int v3; // lr
  unsigned int v4; // r0
  unsigned int v5; // r0
  int i; // r3
  unsigned int v7; // r12
  int v8; // r3
  int v9; // r6
  int v10; // r7
  unsigned int v11; // r6
  bool v12; // zf

  v3 = a1;
  v4 = (a2 + 3) & 0xFFFFFFFC;
  if ( v4 == a2 )
    goto LABEL_10;
  v5 = v4 - a2;
  if ( v5 >= a3 )
    v5 = a3;
  if ( !v5 )
  {
LABEL_10:
    v7 = a3 - 8;
    v5 = 0;
LABEL_11:
    v8 = 16843009 * v3;
    do
    {
      v9 = *(_DWORD *)(a2 + v5) ^ v8;
      v10 = v9 - 16843009;
      v11 = ~v9 & 0x80808080;
      v12 = (v11 & v10) == 0;
      if ( (v11 & v10) == 0 )
        v12 = (~(*(_DWORD *)(a2 + v5 + 4) ^ v8) & 0x80808080 & ((*(_DWORD *)(a2 + v5 + 4) ^ v8) - 16843009)) == 0;
      if ( !v12 )
        break;
      v5 += 8;
    }
    while ( v5 <= v7 );
    if ( v5 > a3 )
      core::slice::index::slice_start_index_len_fail(v5, a3, (int)&off_2CF2A8);
  }
  else
  {
    for ( i = 0; i != v5; ++i )
    {
      if ( *(unsigned __int8 *)(a2 + i) == v3 )
        return 1;
    }
    v7 = a3 - 8;
    if ( v5 <= a3 - 8 )
      goto LABEL_11;
  }
  if ( v5 == a3 )
    return 0;
  while ( *(unsigned __int8 *)(a2 + v5) != v3 )
  {
    if ( a3 == ++v5 )
      return 0;
  }
  return 1;
}
