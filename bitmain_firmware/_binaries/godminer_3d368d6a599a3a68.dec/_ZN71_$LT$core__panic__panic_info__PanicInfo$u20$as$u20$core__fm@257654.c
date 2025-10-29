int __fastcall <core::panic::panic_info::PanicInfo as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+3Ch] [bp+18h] BYREF
  int v4; // [sp+40h] [bp+1Ch] BYREF
  int v5; // [sp+44h] [bp+20h] BYREF
  int v6; // [sp+48h] [bp+24h] BYREF

  v4 = a1 + 8;
  v3 = a1;
  v5 = a1 + 12;
  v6 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aPanicinfo,
           9,
           (int)&unk_2B8321,
           7u,
           (int)&v3,
           (int)&off_2E4918,
           (int)&unk_2B8328,
           7u,
           (int)&v4,
           (int)&off_2E4928,
           (int)&unk_2B4C00,
           8u,
           (int)&v5,
           (int)&off_2E4938,
           (int)&unk_2B832F,
           0xAu,
           (int)&v6,
           (int)&off_2E4658);
}
