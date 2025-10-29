void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_2EA07C > 1 )
  {
    v0 = (char *)&unk_2EA081;
    v1 = &dbl_2EA0D0;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_2EA080[dword_2EA07C] != v0 );
  }
}
