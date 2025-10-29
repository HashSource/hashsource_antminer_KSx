unsigned int __fastcall core::num::flt2dec::estimate_max_buf_len(__int16 a1)
{
  int v1; // r1

  v1 = 5;
  if ( a1 < 0 )
    v1 = -12;
  return ((unsigned int)(v1 * a1) >> 4) + 21;
}
