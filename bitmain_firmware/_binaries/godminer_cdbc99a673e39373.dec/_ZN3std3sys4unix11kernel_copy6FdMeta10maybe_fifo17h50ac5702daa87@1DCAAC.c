void __fastcall std::sys::unix::kernel_copy::FdMeta::maybe_fifo(_QWORD *a1)
{
  int v1; // r2

  v1 = *a1 > 1u;
  if ( *a1 > 1u )
    v1 = *(_DWORD *)a1 - 1;
  __asm { ADD             PC, R3, R2 }
}
