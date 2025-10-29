int __fastcall sub_1ED79C(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r1
  int v8; // r2
  bool v9; // zf
  int result; // r0
  int v11; // r7
  int v12; // r1
  unsigned int v13; // r7
  int v14; // r4

  if ( *(_BYTE *)(a4 + 8) )
  {
    if ( *(_BYTE *)(a4 + 9) )
    {
      v6 = 1026;
      if ( !*(_BYTE *)(a4 + 10) )
      {
        v6 = 2;
LABEL_8:
        v7 = *(unsigned __int8 *)(a4 + 11);
        v8 = *(unsigned __int8 *)(a4 + 13);
        goto LABEL_20;
      }
    }
    else
    {
      v6 = 1026;
      if ( !*(_BYTE *)(a4 + 10) )
      {
        v9 = *(_BYTE *)(a4 + 11) == 0;
        if ( !*(_BYTE *)(a4 + 11) )
          v9 = *(_BYTE *)(a4 + 12) == 0;
        if ( !v9 )
          goto LABEL_19;
        v6 = 0;
        v8 = 0;
        v7 = 0;
        if ( *(_BYTE *)(a4 + 13) )
          goto LABEL_19;
        goto LABEL_20;
      }
    }
  }
  else if ( *(_BYTE *)(a4 + 9) )
  {
    v6 = 1025;
    if ( !*(_BYTE *)(a4 + 10) )
    {
      v6 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = 1025;
    if ( !*(_BYTE *)(a4 + 10) )
    {
LABEL_19:
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_DWORD *)(a1 + 4) = 22;
      *(_BYTE *)a1 = 0;
      return 0;
    }
  }
  v7 = *(unsigned __int8 *)(a4 + 11);
  v8 = *(unsigned __int8 *)(a4 + 13);
  if ( *(_BYTE *)(a4 + 11) && !*(_BYTE *)(a4 + 13) )
    goto LABEL_19;
LABEL_20:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v11 = 576;
    if ( !v7 )
      v11 = 64;
    if ( v8 )
      v11 = 192;
  }
  else
  {
    v12 = v7 != 0;
    if ( v8 )
      v11 = 192;
    else
      v11 = v12 << 9;
  }
  v13 = v6 | v11 | *(_DWORD *)a4 & 0xFFFFFFFC | 0x80000;
  while ( 1 )
  {
    result = open64(a2, v13);
    if ( result != -1 )
      break;
    v14 = *_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v14) != 35 )
    {
      *(_DWORD *)(a1 + 4) = v14;
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return 0;
    }
  }
  *(_DWORD *)(a1 + 4) = result;
  *(_BYTE *)a1 = 4;
  return result;
}
