int __fastcall <std::io::buffered::bufwriter::WriterPanicked as core::fmt::Display>::fmt(int a1, int a2)
{
  _DWORD v3[6]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[2]; // [sp+18h] [bp-8h] BYREF

  v3[3] = 1;
  v3[5] = 1;
  v3[4] = v4;
  v3[0] = 0;
  v4[1] = sub_1ACA10;
  v4[0] = &off_2DE988;
  v3[2] = &off_2DE980;
  return core::fmt::Formatter::write_fmt(a2, v3);
}
