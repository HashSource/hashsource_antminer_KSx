void *__fastcall sub_13F65C(int a1, __int64 *src, size_t n)
{
  int v4; // r0
  int v5; // r8
  size_t v6; // r6
  __int64 *v7; // r5
  size_t v8; // r7
  void *v9; // r0
  void *result; // r0
  __int64 v11; // r10
  __int64 v12; // r2
  bool v13; // cc
  int v14; // r0
  unsigned int v15; // r9
  __int64 *v16; // r7
  __int64 *v17; // r1
  __int64 v18; // r10
  __int64 v19; // r2
  bool v20; // cc
  int v21; // r0

  v4 = *(_DWORD *)(a1 + 224);
  v5 = a1 + 96;
  v6 = n;
  v7 = src;
  v8 = 128 - v4;
  v9 = (void *)(a1 + 96 + v4);
  if ( v8 < n )
  {
    *(_DWORD *)(a1 + 224) = 0;
    v6 = n - v8;
    memcpy(v9, src, v8);
    v7 = (__int64 *)((char *)v7 + v8);
    v11 = *(_QWORD *)(a1 + 64) + 128LL;
    v12 = *(_QWORD *)(a1 + 72);
    v13 = HIDWORD(v11) != 0;
    *(_QWORD *)(a1 + 64) = v11;
    if ( !HIDWORD(v11) )
      v13 = (unsigned int)v11 > 0x7F;
    v14 = !v13;
    *(_QWORD *)(a1 + 72) = v12 + (unsigned int)v14;
    sub_138F20(a1, (__int64 *)(a1 + 96));
    if ( v6 > 0x80 )
    {
      v15 = (v6 - 129) >> 7;
      v16 = &v7[16 * v15 + 16];
      do
      {
        v17 = v7;
        v7 += 16;
        v18 = *(_QWORD *)(a1 + 64) + 128LL;
        v19 = *(_QWORD *)(a1 + 72);
        v20 = HIDWORD(v18) != 0;
        *(_QWORD *)(a1 + 64) = v18;
        if ( !HIDWORD(v18) )
          v20 = (unsigned int)v18 > 0x7F;
        v21 = !v20;
        *(_QWORD *)(a1 + 72) = v19 + (unsigned int)v21;
        sub_138F20(a1, v17);
      }
      while ( v16 != v7 );
      v6 = v6 - 128 - (v15 << 7);
      v9 = (void *)(v5 + *(_DWORD *)(a1 + 224));
    }
    else
    {
      v9 = (void *)(v5 + *(_DWORD *)(a1 + 224));
    }
  }
  result = memcpy(v9, v7, v6);
  *(_DWORD *)(a1 + 224) += v6;
  return result;
}
