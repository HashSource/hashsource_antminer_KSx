int __fastcall <std::os::unix::ucred::UCred as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1 + 8;
  v5 = a1;
  v4 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B1CD5,
           5,
           (int)aUid,
           3u,
           (int)&v3,
           (int)&off_2E91A0,
           (int)aGid,
           3u,
           (int)&v4,
           (int)&off_2E91A0,
           (int)&unk_2B1CE0,
           3u,
           (int)&v5,
           (int)&off_2EA690);
}
