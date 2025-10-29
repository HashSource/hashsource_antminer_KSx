__int64 __fastcall <std::fs::Metadata as std::os::unix::fs::MetadataExt>::mtime(int a1)
{
  if ( *(_QWORD *)a1 == 1 && (*(_BYTE *)(a1 + 72) & 0x40) != 0 )
    return *(_QWORD *)(a1 + 56);
  else
    return *(int *)(a1 + 160);
}
