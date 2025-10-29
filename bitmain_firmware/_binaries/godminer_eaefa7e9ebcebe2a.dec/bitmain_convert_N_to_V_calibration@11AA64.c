void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_306CCC > 1 )
  {
    v0 = (char *)&unk_306CD1;
    v1 = &dbl_306D20;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_306CD0[dword_306CCC] != v0 );
  }
}
