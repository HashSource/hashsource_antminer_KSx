int __fastcall <memchr::memmem::FindIter as core::iter::traits::iterator::Iterator>::next(int a1)
{
  unsigned int v1; // r2
  __int64 v3; // r0
  unsigned int v4; // r6
  unsigned int v5; // r7
  unsigned int v6; // r2
  int v7; // r8
  int v8; // r5
  unsigned int v9; // r3
  unsigned __int8 *v10; // r1
  unsigned __int8 *v11; // r12
  int v12; // r11
  int v13; // r9
  int v14; // r10
  int v15; // r0
  unsigned __int8 *v16; // r1
  int v17; // t1
  unsigned int v18; // r8
  int v19; // r0
  int v20; // r1
  unsigned int v21; // r0
  int v22; // r1
  unsigned __int8 *v24; // [sp+Ch] [bp-8h]
  unsigned int v25; // [sp+10h] [bp-4h]

  v1 = *(_DWORD *)(a1 + 60);
  HIDWORD(v3) = *(_DWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  if ( v1 < HIDWORD(v3) )
    return v3;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = v1 - HIDWORD(v3);
  if ( v1 - HIDWORD(v3) < v4 )
    return v3;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = 1;
  v8 = v6 - 2;
  if ( v6 < 2 )
    v8 = 2;
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 56) + HIDWORD(v3);
    v10 = (unsigned __int8 *)(a1 + 8);
    if ( v8 == 1 )
    {
      if ( !v5 )
        return v3;
      LODWORD(v3) = memchr::memchr::fallback::memchr(*v10, v9, v5);
      v8 = HIDWORD(v3);
      if ( !(_DWORD)v3 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v11 = *(unsigned __int8 **)a1;
    if ( v5 >= 0x10 )
    {
      v3 = sub_20F5C8(a1, v10, a1 + 48, v9, v5, v11, v4);
      v8 = HIDWORD(v3);
      if ( (_DWORD)v3 )
      {
LABEL_22:
        v4 = *(_DWORD *)(a1 + 4);
        HIDWORD(v3) = *(_DWORD *)(a1 + 64);
        goto LABEL_23;
      }
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 32);
      v8 = 0;
      v13 = *(_DWORD *)(a1 + 36);
      v14 = 0;
      if ( v4 )
      {
        v14 = 0;
        v15 = *(_DWORD *)(a1 + 4);
        v16 = (unsigned __int8 *)v9;
        do
        {
          v17 = *v16++;
          --v15;
          v14 = v17 + 2 * v14;
        }
        while ( v15 );
      }
      v18 = v9 + v4;
      v25 = v9;
      v24 = *(unsigned __int8 **)a1;
      if ( v14 == v12 )
        goto LABEL_19;
      while ( v5 > v4 )
      {
        v19 = *(unsigned __int8 *)(v9 + v8);
        --v5;
        v20 = *(unsigned __int8 *)(v18 + v8++);
        v14 = v20 + 2 * (v14 - v13 * v19);
        if ( v14 == v12 )
        {
LABEL_19:
          v21 = sub_7D2BC((unsigned __int8 *)(v9 + v8), v5, v11, v4);
          v11 = v24;
          v9 = v25;
          if ( v21 )
          {
            LODWORD(v3) = 1;
            v7 = 1;
            goto LABEL_22;
          }
        }
      }
    }
LABEL_26:
    LODWORD(v3) = 0;
    return v3;
  }
  LODWORD(v3) = 1;
LABEL_23:
  v22 = HIDWORD(v3) + v8;
  if ( v4 > 1 )
    v7 = v4;
  *(_DWORD *)(a1 + 64) = v7 + v22;
  return v3;
}
