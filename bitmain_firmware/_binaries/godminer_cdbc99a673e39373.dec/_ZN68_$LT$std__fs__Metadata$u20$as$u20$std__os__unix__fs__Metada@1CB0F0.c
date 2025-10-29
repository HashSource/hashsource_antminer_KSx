__int64 __fastcall <std::fs::Metadata as std::os::unix::fs::MetadataExt>::atime(int a1)
{
  if ( *(_QWORD *)a1 == 1 && (*(_BYTE *)(a1 + 72) & 0x20) != 0 )
    return *(_QWORD *)(a1 + 24);
  else
    return *(int *)(a1 + 152);
}
