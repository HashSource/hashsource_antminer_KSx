int __fastcall gimli::constants::DwLle::static_string(char *a1)
{
  unsigned int v1; // r1

  v1 = *a1;
  if ( v1 >= 0xA )
    return 0;
  else
    return (int)*(&off_2E1824 + v1);
}
