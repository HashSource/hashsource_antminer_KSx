int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_311400[0] && *(_BYTE *)(dword_311400[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_311400[0] + 4 * dword_311400[a1 + 2]) + 2);
  sub_119064();
  return 0;
}
