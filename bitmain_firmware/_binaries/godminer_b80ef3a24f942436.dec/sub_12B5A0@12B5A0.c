int sub_12B5A0()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_311F8C != 1 )
    sub_12AF18();
  sub_12AE08();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2F1874, &v1, 1u) != 1 )
    sub_12B0A4();
  sub_12AEDC();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2F1874, &v1, 1u) != 1 )
    sub_12B13C();
  return usleep(0x3E8u);
}
