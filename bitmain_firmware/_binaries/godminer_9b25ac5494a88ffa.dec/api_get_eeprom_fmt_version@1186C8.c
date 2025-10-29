int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_309C08[0] && *(_BYTE *)(dword_309C08[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_309C08[0] + 4 * dword_309C08[a1 + 2]) + 2);
  sub_114FCC();
  return 0;
}
