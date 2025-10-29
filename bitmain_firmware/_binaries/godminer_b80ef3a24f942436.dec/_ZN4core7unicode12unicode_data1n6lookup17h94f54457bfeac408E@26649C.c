int __fastcall core::unicode::unicode_data::n::lookup(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r1
  unsigned int v3; // r3
  unsigned int v4; // r12
  bool v5; // cf
  unsigned int v6; // r3
  int v7; // r5
  int v8; // r4
  unsigned int v9; // r2
  int v10; // r12
  int v11; // r1
  int v12; // r1
  int v13; // r3
  unsigned int v14; // lr
  int v15; // r0
  unsigned int v16; // r1

  v1 = a1 << 11;
  v2 = 0;
  v3 = 39;
  v4 = 39;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = v2 + (v3 >> 1);
      v7 = dword_2C470C[v6];
      v8 = v1 != v7 << 11;
      if ( v1 > v7 << 11 )
        v8 = -1;
      if ( v8 != 1 )
        break;
      v4 = v6;
      v5 = v6 >= v2;
      v3 = v6 - v2;
      if ( v3 == 0 || !v5 )
        goto LABEL_11;
    }
    if ( (unsigned __int8)v8 != 255 )
      break;
    v2 = v6 + 1;
    v5 = v4 >= v6 + 1;
    v3 = v4 - (v6 + 1);
    if ( v3 == 0 || !v5 )
      goto LABEL_11;
  }
  v2 = v6 + 1;
LABEL_11:
  if ( v2 > 0x26 )
    core::panicking::panic_bounds_check(v2, 39, (int)&off_2EFBE0);
  v9 = dword_2C470C[v2] >> 21;
  if ( v2 == 38 )
  {
    v10 = 275;
    v11 = 37;
    goto LABEL_16;
  }
  v10 = dword_2C470C[v2 + 1] >> 21;
  if ( v2 )
  {
    v11 = v2 - 1;
LABEL_16:
    v12 = dword_2C470C[v11] & 0x1FFFFF;
    if ( !(v10 + ~v9) )
      return v9 & 1;
    goto LABEL_17;
  }
  v12 = 0;
  if ( !(v10 + ~v9) )
    return v9 & 1;
LABEL_17:
  v13 = v10 - 1;
  v14 = a1 - v12;
  v15 = v9;
  if ( v9 < 0x114 )
    v15 = 275;
  v16 = 0;
  while ( 1 )
  {
    if ( v15 == v9 )
      core::panicking::panic_bounds_check(v15, 275, (int)&off_2EFBF0);
    v16 += byte_2C47A8[v9];
    if ( v16 > v14 )
      break;
    if ( v13 == ++v9 )
      return v13 & 1;
  }
  return v9 & 1;
}
