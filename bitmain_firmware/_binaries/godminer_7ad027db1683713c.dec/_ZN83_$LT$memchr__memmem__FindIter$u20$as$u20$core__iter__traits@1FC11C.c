unsigned int __fastcall <memchr::memmem::FindIter as core::iter::traits::iterator::Iterator>::next(_DWORD *a1)
{
  unsigned int v1; // r2
  unsigned int v3; // r1
  unsigned int result; // r0
  unsigned int v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r2
  int v8; // r8
  int v9; // r5
  unsigned int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r1
  unsigned __int8 *v13; // r12
  int v14; // r11
  int v15; // r9
  int v16; // r10
  int v17; // r0
  unsigned __int8 *v18; // r1
  int v19; // t1
  unsigned int v20; // r8
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r1
  unsigned __int8 *v26; // [sp+Ch] [bp-8h]
  unsigned int v27; // [sp+10h] [bp-4h]

  v1 = a1[15];
  v3 = a1[16];
  result = 0;
  if ( v1 < v3 )
    return result;
  v5 = a1[1];
  v6 = v1 - v3;
  if ( v1 - v3 < v5 )
    return result;
  v7 = a1[4];
  v8 = 1;
  v9 = v7 - 2;
  if ( v7 < 2 )
    v9 = 2;
  if ( v9 )
  {
    v10 = a1[14] + v3;
    v11 = (unsigned __int8 *)(a1 + 2);
    if ( v9 == 1 )
    {
      if ( !v6 )
        return result;
      result = memchr::memchr::fallback::memchr(*v11, v10, v6);
      v9 = v12;
      if ( !result )
        return 0;
    }
    else
    {
      v13 = (unsigned __int8 *)*a1;
      if ( v6 < 0x10 )
      {
        v14 = a1[8];
        v9 = 0;
        v15 = a1[9];
        v16 = 0;
        if ( v5 )
        {
          v16 = 0;
          v17 = a1[1];
          v18 = (unsigned __int8 *)v10;
          do
          {
            v19 = *v18++;
            --v17;
            v16 = v19 + 2 * v16;
          }
          while ( v17 );
        }
        v20 = v10 + v5;
        v27 = v10;
        v26 = (unsigned __int8 *)*a1;
        if ( v16 == v14 )
          goto LABEL_19;
        while ( v6 > v5 )
        {
          v21 = *(unsigned __int8 *)(v10 + v9);
          --v6;
          v22 = *(unsigned __int8 *)(v20 + v9++);
          v16 = v22 + 2 * (v16 - v15 * v21);
          if ( v16 == v14 )
          {
LABEL_19:
            v23 = sub_7B89C((unsigned __int8 *)(v10 + v9), v6, v13, v5);
            v13 = v26;
            v10 = v27;
            if ( v23 )
            {
              result = 1;
              v8 = 1;
              goto LABEL_22;
            }
          }
        }
        return 0;
      }
      result = sub_1FD204((int)a1, (unsigned int *)v11, a1 + 12, v10, v6, (int)v13, v5);
      v9 = v24;
      if ( !result )
        return 0;
    }
LABEL_22:
    v5 = a1[1];
    v3 = a1[16];
  }
  else
  {
    result = 1;
  }
  v25 = v3 + v9;
  if ( v5 > 1 )
    v8 = v5;
  a1[16] = v8 + v25;
  return result;
}
