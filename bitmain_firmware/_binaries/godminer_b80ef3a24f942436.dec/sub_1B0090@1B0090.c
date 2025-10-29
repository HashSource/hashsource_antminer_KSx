int __fastcall sub_1B0090(int a1, int *a2)
{
  __int64 v4; // [sp+0h] [bp-10h] BYREF
  __int64 v5; // [sp+8h] [bp-8h] BYREF

  v5 = core::str::lossy::Utf8Chunks::new(*(_DWORD *)(*(_DWORD *)a1 + 4), *(_DWORD *)(*(_DWORD *)a1 + 8));
  v4 = core::str::lossy::Utf8Chunks::debug(&v5);
  return <core::str::lossy::Debug as core::fmt::Debug>::fmt((int *)&v4, a2);
}
