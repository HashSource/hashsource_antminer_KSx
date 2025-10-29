int __fastcall sub_271130(int a1)
{
  int v1; // r1
  double *v2; // r2
  double *v3; // r3
  int i; // r7
  unsigned __int16 *v5; // r6
  _BYTE *v6; // r5
  int v7; // r8
  double *v8; // r10
  int v9; // r12
  unsigned int v10; // r6
  unsigned int v11; // r3
  double *v12; // r0
  int v13; // r7
  double *v14; // r2
  int v15; // r1
  double *v16; // r4
  _BYTE *v17; // lr
  int v18; // r2
  double *v19; // r6
  double *v20; // r4
  int v21; // r1
  int v22; // r11
  double *v23; // r5
  double v24; // d2
  unsigned int v26; // [sp+8h] [bp-1000Ch]
  _BYTE dest[32768]; // [sp+10h] [bp-10004h] BYREF
  _BYTE v28[32772]; // [sp+8010h] [bp-8004h] BYREF

  v1 = 0;
  v2 = (double *)v28;
  do
  {
    v3 = v2;
    for ( i = 0; i != 128; i += 2 )
    {
      v5 = (unsigned __int16 *)(a1 + i);
      *v3++ = (double)*v5;
    }
    ++v1;
    v2 += 64;
    a1 += 128;
  }
  while ( v1 != 64 );
  v6 = dest;
  memcpy(dest, v28, sizeof(dest));
  v7 = 0;
  memset(v28, 0, 0x40u);
  v8 = (double *)&dest[8];
  v9 = 63;
  v10 = 0;
  do
  {
    v11 = v10++;
    v12 = v8;
    v13 = 0;
    while ( 1 )
    {
      if ( !v28[v13] )
      {
        v14 = (double *)&v6[512 * v13 + 8 * v11];
        if ( fabs(*v14) > 0.000000001 )
          break;
      }
      ++v13;
      v12 += 64;
      if ( v13 == 64 )
        goto LABEL_7;
    }
    ++v7;
    v15 = v9;
    v16 = v12;
    v28[v13] = 1;
    if ( v11 <= 0x3E )
    {
      do
      {
        --v15;
        *v16 = *v16 / *v14;
        ++v16;
      }
      while ( v15 );
      v26 = v10;
      v17 = v6;
      v18 = 0;
      v19 = v8;
      do
      {
        if ( v13 != v18 )
        {
          v20 = (double *)&v17[512 * v18 + 8 * v11];
          if ( fabs(*v20) > 0.000000001 )
          {
            v21 = 0;
            v22 = v9;
            do
            {
              v23 = &v19[v21];
              --v22;
              v24 = v12[v21++];
              *v23 = *v23 - v24 * *v20;
            }
            while ( v22 );
          }
        }
        ++v18;
        v19 += 64;
      }
      while ( v18 != 64 );
      v6 = v17;
      v10 = v26;
    }
LABEL_7:
    --v9;
    ++v8;
  }
  while ( v10 != 64 );
  return v7;
}
