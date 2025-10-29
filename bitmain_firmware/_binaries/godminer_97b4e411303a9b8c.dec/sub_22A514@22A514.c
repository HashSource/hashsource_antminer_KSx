int __fastcall sub_22A514(int result, int *a2)
{
  unsigned int v2; // r9
  unsigned int v3; // r7
  int v4; // r12
  unsigned int v5; // r3
  __int64 v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r6
  int v9; // r4
  unsigned __int8 v10; // r10
  __int64 v11; // kr08_8
  int v12; // r7
  unsigned __int64 v13; // kr18_8
  unsigned __int64 v14; // kr10_8
  __int64 v15; // r2
  bool v16; // cf

  v2 = a2[1];
  v3 = a2[2];
  if ( v3 >= v2 || (v4 = *a2, *(_BYTE *)(*a2 + v3) != 115) )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_BYTE *)result = 0;
    return result;
  }
  v5 = v3 + 1;
  a2[2] = v3 + 1;
  if ( v3 + 1 >= v2 || *(_BYTE *)(v4 + v5) != 95 )
  {
    v7 = 0;
    v8 = 0;
    while ( v5 < v2 )
    {
      v9 = *(unsigned __int8 *)(v4 + v5);
      if ( v9 == 95 )
      {
        a2[2] = v5 + 1;
        LODWORD(v6) = v7 + 1;
        HIDWORD(v6) = __CFADD__(v7, 1) + v8;
        if ( (__CFADD__(v7, 1) + (unsigned __int64)v8) >> 32 )
          goto LABEL_22;
        goto LABEL_21;
      }
      v10 = v9 - 48;
      if ( (unsigned __int8)(v9 - 48) >= 0xAu )
      {
        if ( (unsigned __int8)(v9 - 97) >= 0x1Au )
        {
          if ( (unsigned __int8)(v9 - 65) >= 0x1Au )
            goto LABEL_22;
          v10 = v9 - 29;
        }
        else
        {
          v10 = v9 - 87;
        }
      }
      v11 = 62LL * v7;
      a2[2] = ++v5;
      v12 = (62 * (unsigned __int64)v8) >> 32;
      v13 = HIDWORD(v11) + (unsigned __int64)(62 * v8);
      if ( !is_mul_ok(v8, 0x3Eu) )
        v12 = 1;
      if ( !(v12 | HIDWORD(v13)) )
      {
        v14 = v11 + __PAIR64__(62 * v8, v10);
        v8 = HIDWORD(v14);
        v7 = v14;
        if ( !__CFADD__(__CFADD__((_DWORD)v11, v10), (_DWORD)v13) )
          continue;
      }
      goto LABEL_22;
    }
    goto LABEL_22;
  }
  a2[2] = v3 + 2;
  v6 = 0;
LABEL_21:
  v16 = __CFADD__(__CFADD__((_DWORD)v6, 1), HIDWORD(v6));
  v15 = v6 + 1;
  if ( v16 )
  {
LABEL_22:
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  *(_QWORD *)(result + 8) = v15;
  *(_BYTE *)result = 0;
  return result;
}
