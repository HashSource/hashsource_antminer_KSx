void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_2E8B84 > 1 )
  {
    v0 = (char *)&unk_2E8B89;
    v1 = &dbl_2E8BD8;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_2E8B88[dword_2E8B84] != v0 );
  }
}
