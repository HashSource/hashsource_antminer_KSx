int __fastcall core::fmt::pointer_fmt_inner(unsigned int a1, _DWORD *a2)
{
  int v2; // r10
  int v4; // r9
  int v5; // r8
  int v6; // r1
  int v7; // r1
  char v8; // r7
  _BYTE *v9; // r6
  int result; // r0
  _BYTE v11[128]; // [sp+8h] [bp-80h] BYREF

  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[6];
  v2 = v6;
  if ( (v6 & 4) != 0 )
  {
    v6 |= 8u;
    if ( !v4 )
    {
      a2[2] = 1;
      a2[3] = 10;
    }
  }
  a2[6] = v6 | 4;
  v7 = 0;
  do
  {
    v8 = 87;
    v9 = &v11[-v7];
    if ( (a1 & 0xF) < 0xA )
      v8 = 48;
    ++v7;
    v9[127] = v8 + (a1 & 0xF);
    a1 >>= 4;
  }
  while ( a1 );
  if ( (unsigned int)(128 - v7) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  result = core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v11[-v7 + 128], v7);
  a2[6] = v2;
  a2[2] = v4;
  a2[3] = v5;
  return result;
}
