int __fastcall sub_2328A0(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r2
  size_t v6; // r0
  size_t v7; // r3
  unsigned int v8; // r7
  size_t v9; // r6
  size_t v10; // r8
  int v11; // r3
  unsigned int v12; // r9
  unsigned int v13; // r1
  int result; // r0

  v4 = a2[4];
  *a1 = *(_DWORD *)(a3 + 28);
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 != 1 )
  {
    v13 = *(_DWORD *)(a3 + 20);
    result = *(unsigned __int8 *)(a3 + 55);
    if ( !*(_BYTE *)(a3 + 55) )
      return result;
    goto LABEL_14;
  }
  v6 = *(_DWORD *)(a3 + 32);
  v7 = a2[6];
  v8 = *(_DWORD *)(a3 + 20);
  v9 = v7 - v6;
  if ( v7 - v6 >= v8 )
    v9 = *(_DWORD *)(a3 + 20);
  if ( v9 )
  {
    v10 = v9 + v6;
    if ( __CFADD__(v9, v6) )
      core::slice::index::slice_index_order_fail();
    if ( v10 > v7 )
      core::slice::index::slice_end_index_len_fail();
    v11 = *(_DWORD *)(a3 + 16);
    v12 = v11 + v9;
    if ( __CFADD__(v11, v9) )
      core::slice::index::slice_index_order_fail();
    if ( v12 > (unsigned int)&elf_hash_chain[697] )
      core::slice::index::slice_end_index_len_fail();
    memcpy((void *)(a2[5] + v6), (const void *)(*(_DWORD *)(a3 + 44) + v11), v9);
    v6 = v10;
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 16);
  }
  v13 = v8 - v9;
  *(_DWORD *)(a3 + 32) = v6;
  *(_DWORD *)(a3 + 16) = v12;
  *(_DWORD *)(a3 + 20) = v8 - v9;
  a1[2] = v6;
  result = *(unsigned __int8 *)(a3 + 55);
  if ( *(_BYTE *)(a3 + 55) )
  {
LABEL_14:
    if ( !v13 )
    {
      a1[1] = 1;
      return 1;
    }
  }
  return result;
}
