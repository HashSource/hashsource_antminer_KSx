int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_30CF3C[0] && *(_BYTE *)(dword_30CF3C[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_30CF3C[0] + 4 * dword_30CF3C[a1 + 2]) + 2);
  sub_116DDC();
  return 0;
}
