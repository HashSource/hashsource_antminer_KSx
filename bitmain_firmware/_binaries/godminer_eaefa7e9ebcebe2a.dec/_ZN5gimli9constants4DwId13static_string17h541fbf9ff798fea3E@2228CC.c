int __fastcall gimli::constants::DwId::static_string(char *a1)
{
  unsigned int v1; // r1

  v1 = *a1;
  if ( v1 >= 4 )
    return 0;
  else
    return (int)*(&off_2E2884 + v1);
}
