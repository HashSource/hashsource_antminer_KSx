int eeprom_load()
{
  int v0; // r1
  int v1; // r6
  int v2; // r3
  int v3; // r4
  int one_chain; // r0

  v0 = dword_2E8A8C[0];
  if ( dword_2E8A8C[0] )
  {
    if ( *(_BYTE *)(dword_2E8A8C[0] + 80) )
      return 0;
    if ( dword_2E8A90 <= 0 )
    {
LABEL_10:
      v1 = 0;
      *(_BYTE *)(v0 + 80) = 1;
      return v1;
    }
  }
  else
  {
    if ( sub_1078BC() )
      return -1;
    v0 = dword_2E8A8C[0];
    if ( dword_2E8A90 <= 0 )
      goto LABEL_10;
  }
  v2 = 0;
  v1 = 0;
  LOBYTE(v3) = 0;
  while ( 1 )
  {
    v3 = (unsigned __int8)(v3 + 1);
    one_chain = eeprom_load_one_chain(dword_2E8A8C[v2 + 2], v0);
    v2 = v3;
    v1 |= one_chain;
    if ( v3 >= dword_2E8A90 )
      break;
    v0 = dword_2E8A8C[0];
  }
  if ( !v1 )
  {
    v0 = dword_2E8A8C[0];
    goto LABEL_10;
  }
  return v1;
}
