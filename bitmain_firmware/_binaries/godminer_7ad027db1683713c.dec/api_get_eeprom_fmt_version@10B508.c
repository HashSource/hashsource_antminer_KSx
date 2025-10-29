int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * dword_2E8A8C[a1 + 2]) + 2);
  sub_107E0C();
  return 0;
}
