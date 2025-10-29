int sub_1165B0()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_2E94B0 != 1 )
    sub_115F28();
  sub_115E18();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2D10A0, &v1, 1u) != 1 )
    sub_1160B4();
  sub_115EEC();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2D10A0, &v1, 1u) != 1 )
    sub_11614C();
  return usleep(0x3E8u);
}
