int __fastcall std::sys_common::fs::try_exists(_WORD *a1, _BYTE *a2, size_t a3)
{
  __int64 v5; // [sp+0h] [bp-B8h] BYREF

  std::sys::unix::fs::stat((int)&v5, a2, a3);
  if ( v5 == 2 )
    __asm { ADD             PC, R1, R2 }
  *a1 = 260;
  return 260;
}
