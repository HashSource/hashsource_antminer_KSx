int __fastcall sub_229504(int result, int *a2)
{
  unsigned int v2; // r2
  int v3; // r9
  unsigned int v4; // r12
  unsigned int v5; // r5
  unsigned int v6; // r6
  char v7; // r4
  unsigned __int8 v8; // r10
  __int64 v9; // kr08_8
  int v10; // r7
  unsigned __int64 v11; // kr18_8
  unsigned __int64 v12; // kr10_8
  unsigned __int64 v13; // kr20_8

  v2 = a2[2];
  v3 = *a2;
  v4 = a2[1];
  if ( v2 < v4 && *(_BYTE *)(v3 + v2) == 95 )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    a2[2] = v2 + 1;
    *(_BYTE *)result = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v2 >= v4 )
        goto LABEL_18;
      if ( *(_BYTE *)(v3 + v2) == 95 )
        break;
      v7 = *(_BYTE *)(v3 + v2);
      v8 = v7 - 48;
      if ( (unsigned __int8)(v7 - 48) >= 0xAu )
      {
        if ( (unsigned __int8)(v7 - 97) >= 0x1Au )
        {
          if ( (unsigned __int8)(v7 - 65) >= 0x1Au )
            goto LABEL_18;
          v8 = v7 - 29;
        }
        else
        {
          v8 = v7 - 87;
        }
      }
      v9 = 62LL * v5;
      a2[2] = ++v2;
      v10 = (62 * (unsigned __int64)v6) >> 32;
      v11 = HIDWORD(v9) + (unsigned __int64)(62 * v6);
      if ( !is_mul_ok(v6, 0x3Eu) )
        v10 = 1;
      if ( !(v10 | HIDWORD(v11)) )
      {
        v12 = v9 + __PAIR64__(62 * v6, v8);
        v6 = HIDWORD(v12);
        v5 = v12;
        if ( !__CFADD__(__CFADD__((_DWORD)v9, v8), (_DWORD)v11) )
          continue;
      }
      goto LABEL_18;
    }
    a2[2] = v2 + 1;
    v13 = __CFADD__(v5, 1) + (unsigned __int64)v6;
    if ( HIDWORD(v13) )
    {
LABEL_18:
      *(_WORD *)result = 1;
      return result;
    }
    *(_DWORD *)(result + 8) = v5 + 1;
    *(_DWORD *)(result + 12) = v13;
    *(_BYTE *)result = 0;
  }
  return result;
}
