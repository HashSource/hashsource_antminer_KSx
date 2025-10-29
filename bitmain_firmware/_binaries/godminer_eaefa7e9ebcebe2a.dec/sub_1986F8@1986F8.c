unsigned int __fastcall sub_1986F8(int a1, char a2, int a3, int a4, int a5)
{
  unsigned int v5; // r12
  int v8; // r8
  int v9; // r7
  void *v10; // r0
  int v11; // r1
  unsigned int *v12; // r4
  int v13; // r3
  unsigned int v14; // t1
  unsigned int result; // r0

  v5 = *(_DWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a1 + 104);
  v9 = a3 + *(_DWORD *)(a1 + 100) + 8 * v5;
  *(_DWORD *)(a1 + 100) = v9;
  if ( v5 | a3 )
  {
    v10 = (void *)(a1 + v5 + 1);
    *(_BYTE *)(a1 + v5) = -(128 >> a3) & a2 | (128 >> a3);
    if ( v5 <= 0x35 )
    {
      memset(v10, 0, 53 - v5);
    }
    else
    {
      memset(v10, 0, 63 - v5);
      sub_18BC08((_DWORD *)a1, (unsigned int *)a1);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 100) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    *(_QWORD *)(a1 + 1) = 0;
    *(_QWORD *)(a1 + 9) = 0;
    *(_QWORD *)(a1 + 17) = 0;
    *(_QWORD *)(a1 + 25) = 0;
    *(_QWORD *)(a1 + 33) = 0;
    *(_QWORD *)(a1 + 41) = 0;
    *(_QWORD *)(a1 + 46) = 0;
    *(_DWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 100) = 0;
  }
  *(_BYTE *)(a1 + 54) = v9;
  *(_BYTE *)(a1 + 58) = v8;
  *(_BYTE *)(a1 + 55) = BYTE1(v9);
  *(_BYTE *)(a1 + 56) = BYTE2(v9);
  *(_BYTE *)(a1 + 59) = BYTE1(v8);
  *(_BYTE *)(a1 + 60) = BYTE2(v8);
  *(_WORD *)(a1 + 62) = __PAIR16__((unsigned int)(32 * a5) >> 24, 32 * a5);
  *(_BYTE *)(a1 + 57) = HIBYTE(v9);
  *(_BYTE *)(a1 + 61) = HIBYTE(v8);
  sub_18BC08((_DWORD *)a1, (unsigned int *)a1);
  v11 = a1 + 4 * a5 + 68;
  v12 = (unsigned int *)(a1 + 68);
  v13 = a4;
  do
  {
    v14 = *v12++;
    v13 += 4;
    *(_DWORD *)(v13 - 4) = v14;
    result = HIWORD(v14);
  }
  while ( (unsigned int *)v11 != v12 );
  return result;
}
