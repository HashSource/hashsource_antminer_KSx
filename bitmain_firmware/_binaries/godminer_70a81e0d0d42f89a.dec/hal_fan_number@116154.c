int hal_fan_number()
{
  char *v0; // r3
  int v1; // r2
  int result; // r0

  v0 = (char *)&unk_299504;
  v1 = 0;
  result = 0;
  while ( 1 )
  {
    v0 += 12;
    if ( v1 != -1 )
      ++result;
    if ( v0 == "king" )
      break;
    v1 = *((_DWORD *)v0 - 3);
  }
  return result;
}
