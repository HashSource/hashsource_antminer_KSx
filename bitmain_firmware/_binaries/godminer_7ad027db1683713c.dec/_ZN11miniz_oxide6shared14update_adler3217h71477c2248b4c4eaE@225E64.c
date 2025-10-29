void __fastcall miniz_oxide::shared::update_adler32(int a1, int a2, int a3)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  adler::Adler32::write_slice((unsigned __int16 *)&v3, a2, a3);
}
