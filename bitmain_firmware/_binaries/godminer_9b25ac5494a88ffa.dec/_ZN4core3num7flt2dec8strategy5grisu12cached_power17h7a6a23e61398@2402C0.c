int __fastcall core::num::flt2dec::strategy::grisu::cached_power(int result, int a2, __int16 a3)
{
  int v3; // kr00_4
  char *v4; // r2
  __int16 v5; // r1
  __int16 v6; // r3

  v3 = (int)&elf_hash_chain[20 * a3 + 1138];
  if ( (unsigned int)(v3 / 2126) > 0x50 )
    core::panicking::panic_bounds_check(v3 / 2126, 81, (int)&off_2E2C94);
  v4 = (char *)&core::num::flt2dec::strategy::grisu::CACHED_POW10 + 16 * (v3 / 2126);
  v5 = *((_WORD *)v4 + 4);
  v6 = *((_WORD *)v4 + 5);
  *(_QWORD *)(result + 8) = *(_QWORD *)v4;
  *(_WORD *)(result + 16) = v5;
  *(_WORD *)result = v6;
  return result;
}
