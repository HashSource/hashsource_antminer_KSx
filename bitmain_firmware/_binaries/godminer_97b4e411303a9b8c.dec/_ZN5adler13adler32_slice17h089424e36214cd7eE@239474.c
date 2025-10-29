int __fastcall adler::adler32_slice(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 1;
  adler::Adler32::write_slice((unsigned __int16 *)&v3, a1, a2);
  return v3;
}
