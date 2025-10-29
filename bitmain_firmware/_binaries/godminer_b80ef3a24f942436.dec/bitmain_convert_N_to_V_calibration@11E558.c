void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_3114F4 > 1 )
  {
    v0 = (char *)&unk_3114F9;
    v1 = &dbl_311548;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_3114F8[dword_3114F4] != v0 );
  }
}
