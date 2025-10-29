int __fastcall core::fmt::builders::DebugMap::finish(_BYTE *a1)
{
  _DWORD v2[6]; // [sp+0h] [bp-18h] BYREF

  if ( a1[4] )
    return 1;
  if ( a1[6] )
  {
    v2[3] = 1;
    v2[2] = &off_2D01E4;
    v2[5] = 0;
    v2[0] = 0;
    v2[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v2, (int)&off_2D01EC);
  }
  return (*(int (__fastcall **)(_DWORD, const char *, int))(*(_DWORD *)(*(_DWORD *)a1 + 4) + 12))(
           **(_DWORD **)a1,
           asc_2A06DC,
           1);
}
