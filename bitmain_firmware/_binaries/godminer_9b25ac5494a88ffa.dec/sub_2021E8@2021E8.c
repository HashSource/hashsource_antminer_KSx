int __fastcall sub_2021E8(_DWORD *a1, signed int size, int a3, int a4)
{
  int v7; // r1
  int v8; // r0

  if ( a3 )
  {
    if ( size < 0 )
    {
      a1[2] = 0;
      *a1 = 1;
      return 1;
    }
    else
    {
      if ( *(_DWORD *)(a4 + 8) && (v7 = *(_DWORD *)(a4 + 4)) != 0 )
      {
        v8 = _rust_realloc(*(void **)a4, v7, a3, size);
        if ( !v8 )
        {
LABEL_6:
          a1[1] = size;
          a1[2] = a3;
          *a1 = 1;
          return 1;
        }
      }
      else if ( size )
      {
        v8 = _rust_alloc(size);
        if ( !v8 )
          goto LABEL_6;
      }
      else
      {
        v8 = a3;
      }
      a1[1] = v8;
      a1[2] = size;
      *a1 = 0;
      return 0;
    }
  }
  else
  {
    a1[1] = size;
    a1[2] = 0;
    *a1 = 1;
    return 1;
  }
}
