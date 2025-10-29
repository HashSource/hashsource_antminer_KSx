void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_306CD4 > 1 )
  {
    v0 = (char *)&unk_306CD9;
    v1 = &dbl_306D28;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_306CD8[dword_306CD4] != v0 );
  }
}
