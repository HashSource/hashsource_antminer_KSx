int __fastcall eeprom_vol_freq_override(int a1, int a2)
{
  int v4; // r1
  int v5; // r3
  int v6; // r6
  unsigned __int8 v7; // r4
  int v8; // r0

  v4 = dword_311400[0];
  if ( dword_311400[0] )
  {
    if ( dword_311404 <= 0 )
      goto LABEL_9;
    goto LABEL_3;
  }
  if ( sub_118B14() )
    return -1;
  v4 = dword_311400[0];
  if ( dword_311404 > 0 )
  {
LABEL_3:
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = eeprom_rewrite_one_chain(dword_311400[v5 + 2], v4, a1, a2);
      v5 = ++v7;
      v6 |= v8;
      if ( v7 >= dword_311404 )
        break;
      v4 = dword_311400[0];
    }
    if ( v6 )
      return v6;
    v4 = dword_311400[0];
  }
LABEL_9:
  *(_BYTE *)(v4 + 80) = 1;
  return 0;
}
