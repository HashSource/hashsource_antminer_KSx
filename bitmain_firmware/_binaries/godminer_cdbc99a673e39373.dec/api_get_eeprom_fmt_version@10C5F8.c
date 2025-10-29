int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_2E9F84[0] && *(_BYTE *)(dword_2E9F84[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_2E9F84[0] + 4 * dword_2E9F84[a1 + 2]) + 2);
  sub_108EFC();
  return 0;
}
