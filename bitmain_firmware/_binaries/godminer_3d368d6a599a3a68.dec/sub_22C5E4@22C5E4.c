int __fastcall sub_22C5E4(_DWORD *a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r8
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  unsigned __int64 v8; // kr20_8
  int result; // r0
  unsigned int v10; // r3
  unsigned int v11; // r5
  int v12; // r7
  unsigned __int8 v13; // r6
  __int64 v14; // kr08_8
  int v15; // r7
  unsigned __int64 v16; // kr18_8
  unsigned __int64 v17; // kr10_8
  unsigned int v18; // r0
  int v19; // r2
  int v20; // r1

  v3 = *a1;
  if ( !v3 )
    return sub_22C784(a1);
  v4 = a1[1];
  v5 = a1[2];
  if ( v5 >= v4 )
    return sub_22C784(a1);
  if ( *(_BYTE *)(v3 + v5) != 76 )
  {
    if ( *(_BYTE *)(v3 + v5) == 75 )
    {
      a1[2] = v5 + 1;
      return sub_22D8E4(a1, 0);
    }
    return sub_22C784(a1);
  }
  v6 = v5 + 1;
  a1[2] = v5 + 1;
  if ( v5 + 1 < v4 && *(_BYTE *)(v3 + v6) == 95 )
  {
    v7 = 0;
    a1[2] = v5 + 2;
    LODWORD(v8) = 0;
    return sub_22AF80((int)a1, a2, v7, v8);
  }
  else
  {
    if ( v6 > v4 )
      v4 = v5 + 1;
    v10 = 0;
    v11 = 0;
    while ( v4 != v6 )
    {
      v12 = *(unsigned __int8 *)(v3 + v6);
      if ( v12 == 95 )
      {
        v18 = v6 + 1;
        v7 = v10 + 1;
        a1[2] = v18;
        v8 = __CFADD__(v10, 1) + (unsigned __int64)v11;
        if ( !HIDWORD(v8) )
          return sub_22AF80((int)a1, a2, v7, v8);
        break;
      }
      v13 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) >= 0xAu )
      {
        if ( (unsigned __int8)(v12 - 97) >= 0x1Au )
        {
          if ( (unsigned __int8)(v12 - 65) >= 0x1Au )
            break;
          v13 = v12 - 29;
        }
        else
        {
          v13 = v12 - 87;
        }
      }
      v14 = 62LL * v10;
      a1[2] = ++v6;
      v15 = (62 * (unsigned __int64)v11) >> 32;
      v16 = HIDWORD(v14) + (unsigned __int64)(62 * v11);
      if ( !is_mul_ok(v11, 0x3Eu) )
        v15 = 1;
      if ( !(v15 | HIDWORD(v16)) )
      {
        v17 = v14 + __PAIR64__(62 * v11, v13);
        v11 = HIDWORD(v17);
        v10 = v17;
        a2 = __CFADD__(__CFADD__((_DWORD)v14, v13), (_DWORD)v16);
        if ( !__CFADD__(__CFADD__((_DWORD)v14, v13), (_DWORD)v16) )
          continue;
      }
      break;
    }
    v19 = a1[4];
    if ( !v19 || (v20 = <str as core::fmt::Display>::fmt(&unk_2B15A9, 16, v19), result = 1, !v20) )
    {
      result = 0;
      *((_BYTE *)a1 + 4) = 0;
      *a1 = 0;
    }
  }
  return result;
}
