int __fastcall std::sys::unix::kernel_copy::sendfile_splice(
        int result,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  char *v12; // r0
  char **v13; // r2
  unsigned int v14; // [sp+8h] [bp-34h]
  int v15; // [sp+Ch] [bp-30h]
  unsigned __int64 v16; // [sp+10h] [bp-2Ch] BYREF
  int v17; // [sp+18h] [bp-24h]
  int v18; // [sp+1Ch] [bp-20h]
  _DWORD v19[6]; // [sp+24h] [bp-18h] BYREF

  if ( !a2 )
  {
    if ( byte_2E7F64 )
    {
      v15 = result;
      if ( a5 )
      {
        v7 = 0;
        v14 = 0;
        while ( 1 )
        {
          v10 = a5 - v7;
          if ( (unsigned int)(a5 - v7) >= 0x7FFFF000 )
            v10 = 2147479552;
          if ( (a5 - v7) >> 32 )
            v10 = 2147479552;
          v11 = sendfile64(a4, a3, 0, v10);
          if ( v11 == -1 )
            goto LABEL_28;
          if ( v11 )
          {
            v7 += v11;
            if ( v7 < a5 )
              continue;
          }
          goto LABEL_26;
        }
      }
LABEL_25:
      v7 = 0;
LABEL_26:
      result = 4;
      goto LABEL_27;
    }
LABEL_24:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_BYTE *)(result + 8) = 6;
    return result;
  }
  if ( !byte_2E7F65 )
    goto LABEL_24;
  v15 = result;
  if ( !a5 )
    goto LABEL_25;
  v7 = 0;
  v14 = a2;
  while ( 1 )
  {
    v8 = a5 - v7;
    if ( (unsigned int)(a5 - v7) >= 0x7FFFF000 )
      LODWORD(v8) = 2147479552;
    if ( HIDWORD(v8) )
      LODWORD(v8) = 2147479552;
    v9 = splice(a3, 0, a4, 0, v8, 0);
    if ( v9 == -1 )
      break;
    if ( v9 )
    {
      v7 += v9;
      if ( v7 < a5 )
        continue;
    }
    goto LABEL_26;
  }
LABEL_28:
  v16 = v7;
  result = *_errno_location();
  v18 = result;
  v17 = 0;
  switch ( result )
  {
    case 1:
      goto LABEL_31;
    case 22:
      if ( v7 )
      {
        v13 = &off_2DF848;
LABEL_41:
        v19[2] = 0;
        sub_797A0((int)&v16, v19, (int)v13);
      }
      goto LABEL_36;
    case 38:
LABEL_31:
      v12 = &byte_2E7F64;
      if ( v14 )
        v12 = &byte_2E7F65;
      *v12 = 0;
      if ( v7 )
      {
        v13 = &off_2DF858;
        goto LABEL_41;
      }
LABEL_36:
      *(_DWORD *)v15 = 0;
      *(_DWORD *)(v15 + 4) = 0;
      *(_BYTE *)(v15 + 8) = 6;
      return 6;
  }
  if ( __PAIR64__(v14, result) == 75 )
  {
    result = 6;
LABEL_27:
    *(_BYTE *)(v15 + 8) = result;
    *(_QWORD *)v15 = v7;
    return result;
  }
  *(_QWORD *)v15 = v7;
  *(_DWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 12) = result;
  return result;
}
