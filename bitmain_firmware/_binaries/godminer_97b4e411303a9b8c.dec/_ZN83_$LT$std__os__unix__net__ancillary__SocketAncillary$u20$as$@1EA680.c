int __fastcall <std::os::unix::net::ancillary::SocketAncillary as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 12;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A70B7,
           15,
           &unk_2A5DC1,
           6,
           &v3,
           &off_2E0670,
           &unk_2A70C6,
           6,
           &v4,
           &off_2DF3A8,
           &unk_2A70CC,
           9,
           &v5,
           &off_2E05F0);
}
