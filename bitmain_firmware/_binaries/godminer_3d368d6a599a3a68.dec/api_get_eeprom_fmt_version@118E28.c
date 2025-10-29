int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_306BE0[0] && *(_BYTE *)(dword_306BE0[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_306BE0[0] + 4 * dword_306BE0[a1 + 2]) + 2);
  sub_11572C();
  return 0;
}
