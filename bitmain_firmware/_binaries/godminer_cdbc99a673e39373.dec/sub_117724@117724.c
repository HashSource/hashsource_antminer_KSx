int sub_117724()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_2EA9A8 != 1 )
    sub_11709C();
  sub_116F8C();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2D2590, &v1, 1u) != 1 )
    sub_117228();
  sub_117060();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2D2590, &v1, 1u) != 1 )
    sub_1172C0();
  return usleep(0x3E8u);
}
