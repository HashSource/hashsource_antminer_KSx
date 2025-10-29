int __fastcall sub_1CF990(int result, int a2)
{
  unsigned int v2; // r6
  unsigned int v4; // r5
  char *v5; // r10
  size_t v6; // r2
  ssize_t v7; // r0
  char **v8; // r11
  bool v9; // zf
  int v10; // [sp+0h] [bp-4h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
  {
    *(_BYTE *)result = 4;
    return result;
  }
  v4 = 0;
  v10 = result;
  while ( 1 )
  {
    while ( 1 )
    {
      *(_BYTE *)(a2 + 12) = 1;
      if ( v2 < v4 )
        core::slice::index::slice_start_index_len_fail();
      v5 = *(char **)(a2 + 4);
      v6 = v2 - v4;
      if ( v2 - v4 >= 0x7FFFFFFF )
        v6 = 0x7FFFFFFF;
      v7 = write(1, &v5[v4], v6);
      if ( v7 != -1 )
      {
        *(_BYTE *)(a2 + 12) = 0;
        goto LABEL_11;
      }
      v8 = (char **)*_errno_location();
      *(_BYTE *)(a2 + 12) = 0;
      v7 = v2 - v4;
      if ( v8 != (char **)9 )
        break;
LABEL_11:
      if ( !v7 )
      {
        result = 2;
        v8 = &off_2DE964;
        goto LABEL_19;
      }
      v4 += v7;
      if ( v2 <= v4 )
      {
LABEL_13:
        result = 4;
        *(_BYTE *)v10 = 4;
        if ( v4 )
        {
          if ( v2 < v4 )
            core::slice::index::slice_end_index_len_fail();
          result = 0;
          *(_DWORD *)(a2 + 8) = 0;
          if ( v2 != v4 )
          {
            result = (int)memmove(*(void **)(a2 + 4), (const void *)(*(_DWORD *)(a2 + 4) + v4), v2 - v4);
            *(_DWORD *)(a2 + 8) = v2 - v4;
          }
        }
        return result;
      }
    }
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v8) != 35 )
      break;
    if ( v2 <= v4 )
      goto LABEL_13;
  }
  result = 0;
LABEL_19:
  v9 = v4 == 0;
  *(_DWORD *)v10 = result;
  *(_DWORD *)(v10 + 4) = v8;
  if ( v4 )
  {
    result = 0;
    *(_DWORD *)(a2 + 8) = 0;
    v9 = v2 == v4;
  }
  if ( !v9 )
  {
    result = (int)memmove(v5, &v5[v4], v2 - v4);
    *(_DWORD *)(a2 + 8) = v2 - v4;
  }
  return result;
}
