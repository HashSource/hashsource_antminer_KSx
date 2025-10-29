int __fastcall equihash_blake2b_update(int a1, char *src, unsigned __int64 a3)
{
  int v4; // r0
  bool v5; // cc
  size_t v7; // r5
  int v8; // r10
  int v9; // r8
  char *v10; // r1
  unsigned __int64 v11; // r6
  size_t v12; // r5
  __int64 v13; // r2
  unsigned __int64 n; // [sp+0h] [bp-14h]

  n = a3;
  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 352);
    v5 = HIDWORD(a3) != 0;
    v7 = 256 - v4;
    v8 = a1 + 96;
    if ( !HIDWORD(a3) )
      v5 = (unsigned int)a3 > v7;
    v9 = 256 - v4;
    if ( v5 )
    {
      do
      {
        v10 = src;
        src += v7;
        memcpy((void *)(v8 + v4), v10, v7);
        v11 = *(_QWORD *)(a1 + 64) + 128LL;
        v12 = *(_DWORD *)(a1 + 352) + v7;
        *(_QWORD *)(a1 + 64) = v11;
        v13 = *(_QWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 352) = v12;
        *(_QWORD *)(a1 + 72) = v13 + (v11 <= 0x7F);
        sub_11FDE8(a1, (__int64 *)(a1 + 96));
        memcpy((void *)(a1 + 96), (const void *)(a1 + 224), 0x80u);
        v4 = *(_DWORD *)(a1 + 352) - 128;
        *(_DWORD *)(a1 + 352) = v4;
        v7 = 256 - v4;
        n -= (unsigned int)v9;
        v9 = 256 - v4;
      }
      while ( (unsigned int)(256 - v4) < n );
    }
    memcpy((void *)(v8 + v4), src, n);
    *(_DWORD *)(a1 + 352) += n;
  }
  return 0;
}
