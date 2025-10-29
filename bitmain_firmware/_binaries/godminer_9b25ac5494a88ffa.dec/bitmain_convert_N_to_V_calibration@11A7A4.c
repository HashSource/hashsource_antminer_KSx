void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_309CFC > 1 )
  {
    v0 = (char *)&unk_309D01;
    v1 = &dbl_309D50;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_309D00[dword_309CFC] != v0 );
  }
}
