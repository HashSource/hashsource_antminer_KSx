int __fastcall <gimli::read::abbrev::Attributes as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  __int64 v2; // r8
  int v3; // r7
  unsigned __int8 v5[8]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    core::fmt::Formatter::debug_list((int)v5, a2);
    if ( !HIDWORD(v2) )
      return core::fmt::builders::DebugList::finish((int)v5);
    goto LABEL_6;
  }
  HIDWORD(v2) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(v2) >= 6 )
    core::slice::index::slice_end_index_len_fail(*(_DWORD *)(a1 + 4), 5, (int)&off_2CCC14);
  LODWORD(v2) = a1 + 8;
  core::fmt::Formatter::debug_list((int)v5, a2);
  if ( HIDWORD(v2) )
  {
LABEL_6:
    v3 = 16 * HIDWORD(v2);
    do
    {
      v6 = v2;
      core::fmt::builders::DebugSet::entry(v5, (int)&v6, (int)&off_2CCB04);
      v3 -= 16;
      LODWORD(v2) = v2 + 16;
    }
    while ( v3 );
  }
  return core::fmt::builders::DebugList::finish((int)v5);
}
