void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_30D034 > 1 )
  {
    v0 = (char *)&unk_30D039;
    v1 = &dbl_30D088;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_30D038[dword_30D034] != v0 );
  }
}
