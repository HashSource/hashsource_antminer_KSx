int __fastcall expandArray(int result, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r11
  int v7; // r6
  int v8; // r1
  unsigned int v9; // r4
  unsigned int v10; // lr
  int v11; // t1
  _BYTE *v12; // r3
  unsigned int v13; // r1
  _BYTE *v14; // r12
  int v15; // [sp+4h] [bp-18h]

  v6 = a6 + ((a5 + 7) >> 3);
  if ( a2 )
  {
    v7 = 0;
    v8 = result + a2 - 1;
    --result;
    v15 = v8;
    v9 = 0;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v10 += 8;
        v11 = *(unsigned __int8 *)++result;
        v9 = v11 | (v9 << 8);
        if ( a5 <= v10 )
          break;
        if ( result == v15 )
          return result;
      }
      v10 -= a5;
      if ( a6 )
      {
        v12 = (_BYTE *)(a3 + v7);
        do
          *v12++ = 0;
        while ( (_BYTE *)(a3 + a6 + v7) != v12 );
      }
      if ( a6 < v6 )
      {
        v13 = v10 + 8 * (((a5 + 7) >> 3) + 0x1FFFFFFF);
        v14 = (_BYTE *)(a3 + a6 + v7);
        do
        {
          *v14++ = (v9 >> v13) & ((unsigned int)~(-1 << a5) >> (v13 - v10));
          v13 -= 8;
        }
        while ( (_BYTE *)(a3 + v6 + v7) != v14 );
      }
      v7 += v6;
    }
    while ( result != v15 );
  }
  return result;
}
