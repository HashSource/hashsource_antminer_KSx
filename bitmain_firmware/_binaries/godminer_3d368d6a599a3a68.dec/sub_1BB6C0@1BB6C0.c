int __fastcall sub_1BB6C0(int result, unsigned int *a2, char a3)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  _DWORD *v5; // r2
  unsigned int v6; // r3
  int v7; // lr
  int v8; // r12
  char v9; // r1
  int v10; // [sp+8h] [bp-10h]
  _BYTE v11[7]; // [sp+Ch] [bp-Ch]

  if ( a3 == 8 )
  {
    v3 = a2[1];
    v4 = *a2;
    if ( v3 >= 8 )
    {
      v7 = *(_DWORD *)(v4 + 4);
      v8 = *(_DWORD *)v4;
      *a2 = v4 + 8;
      a2[1] = v3 - 8;
      v9 = 53;
      if ( !v7 )
      {
        *(_DWORD *)(result + 4) = v8;
        v9 = 75;
      }
      *(_BYTE *)result = v9;
    }
    else
    {
      *(_DWORD *)&v11[3] = *a2;
      *(_DWORD *)(result + 5) = *(_DWORD *)v11;
      *(_WORD *)(result + 9) = v4 >> 8;
      *(_DWORD *)(result + 1) = v10;
      *(_BYTE *)result = 19;
      *(_BYTE *)(result + 11) = HIBYTE(v4);
      *(_DWORD *)(result + 12) = 0;
    }
  }
  else
  {
    v5 = (_DWORD *)*a2;
    v6 = a2[1];
    if ( v6 >= 4 )
    {
      *(_DWORD *)(result + 4) = *v5;
      *a2 = (unsigned int)(v5 + 1);
      a2[1] = v6 - 4;
      *(_BYTE *)result = 75;
    }
    else
    {
      *(_QWORD *)(result + 8) = (unsigned int)v5;
      *(_BYTE *)result = 19;
    }
  }
  return result;
}
