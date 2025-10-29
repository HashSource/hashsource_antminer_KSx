int sub_126910()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30A794 != 1 )
    sub_126318();
  v1 = 49;
  if ( write(dword_2E5C7C, &v1, 1u) != 1 )
    sub_12653C();
  sub_1262DC();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E5C7C, &v1, 1u) != 1 )
    sub_1264A4();
  return usleep(0x3E8u);
}
