int __fastcall <gimli::read::abbrev::Attributes as core::fmt::Debug>::fmt(int a1)
{
  __int64 v1; // r8
  int v2; // r7
  _BYTE v4[8]; // [sp+4h] [bp-Ch] BYREF
  int v5; // [sp+Ch] [bp-4h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    core::fmt::Formatter::debug_list(v4);
    if ( !HIDWORD(v1) )
      return core::fmt::builders::DebugList::finish(v4);
    goto LABEL_6;
  }
  HIDWORD(v1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(v1) >= 6 )
    core::slice::index::slice_end_index_len_fail();
  LODWORD(v1) = a1 + 8;
  core::fmt::Formatter::debug_list(v4);
  if ( HIDWORD(v1) )
  {
LABEL_6:
    v2 = 16 * HIDWORD(v1);
    do
    {
      v5 = v1;
      core::fmt::builders::DebugSet::entry(v4, &v5, &off_2E3B04);
      v2 -= 16;
      LODWORD(v1) = v1 + 16;
    }
    while ( v2 );
  }
  return core::fmt::builders::DebugList::finish(v4);
}
