int __fastcall hs_blake2b_final(int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r4
  unsigned int v4; // r2
  int v5; // r12
  __int64 v6; // r6
  bool v7; // cf
  __int64 v8; // r4
  __int64 *v10; // r4
  int v12; // r2
  double *v13; // r3
  __int64 v14; // t1
  double src[8]; // [sp+8h] [bp-44h] BYREF

  memset(src, 0, sizeof(src));
  if ( !a2 || *(_DWORD *)(a1 + 228) > a3 || *(_QWORD *)(a1 + 80) )
    return -1;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 224);
  v5 = *(unsigned __int8 *)(a1 + 232);
  v6 = v3 + v4;
  v7 = __CFADD__(HIDWORD(v3), HIDWORD(v6));
  v8 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 72) = v8 + v7;
  if ( v5 )
    *(_QWORD *)(a1 + 88) = -1;
  v10 = (__int64 *)(a1 + 96);
  *(_QWORD *)(a1 + 80) = -1;
  memset((void *)(a1 + 96 + v4), 0, 128 - v4);
  sub_127B20(a1, v10);
  v12 = a1 - 8;
  v13 = src;
  do
  {
    v14 = *(_QWORD *)(v12 + 8);
    v12 += 8;
    *(_QWORD *)v13++ = v14;
  }
  while ( v12 != a1 + 56 );
  memcpy(a2, src, *(_DWORD *)(a1 + 228));
  off_2D2044(src, 0, 0x40u);
  return 0;
}
