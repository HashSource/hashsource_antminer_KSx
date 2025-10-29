int __fastcall serdes_apb_write(int a1, int a2, char a3, int a4, int a5)
{
  sub_CFBEC(a1, a3, 77, a5 | (a5 << 16));
  sub_CFBEC(a1, a3, 78, a4 | 0x80310000);
  return 0;
}
