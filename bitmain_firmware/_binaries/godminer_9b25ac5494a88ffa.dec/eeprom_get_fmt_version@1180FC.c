int __fastcall eeprom_get_fmt_version(int a1, _BYTE *a2)
{
  int v2; // r3

  if ( !dword_309C08[0] || !*(_BYTE *)(dword_309C08[0] + 80) )
    return sub_114FCC();
  v2 = *(_DWORD *)(dword_309C08[0] + 4 * a1);
  *a2 = *(_BYTE *)(v2 + 2);
  return 0;
}
