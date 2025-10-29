int __fastcall core::num::fmt::Part::write(unsigned __int16 *a1, char *dest, unsigned int a3)
{
  int v3; // r3
  unsigned int v4; // r12
  unsigned int v5; // r7
  int v6; // r5
  unsigned __int16 v7; // r3
  unsigned int v8; // r2
  size_t v10; // r3
  size_t v11; // r3

  v3 = *a1;
  if ( *a1 )
  {
    if ( v3 == 1 )
    {
      v4 = a1[1];
      if ( v4 >= 0x3E8 )
      {
        v5 = 5;
        if ( v4 < 0x2710 )
          v5 = 4;
        v6 = 0;
        if ( v5 > a3 )
          return v6;
        goto LABEL_13;
      }
      v5 = 1;
      if ( v4 >= 0xA )
      {
        v5 = 3;
        if ( v4 < 0x64 )
          v5 = 2;
        v6 = 0;
        if ( v5 > a3 )
          return v6;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = *((_DWORD *)a1 + 2);
    }
    v6 = 0;
    if ( v5 > a3 )
      return v6;
  }
  else
  {
    v5 = *((_DWORD *)a1 + 1);
    v6 = 0;
    if ( v5 > a3 )
      return v6;
  }
LABEL_13:
  if ( !*a1 )
  {
    v10 = *((_DWORD *)a1 + 1);
    if ( v10 > a3 )
      goto LABEL_28;
    v6 = 1;
    if ( v10 )
    {
      memset(dest, 48, v10);
      return 1;
    }
    return v6;
  }
  if ( v3 == 1 )
  {
    v6 = 1;
    if ( v5 )
    {
      v7 = a1[1];
      v8 = v5;
      do
      {
        dest[--v8] = (v7 % 0xAu) | 0x30;
        v7 /= 0xAu;
      }
      while ( v8 );
    }
    return v6;
  }
  v11 = *((_DWORD *)a1 + 2);
  if ( v11 > a3 )
LABEL_28:
    core::slice::index::slice_end_index_len_fail();
  memcpy(dest, *((const void **)a1 + 1), v11);
  return 1;
}
