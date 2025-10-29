int __fastcall core::unicode::unicode_data::lowercase::lookup(unsigned int a1)
{
  int v1; // r1
  unsigned int v2; // r1
  unsigned int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r1
  unsigned int v6; // r1
  unsigned int v7; // r1
  unsigned __int8 *v8; // r2
  int v9; // r2
  int v10; // lr
  int v11; // r12
  int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r12
  unsigned int v15; // lr
  char v16; // r4
  char v17; // r2
  int v18; // r1
  bool v19; // nf
  char v20; // r3
  int v21; // r0
  char v22; // r3
  unsigned int v23; // r2
  int v24; // r0
  int v25; // r2

  v1 = 0;
  if ( a1 >> 10 <= 0x7A )
  {
    v2 = byte_2B9507[a1 >> 10];
    if ( v2 >= 0x14 )
      core::panicking::panic_bounds_check(byte_2B9507[a1 >> 10], 20, (int)&off_2E4C00);
    v3 = byte_2B9582[16 * v2 + ((a1 >> 6) & 0xF)];
    if ( v3 >= 0x37 )
    {
      v6 = v3 - 55;
      if ( v6 >= 0x15 )
        core::panicking::panic_bounds_check(v6, 21, (int)&off_2E4C10);
      v8 = (unsigned __int8 *)&unk_2B9880 + 2 * v6;
      v7 = *v8;
      if ( v7 >= 0x37 )
        core::panicking::panic_bounds_check(v7, 55, (int)&off_2E4C20);
      v9 = (char)v8[1];
      v10 = dword_2B96C8[2 * v7];
      v11 = dword_2B96C8[2 * v7 + 1];
      v12 = (char)(2 * v9);
      v13 = v10 ^ (v12 >> 7);
      v14 = v11 ^ (v12 >> 7);
      if ( v9 <= -1 )
      {
        v18 = v9 & 0x3F;
        v4 = (v13 >> (v9 & 0x3F)) | (v14 << (32 - (v9 & 0x3F)));
        v20 = v18 - 32;
        v19 = v18 - 32 < 0;
        v5 = v14 >> v18;
        if ( !v19 )
        {
          v4 = v14 >> v20;
          v5 = 0;
        }
      }
      else
      {
        v15 = v14;
        v16 = v9 & 0x1F;
        if ( (v9 & 0x20) != 0 )
        {
          v15 = v13;
          v13 = v14;
        }
        v17 = ~(_BYTE)v9 & 0x1F;
        v5 = (v15 << v16) | (v13 >> 1 >> v17);
        v4 = (v13 << v16) | (v15 >> 1 >> v17);
      }
    }
    else
    {
      v4 = dword_2B96C8[2 * v3];
      v5 = dword_2B96C8[2 * v3 + 1];
    }
    v21 = a1 & 0x3F;
    v22 = 32 - v21;
    v23 = v4 >> v21;
    v24 = v21 - 32;
    v25 = v23 | (v5 << v22);
    if ( v24 >= 0 )
      v25 = v5 >> v24;
    return v25 & 1;
  }
  return v1;
}
