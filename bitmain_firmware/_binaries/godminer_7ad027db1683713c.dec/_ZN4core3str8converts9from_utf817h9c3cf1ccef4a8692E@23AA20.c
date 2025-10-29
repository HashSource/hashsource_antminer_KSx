int __fastcall core::str::converts::from_utf8(int result, int a2, unsigned int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r3
  int v5; // lr
  int v6; // r6
  int v7; // r7
  char v8; // r9
  unsigned int v9; // r5
  char v10; // r11
  int v11; // r5
  bool v12; // zf
  int v13; // r10
  char v14; // r10

  v3 = a3 - 7;
  v4 = 0;
  if ( a3 < 7 )
    v3 = 0;
  if ( !a3 )
  {
LABEL_55:
    *(_DWORD *)(result + 4) = a2;
    *(_DWORD *)(result + 8) = a3;
    *(_DWORD *)result = 0;
    return result;
  }
  v5 = ((a2 + 3) & 0xFFFFFFFC) - a2;
  while ( 1 )
  {
    v6 = *(unsigned __int8 *)(a2 + v4);
    if ( (v6 & 0x80u) == 0 )
    {
      if ( v5 == -1 || (((_BYTE)v5 - (_BYTE)v4) & 3) != 0 )
      {
        ++v4;
      }
      else
      {
        while ( v4 < v3 )
        {
          v11 = *(_DWORD *)(a2 + v4);
          v12 = (v11 & 0x80808080) == 0;
          if ( (v11 & 0x80808080) == 0 )
            v12 = (*(_DWORD *)(a2 + v4 + 4) & 0x80808080) == 0;
          if ( !v12 )
            break;
          v4 += 8;
        }
        if ( v4 < a3 )
        {
          while ( *(char *)(a2 + v4) >= 0 )
          {
            if ( a3 == ++v4 )
              goto LABEL_55;
          }
        }
      }
      goto LABEL_6;
    }
    v7 = byte_29F599[v6];
    v8 = 1;
    if ( v7 != 4 )
    {
      if ( v7 == 3 )
      {
        v10 = 0;
        if ( v4 + 1 >= a3 )
          goto LABEL_60;
        v14 = *(_BYTE *)(a2 + v4 + 1);
        if ( v6 == 224 )
        {
          if ( (v14 & 0xE0) != 0xA0 )
            goto LABEL_59;
        }
        else if ( v6 == 237 )
        {
          if ( v14 >= -96 )
            goto LABEL_59;
        }
        else if ( (unsigned __int8)(v6 + 31) >= 0xCu )
        {
          if ( ((char)v6 & 0xFFFFFFFE) != 0xFFFFFFEE || v14 >= -64 )
            goto LABEL_59;
        }
        else if ( v14 > -65 )
        {
          goto LABEL_59;
        }
        v9 = v4 + 2;
        if ( v4 + 2 >= a3 )
          goto LABEL_60;
        if ( *(char *)(a2 + v9) > -65 )
          break;
      }
      else
      {
        if ( v7 != 2 )
          goto LABEL_59;
        v9 = v4 + 1;
        if ( v4 + 1 >= a3 )
        {
          v10 = 0;
          goto LABEL_60;
        }
        v8 = 1;
        v10 = 1;
        if ( *(char *)(a2 + v9) > -65 )
          goto LABEL_60;
      }
      goto LABEL_54;
    }
    v10 = 0;
    if ( v4 + 1 >= a3 )
      goto LABEL_60;
    v13 = *(char *)(a2 + v4 + 1);
    if ( v6 == 240 )
    {
      if ( (unsigned __int8)(v13 + 112) >= 0x30u )
        goto LABEL_59;
    }
    else if ( v6 == 244 )
    {
      if ( v13 > -113 )
        goto LABEL_59;
    }
    else if ( (unsigned __int8)(v6 + 15) > 2u || v13 >= -64 )
    {
      goto LABEL_59;
    }
    if ( v4 + 2 >= a3 )
      goto LABEL_60;
    if ( *(char *)(a2 + v4 + 2) > -65 )
      break;
    v9 = v4 + 3;
    if ( v4 + 3 >= a3 )
      goto LABEL_60;
    if ( *(char *)(a2 + v9) > -65 )
    {
      v8 = 3;
      goto LABEL_59;
    }
LABEL_54:
    v4 = v9 + 1;
LABEL_6:
    if ( v4 >= a3 )
      goto LABEL_55;
  }
  v8 = 2;
LABEL_59:
  v10 = 1;
LABEL_60:
  *(_BYTE *)(result + 9) = v8;
  *(_BYTE *)(result + 8) = v10;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)result = 1;
  return result;
}
