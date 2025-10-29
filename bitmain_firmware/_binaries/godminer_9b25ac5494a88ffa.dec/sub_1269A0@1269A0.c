int sub_1269A0()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30A794 != 1 )
    sub_126318();
  sub_126208();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E5C7C, &v1, 1u) != 1 )
    sub_1264A4();
  sub_1262DC();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E5C7C, &v1, 1u) != 1 )
    sub_12653C();
  return usleep(0x3E8u);
}
