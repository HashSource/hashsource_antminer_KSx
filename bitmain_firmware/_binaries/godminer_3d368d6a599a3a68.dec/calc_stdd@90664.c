int __fastcall calc_stdd(double a1)
{
  double v1; // d19
  int *v2; // r2
  int v3; // r3
  int v4; // t1
  double v5; // d17
  int v6; // t1

  v1 = (double)SHIDWORD(a1);
  if ( *(__int64 *)&a1 <= 0 )
  {
    v5 = 0.0;
  }
  else
  {
    HIDWORD(a1) = LODWORD(a1) + 4 * HIDWORD(a1);
    v2 = (int *)LODWORD(a1);
    v3 = 0;
    do
    {
      v4 = *v2++;
      v3 += v4;
    }
    while ( (int *)HIDWORD(a1) != v2 );
    v5 = 0.0;
    do
    {
      v6 = *(_DWORD *)LODWORD(a1);
      LODWORD(a1) += 4;
      v5 = v5 + ((double)v6 - (double)v3 / v1) * ((double)v6 - (double)v3 / v1);
    }
    while ( v2 != (int *)LODWORD(a1) );
  }
  if ( v5 / v1 < 0.0 )
    a1 = sqrt(a1);
  return LODWORD(a1);
}
