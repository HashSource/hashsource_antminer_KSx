__int64 __fastcall <std::fs::Metadata as std::os::unix::fs::MetadataExt>::ctime(int a1)
{
  if ( *(_QWORD *)a1 == 1 && (*(_BYTE *)(a1 + 72) & 0x80) != 0 )
    return *(_QWORD *)(a1 + 40);
  else
    return *(int *)(a1 + 168);
}
