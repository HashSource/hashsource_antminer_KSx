int __fastcall gimli::constants::DwDefaulted::static_string(char *a1)
{
  unsigned int v1; // r1

  v1 = *a1;
  if ( v1 >= 3 )
    return 0;
  else
    return (int)*(&off_2ED8A4 + v1);
}
