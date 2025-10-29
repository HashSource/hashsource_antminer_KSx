int __fastcall gimli::constants::DwSectV2::static_string(_DWORD *a1)
{
  unsigned int v1; // r1

  v1 = *a1 - 1;
  if ( v1 >= 8 )
    return 0;
  else
    return (int)*(&off_2E2804 + v1);
}
