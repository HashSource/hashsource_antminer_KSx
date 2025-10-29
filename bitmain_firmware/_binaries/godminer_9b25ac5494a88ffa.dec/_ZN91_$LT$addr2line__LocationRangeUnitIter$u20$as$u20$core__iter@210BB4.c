int __fastcall <addr2line::LocationRangeUnitIter as core::iter::traits::iterator::Iterator>::next(
        int result,
        unsigned int *a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r6
  unsigned int v4; // r3
  int v5; // r2
  unsigned int v6; // r12
  unsigned int v7; // lr
  int v8; // r5
  unsigned int v9; // r7
  unsigned __int64 v10; // r8
  _DWORD *v11; // r12
  int v12; // r6
  unsigned int v13; // r4
  int v14; // r5
  int v15; // lr
  unsigned int v16; // r3
  __int64 v17; // r4
  __int64 *v18; // r1
  __int64 v19; // r2
  int v20; // r1

  v2 = a2[3];
  v3 = a2[4];
  if ( v3 < v2 )
  {
    v4 = a2[5];
    v5 = a2[2] + 24 * v3;
    v6 = *a2;
    v7 = a2[1];
    v8 = v5 + 24;
    while ( *(_QWORD *)v5 < __PAIR64__(v7, v6) )
    {
      v9 = *(_DWORD *)(v5 + 20);
      if ( v4 < v9 )
      {
        v10 = *(_QWORD *)(*(_DWORD *)(v5 + 16) + 24 * v4);
        if ( v10 >= __PAIR64__(v7, v6) )
          break;
        v11 = (_DWORD *)a2[6];
        v12 = *(_DWORD *)(v5 + 16) + 24 * v4;
        v13 = *(_DWORD *)(v12 + 8);
        if ( v11[1] <= v13 )
        {
          v15 = 0;
        }
        else
        {
          v14 = *v11 + 12 * v13;
          v15 = *(_DWORD *)(v14 + 4);
          v11 = *(_DWORD **)(v14 + 8);
        }
        v16 = v4 + 1;
        v17 = *(_QWORD *)(v12 + 16);
        a2[5] = v16;
        v18 = (__int64 *)(v5 + 8);
        *(_DWORD *)(result + 36) = HIDWORD(v17);
        if ( v16 < v9 )
          v18 = (__int64 *)(v12 + 24);
        *(_QWORD *)result = v10;
        v19 = *v18;
        v20 = v17;
        if ( (_DWORD)v17 )
          v20 = 1;
        *(_DWORD *)(result + 32) = HIDWORD(v17) != 0;
        *(_QWORD *)(result + 8) = v19 - v10;
        *(_DWORD *)(result + 16) = v15;
        *(_DWORD *)(result + 20) = v11;
        *(_DWORD *)(result + 24) = v20;
        *(_DWORD *)(result + 28) = v17;
        return result;
      }
      ++v3;
      v5 = 0;
      v4 = 0;
      if ( v3 < v2 )
        v5 = v8;
      v8 += 24;
      a2[4] = v3;
      a2[5] = 0;
      if ( v2 == v3 )
        break;
    }
  }
  *(_DWORD *)(result + 24) = 2;
  return result;
}
