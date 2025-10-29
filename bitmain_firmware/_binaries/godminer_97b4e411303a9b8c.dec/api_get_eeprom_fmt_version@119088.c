int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_30BC28[0] && *(_BYTE *)(dword_30BC28[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_30BC28[0] + 4 * dword_30BC28[a1 + 2]) + 2);
  sub_11598C();
  return 0;
}
