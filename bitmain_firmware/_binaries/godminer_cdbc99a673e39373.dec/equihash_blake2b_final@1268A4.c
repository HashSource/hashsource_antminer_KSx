int __fastcall equihash_blake2b_final(int a1, void *a2, size_t a3)
{
  _BOOL4 v3; // r3
  unsigned int v5; // r12
  char *v8; // r5
  __int64 v9; // r8
  __int64 v10; // r0
  int v11; // lr
  _BOOL4 v12; // r3
  int v13; // lr
  double *v14; // r12
  int v15; // r4
  __int64 v16; // t1
  bool v18; // cc
  int v19; // r3
  size_t v20; // r2
  __int64 v21; // [sp+0h] [bp-4Ch]
  double src[8]; // [sp+8h] [bp-44h] BYREF

  v3 = a2 == 0;
  if ( a3 - 1 > 0x3F )
    v3 = 1;
  memset(src, 0, sizeof(src));
  if ( v3 || *(_QWORD *)(a1 + 80) )
    return -1;
  v5 = *(_DWORD *)(a1 + 352);
  v8 = (char *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 64);
  v21 = *(_QWORD *)(a1 + 72);
  if ( v5 > 0x80 )
  {
    v18 = (unsigned __int64)(v9 + 128) >> 32 != 0;
    *(_QWORD *)(a1 + 64) = v9 + 128;
    if ( !((unsigned __int64)(v9 + 128) >> 32) )
      v18 = (unsigned int)(v9 + 128) > 0x7F;
    v19 = !v18;
    *(_QWORD *)(a1 + 72) = v21 + (unsigned int)v19;
    sub_11FDE8(a1, (__int64 *)(a1 + 96));
    v20 = *(_DWORD *)(a1 + 352) - 128;
    *(_DWORD *)(a1 + 352) = v20;
    memcpy(v8, (const void *)(a1 + 224), v20);
    v5 = *(_DWORD *)(a1 + 352);
    v9 = *(_QWORD *)(a1 + 64);
    v21 = *(_QWORD *)(a1 + 72);
  }
  v10 = v9 + v5;
  v11 = *(unsigned __int8 *)(a1 + 356);
  v12 = __CFADD__(HIDWORD(v9), HIDWORD(v10));
  *(_QWORD *)(a1 + 64) = v10;
  *(_QWORD *)(a1 + 72) = v21 + v12;
  if ( v11 )
    *(_QWORD *)(a1 + 88) = -1;
  *(_QWORD *)(a1 + 80) = -1;
  memset(&v8[v5], 0, 256 - v5);
  sub_11FDE8(a1, (__int64 *)v8);
  v13 = a1 - 8;
  v14 = src;
  v15 = a1 + 56;
  do
  {
    v16 = *(_QWORD *)(v13 + 8);
    v13 += 8;
    *((_QWORD *)++v14 - 1) = v16;
  }
  while ( v15 != v13 );
  memcpy(a2, src, a3);
  return 0;
}
