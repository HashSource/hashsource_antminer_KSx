int __fastcall <std::os::unix::ucred::UCred as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1 + 8;
  v5 = a1;
  v4 = a1 + 12;
  return ((int (__fastcall *)(int, void *, int, const char *, int, int *, int (**)(), const char *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A70D5,
           5,
           aUid,
           3,
           &v3,
           &off_2DF1A0,
           aGid,
           3,
           &v4,
           &off_2DF1A0,
           &unk_2A70E0,
           3,
           &v5,
           &off_2E0690);
}
