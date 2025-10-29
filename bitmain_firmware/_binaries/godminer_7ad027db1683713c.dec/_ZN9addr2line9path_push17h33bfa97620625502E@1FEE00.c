void __fastcall addr2line::path_push(int a1, unsigned __int8 *src, size_t size)
{
  int v6; // r0
  bool v7; // zf
  void *v8; // r0
  void *v9; // r7
  _BYTE *v10; // r6
  unsigned int v11; // r7
  int v12; // r9

  if ( !size )
    goto LABEL_18;
  v6 = *src;
  v7 = v6 == 47;
  if ( v6 != 47 )
    v7 = v6 == 92;
  if ( v7 )
    goto LABEL_6;
  if ( size < 2 || (char)src[1] < -64 )
  {
LABEL_18:
    v10 = *(_BYTE **)(a1 + 4);
    v11 = *(_DWORD *)(a1 + 8);
    if ( !v11 )
    {
      LOBYTE(v12) = 47;
      goto LABEL_31;
    }
    if ( *v10 == 92 )
    {
      v12 = 92;
      goto LABEL_30;
    }
    v12 = 47;
    if ( v11 >= 2 && (char)v10[1] >= -64 )
    {
      if ( v11 <= 3 )
      {
        if ( v11 != 3 )
          goto LABEL_30;
      }
      else if ( (char)v10[3] < -64 )
      {
        goto LABEL_30;
      }
      if ( !bcmp(v10 + 1, &unk_295378, 2u) )
        v12 = 92;
    }
LABEL_30:
    if ( v12 == (unsigned __int8)v10[v11 - 1] )
    {
LABEL_34:
      if ( *(_DWORD *)a1 - v11 < size )
      {
        sub_7BA6C((unsigned int *)a1, v11, size);
        v10 = *(_BYTE **)(a1 + 4);
        v11 = *(_DWORD *)(a1 + 8);
      }
      memcpy(&v10[v11], src, size);
      *(_DWORD *)(a1 + 8) = v11 + size;
      return;
    }
LABEL_31:
    if ( v11 == *(_DWORD *)a1 )
    {
      sub_1FEC2C((unsigned int *)a1, v11);
      v10 = *(_BYTE **)(a1 + 4);
      v11 = *(_DWORD *)(a1 + 8);
    }
    v10[v11++] = v12;
    *(_DWORD *)(a1 + 8) = v11;
    goto LABEL_34;
  }
  if ( size <= 3 )
  {
    if ( size != 3 )
      goto LABEL_18;
  }
  else if ( (char)src[3] < -64 )
  {
    goto LABEL_18;
  }
  if ( *(_WORD *)(src + 1) != 23610 )
    goto LABEL_18;
LABEL_6:
  if ( (int)size <= -1 )
    alloc::raw_vec::capacity_overflow();
  v8 = (void *)_rust_alloc(size);
  if ( !v8 )
    alloc::alloc::handle_alloc_error();
  v9 = v8;
  memcpy(v8, src, size);
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
  *(_DWORD *)a1 = size;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = size;
}
