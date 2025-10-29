char **__fastcall <std::io::stdio::StdinLock as std::io::Read>::read_exact(int a1, int *a2, char *dest, size_t n)
{
  int v4; // r4
  unsigned int v6; // r5
  char *v7; // r6
  int v8; // r7
  char v10; // [sp+0h] [bp-8h] BYREF
  unsigned int v11; // [sp+4h] [bp-4h]

  v4 = *a2;
  v6 = n;
  v7 = dest;
  v8 = *(_DWORD *)(*a2 + 16);
  if ( *(_DWORD *)(*a2 + 20) - v8 >= n )
  {
    memcpy(dest, (const void *)(*(_DWORD *)(v4 + 8) + v8), n);
    *(_DWORD *)(v4 + 16) = v8 + v6;
LABEL_10:
    *(_BYTE *)a1 = 4;
    return (char **)4;
  }
  else
  {
    while ( 1 )
    {
      sub_1BCC5C((int)&v10, (char **)(v4 + 8), v7, v6);
      if ( v10 != 4 )
        __asm { ADD             PC, R0, R1 }
      if ( !v11 )
        break;
      if ( v6 < v11 )
        core::slice::index::slice_start_index_len_fail(v11, v6, (int)&off_2C9BD4);
      v6 -= v11;
      v7 += v11;
      if ( !v6 )
        goto LABEL_10;
    }
    *(_DWORD *)a1 = 2;
    *(_DWORD *)(a1 + 4) = &off_2C9BE4;
    return &off_2C9BE4;
  }
}
