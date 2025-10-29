int __fastcall _rust_start_panic(_DWORD *a1)
{
  __int64 v1; // r4
  void *v2; // r0
  void *v3; // r4
  _DWORD v5[28]; // [sp+0h] [bp-70h] BYREF

  v1 = ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(a1[1] + 12))(*a1);
  memset(&v5[3], 0, 0x50u);
  v5[1] = 1297046016;
  v5[0] = 1381323604;
  v5[2] = sub_201B68;
  v5[24] = &unk_2A99F8;
  *(_QWORD *)&v5[25] = v1;
  v2 = (void *)_rust_alloc(0x70u);
  if ( !v2 )
    alloc::alloc::handle_alloc_error();
  v3 = v2;
  memcpy(v2, v5, 0x70u);
  return Unwind_RaiseException(v3);
}
