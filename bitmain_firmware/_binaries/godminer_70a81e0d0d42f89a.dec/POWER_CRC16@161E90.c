int __fastcall POWER_CRC16(unsigned __int8 *a1, int a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r1
  int v4; // r12
  int v5; // t1
  char *v6; // r2

  if ( !a2 )
    return 0xFFFF;
  v2 = 255;
  v3 = &a1[(unsigned __int16)(a2 - 1) + 1];
  v4 = 255;
  do
  {
    v5 = *a1++;
    v6 = (char *)crc_itu_t_table + (v2 ^ v5);
    v2 = (unsigned __int8)v6[512] ^ v4;
    v4 = (unsigned __int8)v6[768];
  }
  while ( a1 != v3 );
  return v2 | (v4 << 8);
}
