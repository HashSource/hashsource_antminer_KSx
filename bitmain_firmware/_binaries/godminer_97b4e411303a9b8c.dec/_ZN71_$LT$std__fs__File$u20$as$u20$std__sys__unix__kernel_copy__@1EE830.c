void *__fastcall <std::fs::File as std::sys::unix::kernel_copy::CopyRead>::properties(_QWORD *a1, _DWORD *a2)
{
  __int64 v2; // r6
  void *result; // r0
  _BYTE v5[184]; // [sp+0h] [bp-B8h] BYREF

  HIDWORD(v2) = *a2;
  sub_1EEA78(v5, *a2);
  result = memcpy(a1 + 1, v5, 0xB8u);
  LODWORD(v2) = 1;
  *a1 = v2;
  return result;
}
