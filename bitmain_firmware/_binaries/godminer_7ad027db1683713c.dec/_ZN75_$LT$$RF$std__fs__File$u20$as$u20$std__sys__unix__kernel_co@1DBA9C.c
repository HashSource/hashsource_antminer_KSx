void *__fastcall <&std::fs::File as std::sys::unix::kernel_copy::CopyRead>::properties(_QWORD *a1, int **a2)
{
  int *v2; // r6
  __int64 v4; // r6
  void *result; // r0
  _DWORD v6[46]; // [sp+0h] [bp-B8h] BYREF

  v2 = *a2;
  sub_1DBCA4(v6, **a2);
  HIDWORD(v4) = *v2;
  result = memcpy(a1 + 1, v6, 0xB8u);
  LODWORD(v4) = 1;
  *a1 = v4;
  return result;
}
