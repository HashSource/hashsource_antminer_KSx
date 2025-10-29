bool __fastcall std::sys::unix::kernel_copy::FdMeta::potential_sendfile_source(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( *(_QWORD *)a1 <= 1u )
    return (*(_DWORD *)(a1 + 96) & 0xF000) == 0x8000 && *(_QWORD *)(a1 + 128) != 0
        || (*(_DWORD *)(a1 + 96) & 0xF000) == 24576;
  return v1;
}
