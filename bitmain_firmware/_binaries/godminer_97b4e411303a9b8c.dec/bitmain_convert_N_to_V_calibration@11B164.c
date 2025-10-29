void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_30BD1C > 1 )
  {
    v0 = (char *)&unk_30BD21;
    v1 = &dbl_30BD70;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_30BD20[dword_30BD1C] != v0 );
  }
}
