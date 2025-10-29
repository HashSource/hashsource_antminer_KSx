unsigned int __fastcall EaglesongSponge(int a1, int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  int *v6; // r3
  int v9; // r4
  int v10; // r10
  unsigned int v11; // r6
  int *v12; // r12
  unsigned int v13; // r1
  unsigned int v14; // r0
  int v15; // r3
  int v16; // t1
  unsigned int result; // r0
  unsigned int v18; // r8
  unsigned int *v19; // r10
  int v20; // r9
  unsigned int v21; // lr
  unsigned int v22; // t1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  char v26; // r0
  int v27; // r1
  unsigned int v28; // r0
  int v29; // r4
  int v30; // r3
  int v31; // [sp+4h] [bp-48h] BYREF
  _BYTE v32[60]; // [sp+8h] [bp-44h] BYREF
  char v33; // [sp+44h] [bp-8h] BYREF

  v6 = &v31;
  v31 = a2;
  do
  {
    v6[1] = 0;
    ++v6;
  }
  while ( &v33 != (char *)v6 );
  v9 = rate;
  v10 = 8 * (a4 + 1);
  if ( sub_26CE70(rate - 1 + v10, rate) )
  {
    v11 = 0;
    do
    {
      if ( v9 / 32 > 0 )
      {
        v12 = &v31;
        v13 = (int)(v11 * v9) / 8;
        do
        {
          v14 = v13 + 4;
          v15 = 0;
          do
          {
            if ( a4 <= v13 )
            {
              if ( a4 == v13 )
                v15 = a5 | (v15 << 8);
            }
            else
            {
              v15 = *(unsigned __int8 *)(a3 + v13) | (v15 << 8);
            }
            ++v13;
          }
          while ( v14 != v13 );
          v16 = v12[1];
          *++v12 = v15 ^ v16;
        }
        while ( (int)(v11 * v9) / 8 + 4 * (v9 / 32) != v13 );
      }
      ++v11;
      EaglesongPermutation((int)v32);
      v9 = rate;
    }
    while ( sub_26CE70(rate - 1 + v10, rate) > v11 );
  }
  result = sub_26CE70(v31, v9 / 8);
  if ( result )
  {
    v18 = 0;
    do
    {
      if ( v9 > 31 )
      {
        v19 = (unsigned int *)v32;
        v20 = 0;
        do
        {
          v22 = *v19++;
          v21 = v22;
          v23 = 0;
          do
          {
            v24 = v9 * v18;
            v25 = a1 + v23;
            v26 = 8 * v23++;
            v27 = v25 + 4 * v20;
            v28 = v21 >> v26;
            v29 = v9 * v18 + 7;
            if ( v24 < 0 )
              v24 = v29;
            *(_BYTE *)(v27 + (v24 >> 3)) = v28;
            v9 = rate;
          }
          while ( v23 != 4 );
          v30 = rate + 31;
          ++v20;
          if ( rate >= 0 )
            v30 = rate;
        }
        while ( v20 < v30 >> 5 );
      }
      ++v18;
      EaglesongPermutation((int)v32);
      v9 = rate;
      result = sub_26CE70(v31, rate / 8);
    }
    while ( result > v18 );
  }
  return result;
}
