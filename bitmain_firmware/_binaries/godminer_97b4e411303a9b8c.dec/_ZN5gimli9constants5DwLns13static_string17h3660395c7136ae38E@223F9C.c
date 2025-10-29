int __fastcall gimli::constants::DwLns::static_string(_BYTE *a1)
{
  unsigned __int8 v1; // r0

  v1 = *a1 - 1;
  if ( v1 >= 0xCu )
    return 0;
  else
    return (int)*(&off_2E38B0 + (char)v1);
}
