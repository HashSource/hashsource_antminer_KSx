int __fastcall <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(int a1)
{
  __int64 v1; // r0

  if ( *(_DWORD *)a1 )
  {
    return *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 4) >= 6u )
      core::slice::index::slice_end_index_len_fail();
    LODWORD(v1) = a1 + 8;
  }
  return v1;
}
