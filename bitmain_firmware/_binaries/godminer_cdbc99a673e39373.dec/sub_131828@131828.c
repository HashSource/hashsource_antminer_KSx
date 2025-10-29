int __fastcall sub_131828(int a1, int a2, _BYTE *a3)
{
  int v3; // r1
  int v4; // r4
  _BYTE *v5; // r6
  int v6; // r12
  char v7; // lr
  unsigned int v8; // r3
  unsigned int v9; // r5
  unsigned int v10; // r3
  char v11; // lr

  v3 = 2 * a2;
  if ( v3 <= 0 )
  {
    *a3 = 0;
    return 1;
  }
  else
  {
    v4 = 0;
    v5 = a3 - 1;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(a1 + v4);
        v9 = v8 & 0xF;
        if ( (v6 & 1) != 0 )
          break;
        v10 = v8 >> 4;
        ++v6;
        v11 = v10 + 87;
        if ( v10 <= 9 )
          v11 = v10 + 48;
        *++v5 = v11;
        if ( v3 == v6 )
          goto LABEL_10;
      }
      ++v6;
      v7 = v9 + 87;
      if ( v9 <= 9 )
        v7 = v9 + 48;
      ++v4;
      *++v5 = v7;
    }
    while ( v3 != v6 );
LABEL_10:
    a3[v3] = 0;
    return 1;
  }
}
