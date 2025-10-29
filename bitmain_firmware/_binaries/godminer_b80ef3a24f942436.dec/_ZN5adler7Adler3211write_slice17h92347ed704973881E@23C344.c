unsigned int __fastcall adler::Adler32::write_slice(unsigned __int16 *a1, int a2, int a3)
{
  unsigned int v3; // lr
  unsigned int v4; // r6
  unsigned int v5; // r7
  unsigned int v6; // r9
  unsigned int v7; // r1
  unsigned int v8; // r11
  unsigned int v9; // r12
  unsigned int v10; // r4
  unsigned int v11; // r3
  int v12; // r10
  int v13; // r8
  unsigned __int8 *v14; // r0
  int v15; // r2
  unsigned __int8 *v16; // r2
  int v17; // r0
  unsigned int v18; // r4
  unsigned int v19; // r0
  unsigned int v20; // r1
  int v21; // r3
  int v22; // r7
  unsigned int result; // r0
  unsigned int v24; // [sp+0h] [bp-28h]
  unsigned int v25; // [sp+4h] [bp-24h]
  char v26; // [sp+8h] [bp-20h]
  unsigned int v29; // [sp+14h] [bp-14h]
  int v30; // [sp+18h] [bp-10h]
  int v31; // [sp+1Ch] [bp-Ch]
  unsigned int v32; // [sp+20h] [bp-8h]
  int v33; // [sp+20h] [bp-8h]
  unsigned int v34; // [sp+24h] [bp-4h]

  v3 = 0;
  v34 = a1[1];
  v4 = 22208 * ((a3 & 0xFFFFFFFC) / 0x56C0);
  v29 = (a3 & 0xFFFFFFFC) % 0x56C0;
  v30 = *a1;
  v24 = (a3 & 0xFFFFFFFC) / 0x56C0;
  v25 = a3 & 0xFFFFFFFC;
  v26 = a3;
  if ( v4 >= 0x56C0 )
  {
    v12 = a2;
    v6 = 0;
    v5 = 0;
    v3 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v7 = 0;
    v31 = 22208 * *a1;
    do
    {
      v13 = 0;
      v32 = v4;
      do
      {
        v14 = (unsigned __int8 *)(v12 + v13);
        v15 = *(unsigned __int8 *)(v12 + v13);
        v13 += 4;
        v11 += v15;
        v3 += v11;
        v10 += v14[1];
        v9 += v14[2];
        v5 += v10;
        v8 += v14[3];
        v6 += v9;
        v7 += v8;
      }
      while ( v13 != 22208 );
      v7 %= 0xFFF1u;
      v6 %= 0xFFF1u;
      v5 %= 0xFFF1u;
      v3 %= 0xFFF1u;
      v34 = (v34 + v31) % 0xFFF1;
      v8 %= 0xFFF1u;
      v9 %= 0xFFF1u;
      v10 %= 0xFFF1u;
      v11 %= 0xFFF1u;
      v4 -= 22208;
      v12 += 22208;
    }
    while ( v32 - 22208 >= 0x56C0 );
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
  v33 = v26 & 3;
  if ( (v29 & 0x7FFC) != 0 )
  {
    v16 = (unsigned __int8 *)(a2 + 22208 * v24);
    v17 = -(v29 & 0x7FFC);
    do
    {
      v17 += 4;
      v11 += *v16;
      v10 += v16[1];
      v9 += v16[2];
      v5 += v10;
      v8 += v16[3];
      v6 += v9;
      v7 += v8;
      v3 += v11;
      v16 += 4;
    }
    while ( v17 );
  }
  v18 = v10 % 0xFFF1;
  v19 = (v34 + v29 * v30) % 0xFFF1
      + 3 * (65521 - v8 % 0xFFF1)
      - 2 * (v9 % 0xFFF1)
      - v18
      + 4 * (v5 % 0xFFF1 + v3 % 0xFFF1 + v6 % 0xFFF1 + v7 % 0xFFF1)
      + 196563;
  v20 = v8 % 0xFFF1 + v30 + v9 % 0xFFF1 + v18 + v11 % 0xFFF1;
  if ( (v26 & 3) != 0 )
  {
    v21 = a2 + v25;
    v20 += *(unsigned __int8 *)(a2 + v25);
    v19 += v20;
    if ( v33 != 1 )
    {
      v22 = *(unsigned __int8 *)(v21 + 1);
      if ( v33 != 2 )
        v21 = *(unsigned __int8 *)(v21 + 2);
      v20 += v22;
      v19 += v20;
      if ( v33 != 2 )
      {
        v20 += v21;
        v19 += v20;
      }
    }
  }
  result = v19 % 0xFFF1;
  a1[1] = result;
  *a1 = v20 % 0xFFF1;
  return result;
}
