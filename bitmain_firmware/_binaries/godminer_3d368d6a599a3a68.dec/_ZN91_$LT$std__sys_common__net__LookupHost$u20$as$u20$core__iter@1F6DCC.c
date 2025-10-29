int __fastcall <std::sys_common::net::LookupHost as core::iter::traits::iterator::Iterator>::next(int result, int a2)
{
  int v2; // r12
  int v3; // lr
  _DWORD *v4; // r2
  unsigned __int16 *v5; // r4
  _DWORD *v6; // r5
  unsigned int v7; // r3
  int v8; // r2
  int v9; // r3
  unsigned int v10; // r2
  char **v11; // r1
  __int16 v12; // r4
  _BYTE v13[6]; // [sp+0h] [bp-8h]

  v4 = *(_DWORD **)(a2 + 4);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int16 *)v4[5];
      v6 = (_DWORD *)v4[7];
      v7 = v4[4];
      v8 = *v5;
      if ( v8 == 10 )
        break;
      if ( v8 == 2 )
      {
        *(_DWORD *)(a2 + 4) = v6;
        if ( v7 < 0x10 )
          core::panicking::panic((int)aAssertionFaile_20, 66, (int)&off_2DFE1C);
        v9 = *((_DWORD *)v5 + 1);
        v10 = __rev16(v5[1]);
        *(_DWORD *)v13 = v9;
        v11 = &off_2DFE00;
        *(_WORD *)&v13[4] = v10;
        v12 = 0;
        goto LABEL_11;
      }
      v4 = v6;
      if ( !v6 )
      {
        *(_DWORD *)(a2 + 4) = 0;
        goto LABEL_6;
      }
    }
    *(_DWORD *)(a2 + 4) = v6;
    if ( v7 < 0x1C )
      core::panicking::panic((int)aAssertionFaile_19, 67, (int)&off_2DFE0C);
    v2 = *((_DWORD *)v5 + 1);
    v11 = (char **)*((_DWORD *)v5 + 3);
    v3 = *((_DWORD *)v5 + 4);
    v10 = *((_DWORD *)v5 + 5);
    v9 = *((_DWORD *)v5 + 6);
    *(_DWORD *)&v13[2] = *((_DWORD *)v5 + 2);
    LOWORD(v6) = __rev16(v5[1]);
    v12 = 1;
LABEL_11:
    *(_WORD *)(result + 6) = *(_WORD *)&v13[4];
    *(_DWORD *)(result + 2) = *(_DWORD *)v13;
    *(_WORD *)(result + 28) = (_WORD)v6;
    *(_WORD *)result = v12;
    *(_DWORD *)(result + 8) = v11;
    *(_DWORD *)(result + 12) = v3;
    *(_DWORD *)(result + 16) = v10;
    *(_DWORD *)(result + 20) = v2;
    *(_DWORD *)(result + 24) = v9;
  }
  else
  {
LABEL_6:
    *(_WORD *)result = 2;
  }
  return result;
}
