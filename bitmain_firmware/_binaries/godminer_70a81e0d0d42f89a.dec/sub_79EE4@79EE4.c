int __fastcall sub_79EE4(int a1, int a2, char *buf, size_t n)
{
  char **v4; // r4
  size_t v7; // r0
  size_t v8; // r6
  int result; // r0
  int v11; // r4
  int v12; // r9
  size_t v13; // r2
  unsigned int v14; // r0
  int v15; // r1
  int v16; // [sp+3h] [bp-Dh]
  unsigned __int8 v17; // [sp+8h] [bp-8h] BYREF
  _BYTE v18[7]; // [sp+9h] [bp-7h]

  v7 = *(_DWORD *)a2;
  v8 = n;
  if ( *(_DWORD *)a2 - *(_DWORD *)(a2 + 8) < n )
  {
    sub_1D1340(&v17, a2);
    result = v17;
    if ( v17 != 4 )
    {
      v16 = *(_DWORD *)&v18[3];
      LOBYTE(v16) = v18[3];
      v15 = *(_DWORD *)v18;
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 1) = v15;
      *(_BYTE *)a1 = result;
      return result;
    }
    v7 = *(_DWORD *)a2;
  }
  if ( v7 <= v8 )
  {
    v12 = 4;
    *(_BYTE *)(a2 + 12) = 1;
    if ( v8 )
    {
      do
      {
        while ( 1 )
        {
          v13 = v8;
          if ( v8 >= 0x7FFFFFFF )
            v13 = 0x7FFFFFFF;
          v14 = write(1, buf, v13);
          if ( v14 == -1 )
            break;
          if ( !v14 )
          {
            v12 = 2;
            v4 = &off_2E0C28;
            goto LABEL_20;
          }
          if ( v8 < v14 )
            core::slice::index::slice_start_index_len_fail();
          v8 -= v14;
          buf += v14;
          if ( !v8 )
          {
            v4 = &off_2E0C28;
            goto LABEL_20;
          }
        }
        v4 = (char **)*_errno_location();
      }
      while ( (unsigned __int8)std::sys::unix::decode_error_kind(v4) == 35 );
      v12 = 0;
      if ( v4 == (char **)9 )
        v12 = 4;
    }
LABEL_20:
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v4;
    *(_BYTE *)(a2 + 12) = 0;
    return 0;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 8);
    memcpy((void *)(*(_DWORD *)(a2 + 4) + v11), buf, v8);
    *(_DWORD *)(a2 + 8) = v11 + v8;
    *(_BYTE *)a1 = 4;
    return 4;
  }
}
