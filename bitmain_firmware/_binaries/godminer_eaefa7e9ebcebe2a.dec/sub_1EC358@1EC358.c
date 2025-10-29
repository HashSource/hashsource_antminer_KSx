void __fastcall sub_1EC358(int a1, const char *a2)
{
  unsigned int v4; // r5
  char *v5; // r0
  char *v6; // r6
  ssize_t v7; // r0
  unsigned int v8; // r4
  int v9; // r0
  int v10; // r7
  size_t v11; // r0
  char *v12; // r1
  unsigned int v13; // r2
  size_t v14; // [sp+0h] [bp-10h] BYREF
  char *v15; // [sp+4h] [bp-Ch]
  unsigned int v16; // [sp+8h] [bp-8h]

  v4 = 256;
  v5 = (char *)_rust_alloc(0x100u);
  if ( !v5 )
    alloc::alloc::handle_alloc_error();
  v6 = v5;
  v15 = v5;
  v14 = 256;
  v7 = readlink(a2, v5, 0x100u);
  if ( v7 == -1 )
  {
LABEL_6:
    v9 = *_errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = v9;
    if ( v4 )
      _rust_dealloc(v6);
  }
  else
  {
    v8 = v7;
    v4 = 256;
    while ( 1 )
    {
      v16 = v8;
      if ( v4 != v8 )
        break;
      sub_797F8(&v14, v4, 1);
      v4 = v14;
      v6 = v15;
      v8 = readlink(a2, v15, v14);
      if ( v8 == -1 )
        goto LABEL_6;
    }
    if ( v4 > v8 )
    {
      if ( v8 )
      {
        v10 = _rust_realloc(v6, v4, 1, v8);
        if ( !v10 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v10 = 1;
        _rust_dealloc(v6);
      }
      v14 = v8;
      v15 = (char *)v10;
    }
    v11 = v14;
    v12 = v15;
    v13 = v16;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v11;
    *(_DWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 12) = v13;
  }
}
