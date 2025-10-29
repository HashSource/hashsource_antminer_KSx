int __fastcall <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(int a1, int a2)
{
  _DWORD *v2; // r5
  unsigned int v4; // r7
  unsigned int v5; // r0
  char *v6; // r8
  unsigned int v7; // r6
  unsigned int v8; // r0
  size_t v9; // r2
  int v10; // r1

  v2 = *(_DWORD **)a2;
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 16);
  v5 = *(_DWORD *)(*(_DWORD *)a2 + 20);
  if ( v4 < v5 )
  {
    v6 = (char *)v2[2];
LABEL_11:
    *(_DWORD *)(a1 + 8) = v5 - v4;
    *(_DWORD *)(a1 + 4) = &v6[v4];
    *(_DWORD *)a1 = 0;
    return 0;
  }
  v7 = v2[3];
  v8 = v2[6];
  if ( v7 < v8 )
    core::slice::index::slice_start_index_len_fail(v8, v2[3], (int)&off_2C9AB4);
  v6 = (char *)v2[2];
  v4 = 0;
  memset(&v6[v8], 0, v7 - v8);
  v9 = v7;
  if ( v7 >= 0x7FFFFFFF )
    v9 = 0x7FFFFFFF;
  v5 = read(0, v6, v9);
  if ( v5 != -1 || (v10 = *_errno_location(), v5 = 0, v10 == 9) )
  {
    v2[4] = 0;
    if ( v7 <= v5 )
      v7 = v5;
    v2[5] = v5;
    v2[6] = v7;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 7) = 0;
  *(_WORD *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1;
  return 1;
}
