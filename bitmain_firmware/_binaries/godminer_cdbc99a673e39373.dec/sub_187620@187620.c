unsigned int __fastcall sub_187620(int a1, char a2, int a3, int a4, int a5)
{
  unsigned int v5; // r12
  int v8; // r10
  int v9; // r9
  int v10; // r6
  int v11; // r8
  void *v12; // r0
  unsigned int *v13; // r1
  _DWORD *v14; // r0
  int v15; // r4
  int v16; // r3
  unsigned int v17; // t1
  unsigned int result; // r0

  v5 = *(_DWORD *)(a1 + 128);
  v8 = *(_DWORD *)(a1 + 200);
  v9 = *(_DWORD *)(a1 + 204);
  v10 = a3 + *(_DWORD *)(a1 + 196) + 8 * v5;
  v11 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 196) = v10;
  if ( v5 | a3 )
  {
    v12 = (void *)(a1 + v5 + 1);
    *(_BYTE *)(a1 + v5) = -(128 >> a3) & a2 | (128 >> a3);
    if ( v5 <= 0x6D )
    {
      memset(v12, 0, 109 - v5);
    }
    else
    {
      memset(v12, 0, 127 - v5);
      sub_180154((_DWORD *)a1, (unsigned int *)a1);
      memset((void *)a1, 0, 0x6Eu);
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 204) = 0;
      *(_DWORD *)(a1 + 200) = 0;
      *(_DWORD *)(a1 + 196) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x6Du);
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 204) = 0;
    *(_DWORD *)(a1 + 200) = 0;
    *(_DWORD *)(a1 + 196) = 0;
  }
  *(_BYTE *)(a1 + 110) = v10;
  *(_BYTE *)(a1 + 114) = v8;
  *(_BYTE *)(a1 + 118) = v9;
  v13 = (unsigned int *)a1;
  *(_BYTE *)(a1 + 122) = v11;
  v14 = (_DWORD *)a1;
  *(_BYTE *)(a1 + 111) = BYTE1(v10);
  *(_BYTE *)(a1 + 112) = BYTE2(v10);
  *(_BYTE *)(a1 + 115) = BYTE1(v8);
  *(_BYTE *)(a1 + 116) = BYTE2(v8);
  *(_BYTE *)(a1 + 119) = BYTE1(v9);
  *(_BYTE *)(a1 + 120) = BYTE2(v9);
  *(_BYTE *)(a1 + 123) = BYTE1(v11);
  *(_BYTE *)(a1 + 113) = HIBYTE(v10);
  *(_BYTE *)(a1 + 124) = BYTE2(v11);
  *(_BYTE *)(a1 + 117) = HIBYTE(v8);
  *(_WORD *)(a1 + 126) = __PAIR16__((unsigned int)(32 * a5) >> 24, 32 * a5);
  *(_BYTE *)(a1 + 121) = HIBYTE(v9);
  v15 = a1 + 128;
  *(_BYTE *)(v15 - 3) = HIBYTE(v11);
  sub_180154(v14, v13);
  v16 = a4;
  do
  {
    v17 = *(_DWORD *)(v15 + 4);
    v15 += 4;
    v16 += 4;
    *(_DWORD *)(v16 - 4) = v17;
    result = v17 >> 8;
  }
  while ( a4 + 4 * a5 != v16 );
  return result;
}
