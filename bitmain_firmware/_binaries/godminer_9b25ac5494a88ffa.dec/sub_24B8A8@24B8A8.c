int __fastcall sub_24B8A8(unsigned int *a1, _DWORD *a2)
{
  int v2; // r10
  int v4; // r9
  int v5; // r8
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r1
  char v9; // r7
  _BYTE *v10; // r6
  int result; // r0
  _BYTE v12[128]; // [sp+8h] [bp-80h] BYREF

  v4 = a2[2];
  v5 = a2[3];
  v6 = *a1;
  v7 = a2[6];
  v2 = v7;
  if ( (v7 & 4) != 0 )
  {
    v7 |= 8u;
    if ( !v4 )
    {
      a2[2] = 1;
      a2[3] = 10;
    }
  }
  a2[6] = v7 | 4;
  v8 = 0;
  do
  {
    v9 = 87;
    v10 = &v12[-v8];
    if ( (v6 & 0xF) < 0xA )
      v9 = 48;
    ++v8;
    v10[127] = v9 + (v6 & 0xF);
    v6 >>= 4;
  }
  while ( v6 );
  if ( (unsigned int)(128 - v8) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  result = core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[-v8 + 128], v8);
  a2[6] = v2;
  a2[2] = v4;
  a2[3] = v5;
  return result;
}
