void __fastcall __noreturn rust_begin_unwind(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5[3]; // [sp+4h] [bp-Ch] BYREF

  v2 = core::panic::panic_info::PanicInfo::location(a1);
  if ( !v2 )
    core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DE394);
  v3 = v2;
  v4 = core::panic::panic_info::PanicInfo::message(a1);
  if ( !v4 )
    core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DE384);
  v5[0] = v4;
  v5[1] = a1;
  v5[2] = v3;
  sub_1E51B8(v5);
}
