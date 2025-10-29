unsigned int __fastcall sub_19E394(int a1, char a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v9; // r12
  unsigned __int8 *v11; // r0
  int v12; // r6
  _QWORD *v13; // r3
  unsigned int *v14; // r4
  unsigned int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r3
  unsigned int v19; // t1
  unsigned int result; // r0

  v6 = *(_DWORD *)(a1 + 64);
  v9 = v6 | a3;
  if ( v6 | a3 )
  {
    memset((void *)(a1 + v6), 0, 64 - v6);
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 64)) = a2 & (-1 << (8 - a3));
    sub_1996AC((unsigned __int8 *)a1, 0);
    v9 = *(_DWORD *)(a1 + 64);
  }
  v11 = (unsigned __int8 *)a1;
  v12 = a1 + 4 * a5 + 68;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v13 = (_QWORD *)(a1 + 32);
  v14 = (unsigned int *)(a1 + 68);
  *v13 = 0;
  v13[1] = 0;
  v13 += 2;
  *v13 = 0;
  v13[1] = 0;
  v15 = v14[16] << 9;
  v16 = a3 + v15 + 8 * v9;
  v17 = (v15 >> 23) + (v14[17] << 9);
  *((_BYTE *)v14 - 68) = v16;
  *((_BYTE *)v14 - 64) = v17;
  *((_BYTE *)v14 - 67) = BYTE1(v16);
  *((_BYTE *)v14 - 66) = BYTE2(v16);
  *((_BYTE *)v14 - 65) = HIBYTE(v16);
  *((_BYTE *)v14 - 63) = BYTE1(v17);
  *((_BYTE *)v14 - 62) = BYTE2(v17);
  *((_BYTE *)v14 - 61) = HIBYTE(v17);
  sub_1996AC(v11, 1);
  v18 = a4;
  do
  {
    v19 = *v14++;
    v18 += 4;
    *(_DWORD *)(v18 - 4) = v19;
    result = v19 >> 8;
  }
  while ( (unsigned int *)v12 != v14 );
  return result;
}
